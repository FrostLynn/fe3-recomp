#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dd0a18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dd11f0u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 502u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[502u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DD0A18_0x1dd0a18; // 0x1dd0a18
        g_ps2RecompiledFunctionTable[2] = sub_01DD0A20_0x1dd0a20; // 0x1dd0a20
        g_ps2RecompiledFunctionTable[4] = sub_01DD0A28_0x1dd0a28; // 0x1dd0a28
        g_ps2RecompiledFunctionTable[6] = sub_01DD0A30_0x1dd0a30; // 0x1dd0a30
        g_ps2RecompiledFunctionTable[8] = sub_01DD0A38_0x1dd0a38; // 0x1dd0a38
        g_ps2RecompiledFunctionTable[10] = sub_01DD0A40_0x1dd0a40; // 0x1dd0a40
        g_ps2RecompiledFunctionTable[14] = sub_01DD0A50_0x1dd0a50; // 0x1dd0a50
        g_ps2RecompiledFunctionTable[16] = sub_01DD0A58_0x1dd0a58; // 0x1dd0a58
        g_ps2RecompiledFunctionTable[20] = sub_01DD0A68_0x1dd0a68; // 0x1dd0a68
        g_ps2RecompiledFunctionTable[24] = sub_01DD0A78_0x1dd0a78; // 0x1dd0a78
        g_ps2RecompiledFunctionTable[39] = sub_01DD0A78_0x1dd0a78; // 0x1dd0ab4
        g_ps2RecompiledFunctionTable[44] = sub_01DD0A78_0x1dd0a78; // 0x1dd0ac8
        g_ps2RecompiledFunctionTable[49] = sub_01DD0A78_0x1dd0a78; // 0x1dd0adc
        g_ps2RecompiledFunctionTable[54] = sub_01DD0A78_0x1dd0a78; // 0x1dd0af0
        g_ps2RecompiledFunctionTable[63] = sub_01DD0A78_0x1dd0a78; // 0x1dd0b14
        g_ps2RecompiledFunctionTable[70] = sub_01DD0A78_0x1dd0a78; // 0x1dd0b30
        g_ps2RecompiledFunctionTable[86] = sub_01DD0B70_0x1dd0b70; // 0x1dd0b70
        g_ps2RecompiledFunctionTable[141] = sub_01DD0B70_0x1dd0b70; // 0x1dd0c4c
        g_ps2RecompiledFunctionTable[143] = sub_01DD0B70_0x1dd0b70; // 0x1dd0c54
        g_ps2RecompiledFunctionTable[149] = sub_01DD0B70_0x1dd0b70; // 0x1dd0c6c
        g_ps2RecompiledFunctionTable[151] = sub_01DD0B70_0x1dd0b70; // 0x1dd0c74
        g_ps2RecompiledFunctionTable[163] = sub_01DD0B70_0x1dd0b70; // 0x1dd0ca4
        g_ps2RecompiledFunctionTable[166] = sub_01DD0CB0_0x1dd0cb0; // 0x1dd0cb0
        g_ps2RecompiledFunctionTable[172] = sub_01DD0CB0_0x1dd0cb0; // 0x1dd0cc8
        g_ps2RecompiledFunctionTable[182] = sub_01DD0CF0_0x1dd0cf0; // 0x1dd0cf0
        g_ps2RecompiledFunctionTable[202] = sub_01DD0D40_0x1dd0d40; // 0x1dd0d40
        g_ps2RecompiledFunctionTable[208] = sub_01DD0D40_0x1dd0d40; // 0x1dd0d58
        g_ps2RecompiledFunctionTable[218] = sub_01DD0D40_0x1dd0d40; // 0x1dd0d80
        g_ps2RecompiledFunctionTable[226] = sub_01DD0DA0_0x1dd0da0; // 0x1dd0da0
        g_ps2RecompiledFunctionTable[232] = sub_01DD0DB8_0x1dd0db8; // 0x1dd0db8
        g_ps2RecompiledFunctionTable[246] = sub_01DD0DF0_0x1dd0df0; // 0x1dd0df0
        g_ps2RecompiledFunctionTable[252] = sub_01DD0DF0_0x1dd0df0; // 0x1dd0e08
        g_ps2RecompiledFunctionTable[262] = sub_01DD0DF0_0x1dd0df0; // 0x1dd0e30
        g_ps2RecompiledFunctionTable[270] = sub_01DD0E50_0x1dd0e50; // 0x1dd0e50
        g_ps2RecompiledFunctionTable[276] = sub_01DD0E68_0x1dd0e68; // 0x1dd0e68
        g_ps2RecompiledFunctionTable[290] = sub_01DD0EA0_0x1dd0ea0; // 0x1dd0ea0
        g_ps2RecompiledFunctionTable[296] = sub_01DD0EA0_0x1dd0ea0; // 0x1dd0eb8
        g_ps2RecompiledFunctionTable[306] = sub_01DD0EA0_0x1dd0ea0; // 0x1dd0ee0
        g_ps2RecompiledFunctionTable[314] = sub_01DD0F00_0x1dd0f00; // 0x1dd0f00
        g_ps2RecompiledFunctionTable[320] = sub_01DD0F18_0x1dd0f18; // 0x1dd0f18
        g_ps2RecompiledFunctionTable[334] = sub_01DD0F50_0x1dd0f50; // 0x1dd0f50
        g_ps2RecompiledFunctionTable[340] = sub_01DD0F50_0x1dd0f50; // 0x1dd0f68
        g_ps2RecompiledFunctionTable[350] = sub_01DD0F50_0x1dd0f50; // 0x1dd0f90
        g_ps2RecompiledFunctionTable[358] = sub_01DD0FB0_0x1dd0fb0; // 0x1dd0fb0
        g_ps2RecompiledFunctionTable[364] = sub_01DD0FC8_0x1dd0fc8; // 0x1dd0fc8
        g_ps2RecompiledFunctionTable[378] = sub_01DD1000_0x1dd1000; // 0x1dd1000
        g_ps2RecompiledFunctionTable[384] = sub_01DD1000_0x1dd1000; // 0x1dd1018
        g_ps2RecompiledFunctionTable[394] = sub_01DD1000_0x1dd1000; // 0x1dd1040
        g_ps2RecompiledFunctionTable[402] = sub_01DD1060_0x1dd1060; // 0x1dd1060
        g_ps2RecompiledFunctionTable[408] = sub_01DD1078_0x1dd1078; // 0x1dd1078
        g_ps2RecompiledFunctionTable[422] = sub_01DD10B0_0x1dd10b0; // 0x1dd10b0
        g_ps2RecompiledFunctionTable[426] = sub_01DD10B0_0x1dd10b0; // 0x1dd10c0
        g_ps2RecompiledFunctionTable[434] = sub_01DD10E0_0x1dd10e0; // 0x1dd10e0
        g_ps2RecompiledFunctionTable[438] = sub_01DD10F0_0x1dd10f0; // 0x1dd10f0
        g_ps2RecompiledFunctionTable[442] = sub_01DD1100_0x1dd1100; // 0x1dd1100
        g_ps2RecompiledFunctionTable[450] = sub_01DD1100_0x1dd1100; // 0x1dd1120
        g_ps2RecompiledFunctionTable[501] = sub_01DD11EC_0x1dd11ec; // 0x1dd11ec
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
