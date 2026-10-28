#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dea018u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dea4f0u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 310u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[310u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DEA018_0x1dea018; // 0x1dea018
        g_ps2RecompiledFunctionTable[2] = sub_01DEA020_0x1dea020; // 0x1dea020
        g_ps2RecompiledFunctionTable[4] = sub_01DEA028_0x1dea028; // 0x1dea028
        g_ps2RecompiledFunctionTable[6] = sub_01DEA030_0x1dea030; // 0x1dea030
        g_ps2RecompiledFunctionTable[8] = sub_01DEA038_0x1dea038; // 0x1dea038
        g_ps2RecompiledFunctionTable[10] = sub_01DEA040_0x1dea040; // 0x1dea040
        g_ps2RecompiledFunctionTable[12] = sub_01DEA048_0x1dea048; // 0x1dea048
        g_ps2RecompiledFunctionTable[16] = sub_01DEA058_0x1dea058; // 0x1dea058
        g_ps2RecompiledFunctionTable[18] = sub_01DEA060_0x1dea060; // 0x1dea060
        g_ps2RecompiledFunctionTable[20] = sub_01DEA068_0x1dea068; // 0x1dea068
        g_ps2RecompiledFunctionTable[24] = sub_01DEA078_0x1dea078; // 0x1dea078
        g_ps2RecompiledFunctionTable[28] = sub_01DEA088_0x1dea088; // 0x1dea088
        g_ps2RecompiledFunctionTable[43] = sub_01DEA088_0x1dea088; // 0x1dea0c4
        g_ps2RecompiledFunctionTable[48] = sub_01DEA088_0x1dea088; // 0x1dea0d8
        g_ps2RecompiledFunctionTable[53] = sub_01DEA088_0x1dea088; // 0x1dea0ec
        g_ps2RecompiledFunctionTable[58] = sub_01DEA088_0x1dea088; // 0x1dea100
        g_ps2RecompiledFunctionTable[67] = sub_01DEA088_0x1dea088; // 0x1dea124
        g_ps2RecompiledFunctionTable[74] = sub_01DEA088_0x1dea088; // 0x1dea140
        g_ps2RecompiledFunctionTable[90] = sub_01DEA180_0x1dea180; // 0x1dea180
        g_ps2RecompiledFunctionTable[98] = sub_01DEA180_0x1dea180; // 0x1dea1a0
        g_ps2RecompiledFunctionTable[102] = sub_01DEA180_0x1dea180; // 0x1dea1b0
        g_ps2RecompiledFunctionTable[118] = sub_01DEA180_0x1dea180; // 0x1dea1f0
        g_ps2RecompiledFunctionTable[141] = sub_01DEA180_0x1dea180; // 0x1dea24c
        g_ps2RecompiledFunctionTable[145] = sub_01DEA25C_0x1dea25c; // 0x1dea25c
        g_ps2RecompiledFunctionTable[161] = sub_01DEA25C_0x1dea25c; // 0x1dea29c
        g_ps2RecompiledFunctionTable[168] = sub_01DEA25C_0x1dea25c; // 0x1dea2b8
        g_ps2RecompiledFunctionTable[170] = sub_01DEA25C_0x1dea25c; // 0x1dea2c0
        g_ps2RecompiledFunctionTable[183] = sub_01DEA25C_0x1dea25c; // 0x1dea2f4
        g_ps2RecompiledFunctionTable[186] = sub_01DEA300_0x1dea300; // 0x1dea300
        g_ps2RecompiledFunctionTable[191] = sub_01DEA300_0x1dea300; // 0x1dea314
        g_ps2RecompiledFunctionTable[194] = sub_01DEA320_0x1dea320; // 0x1dea320
        g_ps2RecompiledFunctionTable[204] = sub_01DEA348_0x1dea348; // 0x1dea348
        g_ps2RecompiledFunctionTable[210] = sub_01DEA348_0x1dea348; // 0x1dea360
        g_ps2RecompiledFunctionTable[229] = sub_01DEA348_0x1dea348; // 0x1dea3ac
        g_ps2RecompiledFunctionTable[238] = sub_01DEA3D0_0x1dea3d0; // 0x1dea3d0
        g_ps2RecompiledFunctionTable[248] = sub_01DEA3F8_0x1dea3f8; // 0x1dea3f8
        g_ps2RecompiledFunctionTable[254] = sub_01DEA3F8_0x1dea3f8; // 0x1dea410
        g_ps2RecompiledFunctionTable[270] = sub_01DEA450_0x1dea450; // 0x1dea450
        g_ps2RecompiledFunctionTable[274] = sub_01DEA460_0x1dea460; // 0x1dea460
        g_ps2RecompiledFunctionTable[278] = sub_01DEA470_0x1dea470; // 0x1dea470
        g_ps2RecompiledFunctionTable[286] = sub_01DEA470_0x1dea470; // 0x1dea490
        g_ps2RecompiledFunctionTable[309] = sub_01DEA4EC_0x1dea4ec; // 0x1dea4ec
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
