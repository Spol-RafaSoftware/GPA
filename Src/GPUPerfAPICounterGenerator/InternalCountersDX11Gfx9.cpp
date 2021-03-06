//==============================================================================
// Copyright (c) 2010-2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  DX11 internal counter definitions for GFX9
//==============================================================================

#include "GPAInternalCountersGfx9.h"
#include "InternalCountersDX11Gfx9.h"

// This file is autogenerated by the ConvertHWEnums project

GPA_HardwareCounterDesc* DX11CounterGroupArrayGfx9[] =
{
    SDMA0countersGfx9,
    SDMA1countersGfx9,
    CPFcountersGfx9,
    CB0countersGfx9,
    CB1countersGfx9,
    CB2countersGfx9,
    CB3countersGfx9,
    CB4countersGfx9,
    CB5countersGfx9,
    CB6countersGfx9,
    CB7countersGfx9,
    CB8countersGfx9,
    CB9countersGfx9,
    CB10countersGfx9,
    CB11countersGfx9,
    CB12countersGfx9,
    CB13countersGfx9,
    CB14countersGfx9,
    CB15countersGfx9,
    DB0countersGfx9,
    DB1countersGfx9,
    DB2countersGfx9,
    DB3countersGfx9,
    DB4countersGfx9,
    DB5countersGfx9,
    DB6countersGfx9,
    DB7countersGfx9,
    DB8countersGfx9,
    DB9countersGfx9,
    DB10countersGfx9,
    DB11countersGfx9,
    DB12countersGfx9,
    DB13countersGfx9,
    DB14countersGfx9,
    DB15countersGfx9,
    GRBMcountersGfx9,
    GRBMSE0countersGfx9,
    GRBMSE1countersGfx9,
    GRBMSE2countersGfx9,
    GRBMSE3countersGfx9,
    RLCcountersGfx9,
    PA_SU0countersGfx9,
    PA_SU1countersGfx9,
    PA_SU2countersGfx9,
    PA_SU3countersGfx9,
    PA_SC0countersGfx9,
    PA_SC1countersGfx9,
    PA_SC2countersGfx9,
    PA_SC3countersGfx9,
    SX0countersGfx9,
    SX1countersGfx9,
    SX2countersGfx9,
    SX3countersGfx9,
    SPI0countersGfx9,
    SPI1countersGfx9,
    SPI2countersGfx9,
    SPI3countersGfx9,
    SQ0countersGfx9,
    SQ1countersGfx9,
    SQ2countersGfx9,
    SQ3countersGfx9,
    SQ_ES0countersGfx9,
    SQ_ES1countersGfx9,
    SQ_ES2countersGfx9,
    SQ_ES3countersGfx9,
    SQ_GS0countersGfx9,
    SQ_GS1countersGfx9,
    SQ_GS2countersGfx9,
    SQ_GS3countersGfx9,
    SQ_VS0countersGfx9,
    SQ_VS1countersGfx9,
    SQ_VS2countersGfx9,
    SQ_VS3countersGfx9,
    SQ_PS0countersGfx9,
    SQ_PS1countersGfx9,
    SQ_PS2countersGfx9,
    SQ_PS3countersGfx9,
    SQ_LS0countersGfx9,
    SQ_LS1countersGfx9,
    SQ_LS2countersGfx9,
    SQ_LS3countersGfx9,
    SQ_HS0countersGfx9,
    SQ_HS1countersGfx9,
    SQ_HS2countersGfx9,
    SQ_HS3countersGfx9,
    SQ_CS0countersGfx9,
    SQ_CS1countersGfx9,
    SQ_CS2countersGfx9,
    SQ_CS3countersGfx9,
    TA0countersGfx9,
    TA1countersGfx9,
    TA2countersGfx9,
    TA3countersGfx9,
    TA4countersGfx9,
    TA5countersGfx9,
    TA6countersGfx9,
    TA7countersGfx9,
    TA8countersGfx9,
    TA9countersGfx9,
    TA10countersGfx9,
    TA11countersGfx9,
    TA12countersGfx9,
    TA13countersGfx9,
    TA14countersGfx9,
    TA15countersGfx9,
    TA16countersGfx9,
    TA17countersGfx9,
    TA18countersGfx9,
    TA19countersGfx9,
    TA20countersGfx9,
    TA21countersGfx9,
    TA22countersGfx9,
    TA23countersGfx9,
    TA24countersGfx9,
    TA25countersGfx9,
    TA26countersGfx9,
    TA27countersGfx9,
    TA28countersGfx9,
    TA29countersGfx9,
    TA30countersGfx9,
    TA31countersGfx9,
    TA32countersGfx9,
    TA33countersGfx9,
    TA34countersGfx9,
    TA35countersGfx9,
    TA36countersGfx9,
    TA37countersGfx9,
    TA38countersGfx9,
    TA39countersGfx9,
    TA40countersGfx9,
    TA41countersGfx9,
    TA42countersGfx9,
    TA43countersGfx9,
    TA44countersGfx9,
    TA45countersGfx9,
    TA46countersGfx9,
    TA47countersGfx9,
    TA48countersGfx9,
    TA49countersGfx9,
    TA50countersGfx9,
    TA51countersGfx9,
    TA52countersGfx9,
    TA53countersGfx9,
    TA54countersGfx9,
    TA55countersGfx9,
    TA56countersGfx9,
    TA57countersGfx9,
    TA58countersGfx9,
    TA59countersGfx9,
    TA60countersGfx9,
    TA61countersGfx9,
    TA62countersGfx9,
    TA63countersGfx9,
    TD0countersGfx9,
    TD1countersGfx9,
    TD2countersGfx9,
    TD3countersGfx9,
    TD4countersGfx9,
    TD5countersGfx9,
    TD6countersGfx9,
    TD7countersGfx9,
    TD8countersGfx9,
    TD9countersGfx9,
    TD10countersGfx9,
    TD11countersGfx9,
    TD12countersGfx9,
    TD13countersGfx9,
    TD14countersGfx9,
    TD15countersGfx9,
    TD16countersGfx9,
    TD17countersGfx9,
    TD18countersGfx9,
    TD19countersGfx9,
    TD20countersGfx9,
    TD21countersGfx9,
    TD22countersGfx9,
    TD23countersGfx9,
    TD24countersGfx9,
    TD25countersGfx9,
    TD26countersGfx9,
    TD27countersGfx9,
    TD28countersGfx9,
    TD29countersGfx9,
    TD30countersGfx9,
    TD31countersGfx9,
    TD32countersGfx9,
    TD33countersGfx9,
    TD34countersGfx9,
    TD35countersGfx9,
    TD36countersGfx9,
    TD37countersGfx9,
    TD38countersGfx9,
    TD39countersGfx9,
    TD40countersGfx9,
    TD41countersGfx9,
    TD42countersGfx9,
    TD43countersGfx9,
    TD44countersGfx9,
    TD45countersGfx9,
    TD46countersGfx9,
    TD47countersGfx9,
    TD48countersGfx9,
    TD49countersGfx9,
    TD50countersGfx9,
    TD51countersGfx9,
    TD52countersGfx9,
    TD53countersGfx9,
    TD54countersGfx9,
    TD55countersGfx9,
    TD56countersGfx9,
    TD57countersGfx9,
    TD58countersGfx9,
    TD59countersGfx9,
    TD60countersGfx9,
    TD61countersGfx9,
    TD62countersGfx9,
    TD63countersGfx9,
    TCP0countersGfx9,
    TCP1countersGfx9,
    TCP2countersGfx9,
    TCP3countersGfx9,
    TCP4countersGfx9,
    TCP5countersGfx9,
    TCP6countersGfx9,
    TCP7countersGfx9,
    TCP8countersGfx9,
    TCP9countersGfx9,
    TCP10countersGfx9,
    TCP11countersGfx9,
    TCP12countersGfx9,
    TCP13countersGfx9,
    TCP14countersGfx9,
    TCP15countersGfx9,
    TCP16countersGfx9,
    TCP17countersGfx9,
    TCP18countersGfx9,
    TCP19countersGfx9,
    TCP20countersGfx9,
    TCP21countersGfx9,
    TCP22countersGfx9,
    TCP23countersGfx9,
    TCP24countersGfx9,
    TCP25countersGfx9,
    TCP26countersGfx9,
    TCP27countersGfx9,
    TCP28countersGfx9,
    TCP29countersGfx9,
    TCP30countersGfx9,
    TCP31countersGfx9,
    TCP32countersGfx9,
    TCP33countersGfx9,
    TCP34countersGfx9,
    TCP35countersGfx9,
    TCP36countersGfx9,
    TCP37countersGfx9,
    TCP38countersGfx9,
    TCP39countersGfx9,
    TCP40countersGfx9,
    TCP41countersGfx9,
    TCP42countersGfx9,
    TCP43countersGfx9,
    TCP44countersGfx9,
    TCP45countersGfx9,
    TCP46countersGfx9,
    TCP47countersGfx9,
    TCP48countersGfx9,
    TCP49countersGfx9,
    TCP50countersGfx9,
    TCP51countersGfx9,
    TCP52countersGfx9,
    TCP53countersGfx9,
    TCP54countersGfx9,
    TCP55countersGfx9,
    TCP56countersGfx9,
    TCP57countersGfx9,
    TCP58countersGfx9,
    TCP59countersGfx9,
    TCP60countersGfx9,
    TCP61countersGfx9,
    TCP62countersGfx9,
    TCP63countersGfx9,
    TCC0countersGfx9,
    TCC1countersGfx9,
    TCC2countersGfx9,
    TCC3countersGfx9,
    TCC4countersGfx9,
    TCC5countersGfx9,
    TCC6countersGfx9,
    TCC7countersGfx9,
    TCC8countersGfx9,
    TCC9countersGfx9,
    TCC10countersGfx9,
    TCC11countersGfx9,
    TCC12countersGfx9,
    TCC13countersGfx9,
    TCC14countersGfx9,
    TCC15countersGfx9,
    TCA0countersGfx9,
    TCA1countersGfx9,
    GDScountersGfx9,
    IA0countersGfx9,
    IA1countersGfx9,
    VGT0countersGfx9,
    VGT1countersGfx9,
    VGT2countersGfx9,
    VGT3countersGfx9,
    CPGcountersGfx9,
    CPCcountersGfx9,
    WDcountersGfx9,
    MCVML2countersGfx9,
    ATCcountersGfx9,
    ATCL2countersGfx9,
    RPBcountersGfx9,
    GCEAcountersGfx9,
    RMIcountersGfx9,
    GPUTimeStampcountersGfx9,
    GPUTimecountersGfx9,
};

GPA_CounterGroupDesc HWDX11GroupsGfx9[] =
{
    {0, "SDMA0", 0, 97, 2},
    {1, "SDMA1", 1, 97, 2},
    {2, "CPF", 0, 32, 2},
    {3, "CB0", 0, 438, 4},
    {4, "CB1", 1, 438, 4},
    {5, "CB2", 2, 438, 4},
    {6, "CB3", 3, 438, 4},
    {7, "CB4", 4, 438, 4},
    {8, "CB5", 5, 438, 4},
    {9, "CB6", 6, 438, 4},
    {10, "CB7", 7, 438, 4},
    {11, "CB8", 8, 438, 4},
    {12, "CB9", 9, 438, 4},
    {13, "CB10", 10, 438, 4},
    {14, "CB11", 11, 438, 4},
    {15, "CB12", 12, 438, 4},
    {16, "CB13", 13, 438, 4},
    {17, "CB14", 14, 438, 4},
    {18, "CB15", 15, 438, 4},
    {19, "DB0", 0, 328, 4},
    {20, "DB1", 1, 328, 4},
    {21, "DB2", 2, 328, 4},
    {22, "DB3", 3, 328, 4},
    {23, "DB4", 4, 328, 4},
    {24, "DB5", 5, 328, 4},
    {25, "DB6", 6, 328, 4},
    {26, "DB7", 7, 328, 4},
    {27, "DB8", 8, 328, 4},
    {28, "DB9", 9, 328, 4},
    {29, "DB10", 10, 328, 4},
    {30, "DB11", 11, 328, 4},
    {31, "DB12", 12, 328, 4},
    {32, "DB13", 13, 328, 4},
    {33, "DB14", 14, 328, 4},
    {34, "DB15", 15, 328, 4},
    {35, "GRBM", 0, 38, 2},
    {36, "GRBMSE0", 0, 16, 4},
    {37, "GRBMSE1", 1, 16, 4},
    {38, "GRBMSE2", 2, 16, 4},
    {39, "GRBMSE3", 3, 16, 4},
    {40, "RLC", 0, 7, 2},
    {41, "PA_SU0", 0, 292, 4},
    {42, "PA_SU1", 1, 292, 4},
    {43, "PA_SU2", 2, 292, 4},
    {44, "PA_SU3", 3, 292, 4},
    {45, "PA_SC0", 0, 491, 8},
    {46, "PA_SC1", 1, 491, 8},
    {47, "PA_SC2", 2, 491, 8},
    {48, "PA_SC3", 3, 491, 8},
    {49, "SX0", 0, 208, 4},
    {50, "SX1", 1, 208, 4},
    {51, "SX2", 2, 208, 4},
    {52, "SX3", 3, 208, 4},
    {53, "SPI0", 0, 196, 6},
    {54, "SPI1", 1, 196, 6},
    {55, "SPI2", 2, 196, 6},
    {56, "SPI3", 3, 196, 6},
    {57, "SQ0", 0, 374, 16},
    {58, "SQ1", 1, 374, 16},
    {59, "SQ2", 2, 374, 16},
    {60, "SQ3", 3, 374, 16},
    {61, "SQ_ES0", 0, 374, 16},
    {62, "SQ_ES1", 1, 374, 16},
    {63, "SQ_ES2", 2, 374, 16},
    {64, "SQ_ES3", 3, 374, 16},
    {65, "SQ_GS0", 0, 374, 16},
    {66, "SQ_GS1", 1, 374, 16},
    {67, "SQ_GS2", 2, 374, 16},
    {68, "SQ_GS3", 3, 374, 16},
    {69, "SQ_VS0", 0, 374, 16},
    {70, "SQ_VS1", 1, 374, 16},
    {71, "SQ_VS2", 2, 374, 16},
    {72, "SQ_VS3", 3, 374, 16},
    {73, "SQ_PS0", 0, 374, 16},
    {74, "SQ_PS1", 1, 374, 16},
    {75, "SQ_PS2", 2, 374, 16},
    {76, "SQ_PS3", 3, 374, 16},
    {77, "SQ_LS0", 0, 374, 16},
    {78, "SQ_LS1", 1, 374, 16},
    {79, "SQ_LS2", 2, 374, 16},
    {80, "SQ_LS3", 3, 374, 16},
    {81, "SQ_HS0", 0, 374, 16},
    {82, "SQ_HS1", 1, 374, 16},
    {83, "SQ_HS2", 2, 374, 16},
    {84, "SQ_HS3", 3, 374, 16},
    {85, "SQ_CS0", 0, 374, 16},
    {86, "SQ_CS1", 1, 374, 16},
    {87, "SQ_CS2", 2, 374, 16},
    {88, "SQ_CS3", 3, 374, 16},
    {89, "TA0", 0, 119, 2},
    {90, "TA1", 1, 119, 2},
    {91, "TA2", 2, 119, 2},
    {92, "TA3", 3, 119, 2},
    {93, "TA4", 4, 119, 2},
    {94, "TA5", 5, 119, 2},
    {95, "TA6", 6, 119, 2},
    {96, "TA7", 7, 119, 2},
    {97, "TA8", 8, 119, 2},
    {98, "TA9", 9, 119, 2},
    {99, "TA10", 10, 119, 2},
    {100, "TA11", 11, 119, 2},
    {101, "TA12", 12, 119, 2},
    {102, "TA13", 13, 119, 2},
    {103, "TA14", 14, 119, 2},
    {104, "TA15", 15, 119, 2},
    {105, "TA16", 16, 119, 2},
    {106, "TA17", 17, 119, 2},
    {107, "TA18", 18, 119, 2},
    {108, "TA19", 19, 119, 2},
    {109, "TA20", 20, 119, 2},
    {110, "TA21", 21, 119, 2},
    {111, "TA22", 22, 119, 2},
    {112, "TA23", 23, 119, 2},
    {113, "TA24", 24, 119, 2},
    {114, "TA25", 25, 119, 2},
    {115, "TA26", 26, 119, 2},
    {116, "TA27", 27, 119, 2},
    {117, "TA28", 28, 119, 2},
    {118, "TA29", 29, 119, 2},
    {119, "TA30", 30, 119, 2},
    {120, "TA31", 31, 119, 2},
    {121, "TA32", 32, 119, 2},
    {122, "TA33", 33, 119, 2},
    {123, "TA34", 34, 119, 2},
    {124, "TA35", 35, 119, 2},
    {125, "TA36", 36, 119, 2},
    {126, "TA37", 37, 119, 2},
    {127, "TA38", 38, 119, 2},
    {128, "TA39", 39, 119, 2},
    {129, "TA40", 40, 119, 2},
    {130, "TA41", 41, 119, 2},
    {131, "TA42", 42, 119, 2},
    {132, "TA43", 43, 119, 2},
    {133, "TA44", 44, 119, 2},
    {134, "TA45", 45, 119, 2},
    {135, "TA46", 46, 119, 2},
    {136, "TA47", 47, 119, 2},
    {137, "TA48", 48, 119, 2},
    {138, "TA49", 49, 119, 2},
    {139, "TA50", 50, 119, 2},
    {140, "TA51", 51, 119, 2},
    {141, "TA52", 52, 119, 2},
    {142, "TA53", 53, 119, 2},
    {143, "TA54", 54, 119, 2},
    {144, "TA55", 55, 119, 2},
    {145, "TA56", 56, 119, 2},
    {146, "TA57", 57, 119, 2},
    {147, "TA58", 58, 119, 2},
    {148, "TA59", 59, 119, 2},
    {149, "TA60", 60, 119, 2},
    {150, "TA61", 61, 119, 2},
    {151, "TA62", 62, 119, 2},
    {152, "TA63", 63, 119, 2},
    {153, "TD0", 0, 57, 2},
    {154, "TD1", 1, 57, 2},
    {155, "TD2", 2, 57, 2},
    {156, "TD3", 3, 57, 2},
    {157, "TD4", 4, 57, 2},
    {158, "TD5", 5, 57, 2},
    {159, "TD6", 6, 57, 2},
    {160, "TD7", 7, 57, 2},
    {161, "TD8", 8, 57, 2},
    {162, "TD9", 9, 57, 2},
    {163, "TD10", 10, 57, 2},
    {164, "TD11", 11, 57, 2},
    {165, "TD12", 12, 57, 2},
    {166, "TD13", 13, 57, 2},
    {167, "TD14", 14, 57, 2},
    {168, "TD15", 15, 57, 2},
    {169, "TD16", 16, 57, 2},
    {170, "TD17", 17, 57, 2},
    {171, "TD18", 18, 57, 2},
    {172, "TD19", 19, 57, 2},
    {173, "TD20", 20, 57, 2},
    {174, "TD21", 21, 57, 2},
    {175, "TD22", 22, 57, 2},
    {176, "TD23", 23, 57, 2},
    {177, "TD24", 24, 57, 2},
    {178, "TD25", 25, 57, 2},
    {179, "TD26", 26, 57, 2},
    {180, "TD27", 27, 57, 2},
    {181, "TD28", 28, 57, 2},
    {182, "TD29", 29, 57, 2},
    {183, "TD30", 30, 57, 2},
    {184, "TD31", 31, 57, 2},
    {185, "TD32", 32, 57, 2},
    {186, "TD33", 33, 57, 2},
    {187, "TD34", 34, 57, 2},
    {188, "TD35", 35, 57, 2},
    {189, "TD36", 36, 57, 2},
    {190, "TD37", 37, 57, 2},
    {191, "TD38", 38, 57, 2},
    {192, "TD39", 39, 57, 2},
    {193, "TD40", 40, 57, 2},
    {194, "TD41", 41, 57, 2},
    {195, "TD42", 42, 57, 2},
    {196, "TD43", 43, 57, 2},
    {197, "TD44", 44, 57, 2},
    {198, "TD45", 45, 57, 2},
    {199, "TD46", 46, 57, 2},
    {200, "TD47", 47, 57, 2},
    {201, "TD48", 48, 57, 2},
    {202, "TD49", 49, 57, 2},
    {203, "TD50", 50, 57, 2},
    {204, "TD51", 51, 57, 2},
    {205, "TD52", 52, 57, 2},
    {206, "TD53", 53, 57, 2},
    {207, "TD54", 54, 57, 2},
    {208, "TD55", 55, 57, 2},
    {209, "TD56", 56, 57, 2},
    {210, "TD57", 57, 57, 2},
    {211, "TD58", 58, 57, 2},
    {212, "TD59", 59, 57, 2},
    {213, "TD60", 60, 57, 2},
    {214, "TD61", 61, 57, 2},
    {215, "TD62", 62, 57, 2},
    {216, "TD63", 63, 57, 2},
    {217, "TCP0", 0, 85, 4},
    {218, "TCP1", 1, 85, 4},
    {219, "TCP2", 2, 85, 4},
    {220, "TCP3", 3, 85, 4},
    {221, "TCP4", 4, 85, 4},
    {222, "TCP5", 5, 85, 4},
    {223, "TCP6", 6, 85, 4},
    {224, "TCP7", 7, 85, 4},
    {225, "TCP8", 8, 85, 4},
    {226, "TCP9", 9, 85, 4},
    {227, "TCP10", 10, 85, 4},
    {228, "TCP11", 11, 85, 4},
    {229, "TCP12", 12, 85, 4},
    {230, "TCP13", 13, 85, 4},
    {231, "TCP14", 14, 85, 4},
    {232, "TCP15", 15, 85, 4},
    {233, "TCP16", 16, 85, 4},
    {234, "TCP17", 17, 85, 4},
    {235, "TCP18", 18, 85, 4},
    {236, "TCP19", 19, 85, 4},
    {237, "TCP20", 20, 85, 4},
    {238, "TCP21", 21, 85, 4},
    {239, "TCP22", 22, 85, 4},
    {240, "TCP23", 23, 85, 4},
    {241, "TCP24", 24, 85, 4},
    {242, "TCP25", 25, 85, 4},
    {243, "TCP26", 26, 85, 4},
    {244, "TCP27", 27, 85, 4},
    {245, "TCP28", 28, 85, 4},
    {246, "TCP29", 29, 85, 4},
    {247, "TCP30", 30, 85, 4},
    {248, "TCP31", 31, 85, 4},
    {249, "TCP32", 32, 85, 4},
    {250, "TCP33", 33, 85, 4},
    {251, "TCP34", 34, 85, 4},
    {252, "TCP35", 35, 85, 4},
    {253, "TCP36", 36, 85, 4},
    {254, "TCP37", 37, 85, 4},
    {255, "TCP38", 38, 85, 4},
    {256, "TCP39", 39, 85, 4},
    {257, "TCP40", 40, 85, 4},
    {258, "TCP41", 41, 85, 4},
    {259, "TCP42", 42, 85, 4},
    {260, "TCP43", 43, 85, 4},
    {261, "TCP44", 44, 85, 4},
    {262, "TCP45", 45, 85, 4},
    {263, "TCP46", 46, 85, 4},
    {264, "TCP47", 47, 85, 4},
    {265, "TCP48", 48, 85, 4},
    {266, "TCP49", 49, 85, 4},
    {267, "TCP50", 50, 85, 4},
    {268, "TCP51", 51, 85, 4},
    {269, "TCP52", 52, 85, 4},
    {270, "TCP53", 53, 85, 4},
    {271, "TCP54", 54, 85, 4},
    {272, "TCP55", 55, 85, 4},
    {273, "TCP56", 56, 85, 4},
    {274, "TCP57", 57, 85, 4},
    {275, "TCP58", 58, 85, 4},
    {276, "TCP59", 59, 85, 4},
    {277, "TCP60", 60, 85, 4},
    {278, "TCP61", 61, 85, 4},
    {279, "TCP62", 62, 85, 4},
    {280, "TCP63", 63, 85, 4},
    {281, "TCC0", 0, 256, 4},
    {282, "TCC1", 1, 256, 4},
    {283, "TCC2", 2, 256, 4},
    {284, "TCC3", 3, 256, 4},
    {285, "TCC4", 4, 256, 4},
    {286, "TCC5", 5, 256, 4},
    {287, "TCC6", 6, 256, 4},
    {288, "TCC7", 7, 256, 4},
    {289, "TCC8", 8, 256, 4},
    {290, "TCC9", 9, 256, 4},
    {291, "TCC10", 10, 256, 4},
    {292, "TCC11", 11, 256, 4},
    {293, "TCC12", 12, 256, 4},
    {294, "TCC13", 13, 256, 4},
    {295, "TCC14", 14, 256, 4},
    {296, "TCC15", 15, 256, 4},
    {297, "TCA0", 0, 35, 4},
    {298, "TCA1", 1, 35, 4},
    {299, "GDS", 0, 121, 4},
    {300, "IA0", 0, 32, 4},
    {301, "IA1", 1, 32, 4},
    {302, "VGT0", 0, 148, 4},
    {303, "VGT1", 1, 148, 4},
    {304, "VGT2", 2, 148, 4},
    {305, "VGT3", 3, 148, 4},
    {306, "CPG", 0, 59, 2},
    {307, "CPC", 0, 35, 2},
    {308, "WD", 0, 58, 4},
    {309, "MCVML2", 0, 21, 8},
    {310, "ATC", 0, 24, 4},
    {311, "ATCL2", 0, 8, 2},
    {312, "RPB", 0, 63, 4},
    {313, "GCEA", 0, 77, 2},
    {314, "RMI", 0, 257, 4},
    {315, "GPUTimeStamp", 0, 1, 1},
    {316, "GPUTime", 0, 2, 2},
};

GPA_SQCounterGroupDesc HWDX11SQGroupsGfx9[] =
{
    {57, 0, SQ_ALL},
    {58, 1, SQ_ALL},
    {59, 2, SQ_ALL},
    {60, 3, SQ_ALL},
    {61, 0, SQ_ES},
    {62, 1, SQ_ES},
    {63, 2, SQ_ES},
    {64, 3, SQ_ES},
    {65, 0, SQ_GS},
    {66, 1, SQ_GS},
    {67, 2, SQ_GS},
    {68, 3, SQ_GS},
    {69, 0, SQ_VS},
    {70, 1, SQ_VS},
    {71, 2, SQ_VS},
    {72, 3, SQ_VS},
    {73, 0, SQ_PS},
    {74, 1, SQ_PS},
    {75, 2, SQ_PS},
    {76, 3, SQ_PS},
    {77, 0, SQ_LS},
    {78, 1, SQ_LS},
    {79, 2, SQ_LS},
    {80, 3, SQ_LS},
    {81, 0, SQ_HS},
    {82, 1, SQ_HS},
    {83, 2, SQ_HS},
    {84, 3, SQ_HS},
    {85, 0, SQ_CS},
    {86, 1, SQ_CS},
    {87, 2, SQ_CS},
    {88, 3, SQ_CS},
};

PE_BLOCK_ID HWDX11DriverEnumGfx9[] =
{
    PE_BLOCK_SDMA,
    PE_BLOCK_SDMA,
    PE_BLOCK_CPF,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_CB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_DB,
    PE_BLOCK_GRBM,
    PE_BLOCK_GRBMSE,
    PE_BLOCK_GRBMSE,
    PE_BLOCK_GRBMSE,
    PE_BLOCK_GRBMSE,
    PE_BLOCK_RLC,
    PE_BLOCK_PA,
    PE_BLOCK_PA,
    PE_BLOCK_PA,
    PE_BLOCK_PA,
    PE_BLOCK_SC,
    PE_BLOCK_SC,
    PE_BLOCK_SC,
    PE_BLOCK_SC,
    PE_BLOCK_SX,
    PE_BLOCK_SX,
    PE_BLOCK_SX,
    PE_BLOCK_SX,
    PE_BLOCK_SPI,
    PE_BLOCK_SPI,
    PE_BLOCK_SPI,
    PE_BLOCK_SPI,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_SQ,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TA,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TD,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCP,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCC,
    PE_BLOCK_TCA,
    PE_BLOCK_TCA,
    PE_BLOCK_GDS,
    PE_BLOCK_IA,
    PE_BLOCK_IA,
    PE_BLOCK_VGT,
    PE_BLOCK_VGT,
    PE_BLOCK_VGT,
    PE_BLOCK_VGT,
    PE_BLOCK_CPG,
    PE_BLOCK_CPC,
    PE_BLOCK_WD,
    PE_BLOCK_MC,
    PE_BLOCK_ATC,
    PE_BLOCK_ATCL2,
    PE_BLOCK_RPB,
    PE_BLOCK_EA,
    PE_BLOCK_RMI,
    PE_BLOCK_UNKNOWN,
    PE_BLOCK_UNKNOWN,
};

const unsigned int HWDX11GPUTimeIndexGfx9 = 316;
const unsigned int HWDX11GPUTimeStampIndexGfx9 = 315;
const unsigned int HWDX11FirstGPUTimeCounterIndexGfx9 = 51556;
const unsigned int HWDX11GroupCountGfx9 = sizeof(HWDX11GroupsGfx9) / sizeof(GPA_CounterGroupDesc);
const unsigned int HWDX11SQGroupCountGfx9 = sizeof(HWDX11SQGroupsGfx9) / sizeof(GPA_SQCounterGroupDesc);
