//==============================================================================
// Copyright (c) 2010-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  PublicCounterDefinitions for HSAGFX9
//==============================================================================

#include "PublicCounterDefsHSAGfx9.h"

// *** Note, this is an auto-generated file. Do not edit. Execute PublicCounterCompiler to rebuild.

void AutoDefinePublicCountersHSAGfx9(GPA_PublicCounters& p)
{
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4133);

        p.DefinePublicCounter("Wavefronts", "#General#Total wavefronts.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4155);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("VALUInsts", "#General#The average number of vector ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4159);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("SALUInsts", "#General#The average number of scalar ALU instructions executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4157);
        internalCounters.push_back(6682);
        internalCounters.push_back(6801);
        internalCounters.push_back(6920);
        internalCounters.push_back(7039);
        internalCounters.push_back(7158);
        internalCounters.push_back(7277);
        internalCounters.push_back(7396);
        internalCounters.push_back(7515);
        internalCounters.push_back(7634);
        internalCounters.push_back(7753);
        internalCounters.push_back(7872);
        internalCounters.push_back(7991);
        internalCounters.push_back(8110);
        internalCounters.push_back(8229);
        internalCounters.push_back(8348);
        internalCounters.push_back(8467);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("VFetchInsts", "#General#The average number of vector fetch instructions from the video memory executed per work-item (affected by flow control). Excludes FLAT instructions that fetch from video memory.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4160);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("SFetchInsts", "#General#The average number of scalar fetch instructions from the video memory executed per work-item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4156);
        internalCounters.push_back(6683);
        internalCounters.push_back(6802);
        internalCounters.push_back(6921);
        internalCounters.push_back(7040);
        internalCounters.push_back(7159);
        internalCounters.push_back(7278);
        internalCounters.push_back(7397);
        internalCounters.push_back(7516);
        internalCounters.push_back(7635);
        internalCounters.push_back(7754);
        internalCounters.push_back(7873);
        internalCounters.push_back(7992);
        internalCounters.push_back(8111);
        internalCounters.push_back(8230);
        internalCounters.push_back(8349);
        internalCounters.push_back(8468);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("VWriteInsts", "#General#The average number of vector write instructions to the video memory executed per work-item (affected by flow control). Excludes FLAT instructions that write to video memory.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,sum16,-,17,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4163);
        internalCounters.push_back(4162);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("FlatVMemInsts", "#General#The average number of FLAT instructions that read from or write to the video memory executed per work item (affected by flow control). Includes FLAT instructions that read from or write to scratch.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,-,2,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4163);
        internalCounters.push_back(4161);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("LDSInsts", "#LocalMemory#The average number of LDS read or LDS write instructions executed per work item (affected by flow control).  Excludes FLAT instructions that read from or write to LDS.", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,-,2,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4162);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("FlatLDSInsts", "#LocalMemory#The average number of FLAT instructions that read or write to LDS executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4164);
        internalCounters.push_back(4133);

        p.DefinePublicCounter("GDSInsts", "#General#The average number of GDS read or GDS write instructions executed per work item (affected by flow control).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_ITEMS, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4213);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("SALUBusy", "#General#The percentage of GPUTime scalar ALU instructions are processed. Value range: 0% (bad) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,(4),*,NUM_SIMDS,NUM_SHADER_ENGINES,/,/,1,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(8575);
        internalCounters.push_back(8831);
        internalCounters.push_back(9087);
        internalCounters.push_back(9343);
        internalCounters.push_back(9599);
        internalCounters.push_back(9855);
        internalCounters.push_back(10111);
        internalCounters.push_back(10367);
        internalCounters.push_back(10623);
        internalCounters.push_back(10879);
        internalCounters.push_back(11135);
        internalCounters.push_back(11391);
        internalCounters.push_back(11647);
        internalCounters.push_back(11903);
        internalCounters.push_back(12159);
        internalCounters.push_back(12415);
        internalCounters.push_back(8577);
        internalCounters.push_back(8833);
        internalCounters.push_back(9089);
        internalCounters.push_back(9345);
        internalCounters.push_back(9601);
        internalCounters.push_back(9857);
        internalCounters.push_back(10113);
        internalCounters.push_back(10369);
        internalCounters.push_back(10625);
        internalCounters.push_back(10881);
        internalCounters.push_back(11137);
        internalCounters.push_back(11393);
        internalCounters.push_back(11649);
        internalCounters.push_back(11905);
        internalCounters.push_back(12161);
        internalCounters.push_back(12417);

        p.DefinePublicCounter("CacheHit", "#GlobalMemory#The percentage of fetch, write, atomic, and other instructions that hit the data cache. Value range: 0% (no hit) to 100% (optimal).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,sum16,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,sum16,+,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(6596);
        internalCounters.push_back(6715);
        internalCounters.push_back(6834);
        internalCounters.push_back(6953);
        internalCounters.push_back(7072);
        internalCounters.push_back(7191);
        internalCounters.push_back(7310);
        internalCounters.push_back(7429);
        internalCounters.push_back(7548);
        internalCounters.push_back(7667);
        internalCounters.push_back(7786);
        internalCounters.push_back(7905);
        internalCounters.push_back(8024);
        internalCounters.push_back(8143);
        internalCounters.push_back(8262);
        internalCounters.push_back(8381);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("MemUnitBusy", "#GlobalMemory#The percentage of GPUTime the memory unit is active. The result includes the stall time (MemUnitStalled). This is measured with all extra fetches and writes and any cache or memory effects taken into account. Value range: 0% to 100% (fetch-bound).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(13569);
        internalCounters.push_back(13654);
        internalCounters.push_back(13739);
        internalCounters.push_back(13824);
        internalCounters.push_back(13909);
        internalCounters.push_back(13994);
        internalCounters.push_back(14079);
        internalCounters.push_back(14164);
        internalCounters.push_back(14249);
        internalCounters.push_back(14334);
        internalCounters.push_back(14419);
        internalCounters.push_back(14504);
        internalCounters.push_back(14589);
        internalCounters.push_back(14674);
        internalCounters.push_back(14759);
        internalCounters.push_back(14844);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("MemUnitStalled", "#GlobalMemory#The percentage of GPUTime the memory unit is stalled. Try reducing the number or size of fetches and writes if possible. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,max16,16,/,NUM_SHADER_ENGINES,/,(100),*");
    }
    {
        vector< gpa_uint32 > internalCounters;
        internalCounters.push_back(4222);
        internalCounters.push_back(3098);

        p.DefinePublicCounter("LDSBankConflict", "#LocalMemory#The percentage of GPUTime LDS is stalled by bank conflicts. Value range: 0% (optimal) to 100% (bad).", GPA_TYPE_FLOAT64, GPA_USAGE_TYPE_PERCENTAGE, GPA_COUNTER_TYPE_DYNAMIC, internalCounters, "0,1,/,NUM_SIMDS,/,(100),*");
    }
}

