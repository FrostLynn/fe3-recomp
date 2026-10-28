#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de1918u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de1ef8u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 376u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[376u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE1918_0x1de1918; // 0x1de1918
        g_ps2RecompiledFunctionTable[2] = sub_01DE1920_0x1de1920; // 0x1de1920
        g_ps2RecompiledFunctionTable[4] = sub_01DE1928_0x1de1928; // 0x1de1928
        g_ps2RecompiledFunctionTable[6] = sub_01DE1930_0x1de1930; // 0x1de1930
        g_ps2RecompiledFunctionTable[8] = sub_01DE1938_0x1de1938; // 0x1de1938
        g_ps2RecompiledFunctionTable[10] = sub_01DE1940_0x1de1940; // 0x1de1940
        g_ps2RecompiledFunctionTable[12] = sub_01DE1948_0x1de1948; // 0x1de1948
        g_ps2RecompiledFunctionTable[14] = sub_01DE1950_0x1de1950; // 0x1de1950
        g_ps2RecompiledFunctionTable[18] = sub_01DE1960_0x1de1960; // 0x1de1960
        g_ps2RecompiledFunctionTable[20] = sub_01DE1968_0x1de1968; // 0x1de1968
        g_ps2RecompiledFunctionTable[22] = sub_01DE1970_0x1de1970; // 0x1de1970
        g_ps2RecompiledFunctionTable[24] = sub_01DE1978_0x1de1978; // 0x1de1978
        g_ps2RecompiledFunctionTable[26] = sub_01DE1980_0x1de1980; // 0x1de1980
        g_ps2RecompiledFunctionTable[30] = sub_01DE1990_0x1de1990; // 0x1de1990
        g_ps2RecompiledFunctionTable[34] = sub_01DE19A0_0x1de19a0; // 0x1de19a0
        g_ps2RecompiledFunctionTable[49] = sub_01DE19A0_0x1de19a0; // 0x1de19dc
        g_ps2RecompiledFunctionTable[54] = sub_01DE19A0_0x1de19a0; // 0x1de19f0
        g_ps2RecompiledFunctionTable[59] = sub_01DE19A0_0x1de19a0; // 0x1de1a04
        g_ps2RecompiledFunctionTable[64] = sub_01DE19A0_0x1de19a0; // 0x1de1a18
        g_ps2RecompiledFunctionTable[73] = sub_01DE19A0_0x1de19a0; // 0x1de1a3c
        g_ps2RecompiledFunctionTable[80] = sub_01DE19A0_0x1de19a0; // 0x1de1a58
        g_ps2RecompiledFunctionTable[96] = sub_01DE1A98_0x1de1a98; // 0x1de1a98
        g_ps2RecompiledFunctionTable[110] = sub_01DE1AD0_0x1de1ad0; // 0x1de1ad0
        g_ps2RecompiledFunctionTable[112] = sub_01DE1AD8_0x1de1ad8; // 0x1de1ad8
        g_ps2RecompiledFunctionTable[118] = sub_01DE1AD8_0x1de1ad8; // 0x1de1af0
        g_ps2RecompiledFunctionTable[124] = sub_01DE1AD8_0x1de1ad8; // 0x1de1b08
        g_ps2RecompiledFunctionTable[134] = sub_01DE1B30_0x1de1b30; // 0x1de1b30
        g_ps2RecompiledFunctionTable[142] = sub_01DE1B30_0x1de1b30; // 0x1de1b50
        g_ps2RecompiledFunctionTable[149] = sub_01DE1B30_0x1de1b30; // 0x1de1b6c
        g_ps2RecompiledFunctionTable[155] = sub_01DE1B30_0x1de1b30; // 0x1de1b84
        g_ps2RecompiledFunctionTable[160] = sub_01DE1B30_0x1de1b30; // 0x1de1b98
        g_ps2RecompiledFunctionTable[165] = sub_01DE1B30_0x1de1b30; // 0x1de1bac
        g_ps2RecompiledFunctionTable[172] = sub_01DE1BC8_0x1de1bc8; // 0x1de1bc8
        g_ps2RecompiledFunctionTable[177] = sub_01DE1BC8_0x1de1bc8; // 0x1de1bdc
        g_ps2RecompiledFunctionTable[186] = sub_01DE1C00_0x1de1c00; // 0x1de1c00
        g_ps2RecompiledFunctionTable[191] = sub_01DE1C00_0x1de1c00; // 0x1de1c14
        g_ps2RecompiledFunctionTable[194] = sub_01DE1C20_0x1de1c20; // 0x1de1c20
        g_ps2RecompiledFunctionTable[199] = sub_01DE1C20_0x1de1c20; // 0x1de1c34
        g_ps2RecompiledFunctionTable[202] = sub_01DE1C40_0x1de1c40; // 0x1de1c40
        g_ps2RecompiledFunctionTable[208] = sub_01DE1C58_0x1de1c58; // 0x1de1c58
        g_ps2RecompiledFunctionTable[214] = sub_01DE1C70_0x1de1c70; // 0x1de1c70
        g_ps2RecompiledFunctionTable[220] = sub_01DE1C70_0x1de1c70; // 0x1de1c88
        g_ps2RecompiledFunctionTable[228] = sub_01DE1C70_0x1de1c70; // 0x1de1ca8
        g_ps2RecompiledFunctionTable[230] = sub_01DE1C70_0x1de1c70; // 0x1de1cb0
        g_ps2RecompiledFunctionTable[238] = sub_01DE1CD0_0x1de1cd0; // 0x1de1cd0
        g_ps2RecompiledFunctionTable[246] = sub_01DE1CD0_0x1de1cd0; // 0x1de1cf0
        g_ps2RecompiledFunctionTable[250] = sub_01DE1D00_0x1de1d00; // 0x1de1d00
        g_ps2RecompiledFunctionTable[258] = sub_01DE1D00_0x1de1d00; // 0x1de1d20
        g_ps2RecompiledFunctionTable[262] = sub_01DE1D00_0x1de1d00; // 0x1de1d30
        g_ps2RecompiledFunctionTable[264] = sub_01DE1D00_0x1de1d00; // 0x1de1d38
        g_ps2RecompiledFunctionTable[266] = sub_01DE1D00_0x1de1d00; // 0x1de1d40
        g_ps2RecompiledFunctionTable[275] = sub_01DE1D00_0x1de1d00; // 0x1de1d64
        g_ps2RecompiledFunctionTable[297] = sub_01DE1D00_0x1de1d00; // 0x1de1dbc
        g_ps2RecompiledFunctionTable[300] = sub_01DE1D00_0x1de1d00; // 0x1de1dc8
        g_ps2RecompiledFunctionTable[308] = sub_01DE1DE8_0x1de1de8; // 0x1de1de8
        g_ps2RecompiledFunctionTable[314] = sub_01DE1DE8_0x1de1de8; // 0x1de1e00
        g_ps2RecompiledFunctionTable[323] = sub_01DE1DE8_0x1de1de8; // 0x1de1e24
        g_ps2RecompiledFunctionTable[325] = sub_01DE1DE8_0x1de1de8; // 0x1de1e2c
        g_ps2RecompiledFunctionTable[334] = sub_01DE1E50_0x1de1e50; // 0x1de1e50
        g_ps2RecompiledFunctionTable[338] = sub_01DE1E60_0x1de1e60; // 0x1de1e60
        g_ps2RecompiledFunctionTable[342] = sub_01DE1E70_0x1de1e70; // 0x1de1e70
        g_ps2RecompiledFunctionTable[350] = sub_01DE1E70_0x1de1e70; // 0x1de1e90
        g_ps2RecompiledFunctionTable[375] = sub_01DE1EF4_0x1de1ef4; // 0x1de1ef4
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
