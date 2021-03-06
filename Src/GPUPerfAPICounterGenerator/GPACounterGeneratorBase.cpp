//==============================================================================
// Copyright (c) 2016 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief Base class for counter generation
//==============================================================================

#if defined(WIN32)
    #include <windows.h>
#endif

#include "GPACounterGeneratorBase.h"

GPA_CounterGeneratorBase::GPA_CounterGeneratorBase()
    :   m_doAllowPublicCounters(false),
        m_doAllowHardwareCounters(false),
        m_doAllowSoftwareCounters(false)
{
}

GPA_CounterGeneratorBase::~GPA_CounterGeneratorBase()
{
}

GPA_Status GPA_CounterGeneratorBase::GenerateCounters(GDT_HW_GENERATION desiredGeneration)
{
    GPA_Status status = GPA_STATUS_ERROR_NOT_ENABLED;

    m_publicCounters.Clear();
    m_hardwareCounters.Clear();
    m_softwareCounters.Clear();

    if (m_doAllowPublicCounters)
    {
        status = GeneratePublicCounters(desiredGeneration, &m_publicCounters);

        if (status != GPA_STATUS_OK)
        {
            return status;
        }
    }

    if (m_doAllowPublicCounters || m_doAllowHardwareCounters) // hw counters are required if generating public counters
    {
        status = GenerateHardwareCounters(desiredGeneration, &m_hardwareCounters);

        if (status != GPA_STATUS_OK)
        {
            return status;
        }
    }

#if defined(WIN32)

    if (m_doAllowSoftwareCounters)
    {
        status = GenerateSoftwareCounters(desiredGeneration, &m_softwareCounters);

        if (status != GPA_STATUS_OK)
        {
            return status;
        }
    }

#endif  // WIN32

    if (0 == GetNumCounters())
    {
        // no counters reported, return hardware not supported
        status = GPA_STATUS_ERROR_HARDWARE_NOT_SUPPORTED;
    }

    return status;
}

gpa_uint32 GPA_CounterGeneratorBase::GetNumCounters()
{
    gpa_uint32 count = 0;

    if (m_doAllowPublicCounters)
    {
        count += m_publicCounters.GetNumCounters();
    }

    if (m_doAllowHardwareCounters)
    {
        count += m_hardwareCounters.GetNumCounters();
    }

    if (m_doAllowSoftwareCounters)
    {
        count += m_softwareCounters.GetNumCounters();
    }

    return count;
}

gpa_uint32 GPA_CounterGeneratorBase::GetNumAMDCounters() //to be used for SW D3D counters for AMD
{
    gpa_uint32 count = 0;

    if (m_doAllowPublicCounters)
    {
        count += m_publicCounters.GetNumCounters();
    }

    if (m_doAllowHardwareCounters)
    {
        count += m_hardwareCounters.GetNumCounters();
    }

    return count;
}

const char* GPA_CounterGeneratorBase::GetCounterName(gpa_uint32 index)
{
    if (m_doAllowPublicCounters)
    {
        if (index < m_publicCounters.GetNumCounters())
        {
            return m_publicCounters.GetCounterName(index);
        }
        else
        {
            index -= m_publicCounters.GetNumCounters();
        }
    }

    if (m_doAllowHardwareCounters)
    {
        if (index < m_hardwareCounters.GetNumCounters())
        {
            return m_hardwareCounters.GetCounterName(index);
        }
        else
        {
            index -= m_hardwareCounters.GetNumCounters();
        }
    }

    if (m_doAllowSoftwareCounters)
    {
#if defined(WIN32)

        if (index < m_softwareCounters.GetNumCounters())
        {
            return m_softwareCounters.GetCounterName(index);
        }

#endif // WIN32
    }

    return nullptr;
}

bool GPA_CounterGeneratorBase::GetCounterIndex(const char* pName, gpa_uint32* pIndex)
{

    bool retVal = false;

    if (nullptr != pIndex)
    {
        CounterNameIndexMap::iterator it = m_counterIndexCache.find(pName);
        if (m_counterIndexCache.end() != it)
        {
            *pIndex = m_counterIndexCache[pName];
            retVal = ms_COUNTER_NOT_FOUND != *pIndex;
        }
    }

    if (!retVal)
    {
        gpa_uint32 numCounters = GetNumCounters();

        for (gpa_uint32 i = 0; i < numCounters; i++)
        {
            const char* pCounterName = GetCounterName(i);

            if (0 == _strcmpi(pName, pCounterName))
            {
                m_counterIndexCache[pName] = i;
                *pIndex = i;
                retVal = true;
                break;
            }
        }
    }

    if (!retVal)
    {
        // cache the fact that it wasn't found
        m_counterIndexCache[pName] = ms_COUNTER_NOT_FOUND;
    }

    return retVal;

}

const char* GPA_CounterGeneratorBase::GetCounterDescription(gpa_uint32 index)
{
    if (m_doAllowPublicCounters)
    {
        if (index < m_publicCounters.GetNumCounters())
        {
            return m_publicCounters.GetCounterDescription(index);
        }
        else
        {
            index -= m_publicCounters.GetNumCounters();
        }
    }

    if (m_doAllowHardwareCounters)
    {
        if (index < m_hardwareCounters.GetNumCounters())
        {
            return m_hardwareCounters.GetCounterDescription(index);
        }
        else
        {
            index -= m_hardwareCounters.GetNumCounters();
        }
    }

    if (m_doAllowSoftwareCounters)
    {
#if defined(WIN32)

        if (index < m_softwareCounters.GetNumCounters())
        {
            return m_softwareCounters.GetCounterDescription(index);
        }

#endif  // WIN32
    }

    return nullptr;
}

GPA_Type GPA_CounterGeneratorBase::GetCounterDataType(gpa_uint32 index)
{
    if (m_doAllowPublicCounters)
    {
        if (index < m_publicCounters.GetNumCounters())
        {
            return m_publicCounters.GetCounterDataType(index);
        }
        else
        {
            index -= m_publicCounters.GetNumCounters();
        }
    }

    if (m_doAllowHardwareCounters)
    {
        if (index < m_hardwareCounters.GetNumCounters())
        {
            // hardware counters are always 'uint64'
            return GPA_TYPE_UINT64;
        }
        else
        {
            index -= m_hardwareCounters.GetNumCounters();
        }
    }

    if (m_doAllowSoftwareCounters)
    {
#if defined(WIN32)
        GPA_Type type = GPA_TYPE_UINT64;

        if (s_pSwCounterManager->SwCounterEnabled())
        {
            if (index >= GetNumAMDCounters())
            {
                index -= GetNumAMDCounters();
            }
        }

        if (index < m_softwareCounters.GetNumCounters())
        {
            type = m_softwareCounters.GetCounterType(index);
        }

        return type;
#endif // WIN32

    } // m_bAllowSoftwareCounters

    return GPA_TYPE_UINT64;
}

GPA_Usage_Type GPA_CounterGeneratorBase::GetCounterUsageType(gpa_uint32 index)
{
    if (m_doAllowPublicCounters)
    {
        if (index < m_publicCounters.GetNumCounters())
        {
            return m_publicCounters.GetCounterUsageType(index);
        }
        else
        {
            index -= m_publicCounters.GetNumCounters();
        }
    }

    if (m_doAllowHardwareCounters)
    {
        if (index < m_hardwareCounters.GetNumCounters())
        {
            // hardware counters are always considered 'items'
            return GPA_USAGE_TYPE_ITEMS;
        }
        else
        {
            index -= m_hardwareCounters.GetNumCounters();
        }
    }

    if (m_doAllowSoftwareCounters)
    {
#if defined(WIN32)

        if (s_pSwCounterManager->SwCounterEnabled())
        {
            if (index >= GetNumAMDCounters())
            {
                index -= GetNumAMDCounters();
            }
        }

        if (0 == index)  //SW GPUTime counter
        {
            return GPA_USAGE_TYPE_MILLISECONDS;
        }

        return GPA_USAGE_TYPE_ITEMS;
#endif // WIN32
    }

    return GPA_USAGE_TYPE_ITEMS;
}

const GPA_PublicCounter* GPA_CounterGeneratorBase::GetPublicCounter(gpa_uint32 index)
{
    return m_publicCounters.GetCounter(index);
}

GPA_HardwareCounterDescExt* GPA_CounterGeneratorBase::GetHardwareCounterExt(gpa_uint32 index)
{
    return &(m_hardwareCounters.m_counters[index]);
}

gpa_uint32 GPA_CounterGeneratorBase::GetNumPublicCounters()
{
    return m_publicCounters.GetNumCounters();
}

vector<gpa_uint32> GPA_CounterGeneratorBase::GetInternalCountersRequired(gpa_uint32 index)
{
    if (m_doAllowPublicCounters)
    {
        if (index < m_publicCounters.GetNumCounters())
        {
            return m_publicCounters.GetInternalCountersRequired(index);
        }
        else
        {
            index -= m_publicCounters.GetNumCounters();
        }
    }

    std::vector<gpa_uint32> vecInternalCounters;

    if (m_doAllowHardwareCounters)
    {
        if (index < m_hardwareCounters.GetNumCounters())
        {
            // the index is now the same as the needed hardware counter
            vecInternalCounters.push_back(index);
            return vecInternalCounters;
        }
        else
        {
            index -= m_hardwareCounters.GetNumCounters();
        }
    }

    if (m_doAllowSoftwareCounters)
    {
#if defined(WIN32)

        if (index < m_softwareCounters.GetNumCounters())
        {
            // the index is now the same as the needed hardware counter
            vecInternalCounters.push_back(index);
        }

        index -= m_softwareCounters.GetNumCounters();
#endif // WIN32
    }

    return vecInternalCounters;
}

void GPA_CounterGeneratorBase::ComputePublicCounterValue(gpa_uint32 counterIndex, vector<char*>& results, vector<GPA_Type>& internalCounterTypes, void* pResult, GPA_HWInfo* pHwInfo)
{
    m_publicCounters.ComputeCounterValue(counterIndex, results, internalCounterTypes, pResult, pHwInfo);
}

void GPA_CounterGeneratorBase::ComputeSWCounterValue(gpa_uint32 counterIndex, gpa_uint64 value, void* pResult, GPA_HWInfo* pHwInfo)
{
    UNREFERENCED_PARAMETER(counterIndex);
    UNREFERENCED_PARAMETER(pHwInfo);

    if (nullptr != pResult)
    {
        gpa_uint64* pValue = static_cast<gpa_uint64*>(pResult);
        *pValue = value;
    }
}

GPA_HardwareCounters* GPA_CounterGeneratorBase::GetHardwareCounters()
{
    return &m_hardwareCounters;
}

GPA_SoftwareCounters* GPA_CounterGeneratorBase::GetSoftwareCounters()
{
    return &m_softwareCounters;
}

GPACounterTypeInfo GPA_CounterGeneratorBase::GetCounterTypeInfo(gpa_uint32 globalIndex)
{
    if (m_doAllowPublicCounters)
    {
        if (globalIndex < m_publicCounters.GetNumCounters())
        {
            GPACounterTypeInfo info;
            info.Set(globalIndex, PUBLIC_COUNTER);
            return info;
        }
        else
        {
            globalIndex -= m_publicCounters.GetNumCounters();
        }
    }

    if (m_doAllowHardwareCounters)
    {
        if (globalIndex < m_hardwareCounters.GetNumCounters())
        {
            GPACounterTypeInfo info;
            info.Set(globalIndex, HARDWARE_COUNTER);
            return info;
        }
        else
        {
            globalIndex -= m_hardwareCounters.GetNumCounters();
        }
    }

    if (m_doAllowSoftwareCounters)
    {
        GPACounterTypeInfo info;
        info.Set(globalIndex, SOFTWARE_COUNTER);
        return info;
    }

    /// Unknown counter
    GPACounterTypeInfo info;
    info.Set(globalIndex, UNKNOWN_COUNTER);
    return info;
}

void GPA_CounterGeneratorBase::SetAllowedCounters(bool bAllowPublicCounters, bool bAllowHardwareCounters, bool bAllowSoftwareCounters)
{
    m_doAllowPublicCounters = bAllowPublicCounters;

#ifdef AMDT_INTERNAL
    // Only allow HW counters for internal builds
    m_doAllowHardwareCounters = bAllowHardwareCounters;
#else
    UNREFERENCED_PARAMETER(bAllowHardwareCounters);
    // Force HW counters to OFF for non internal builds
    m_doAllowHardwareCounters = false;
#endif

    m_doAllowSoftwareCounters = bAllowSoftwareCounters;
}
