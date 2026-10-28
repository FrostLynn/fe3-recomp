#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de6e18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de72d8u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 304u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[304u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE6E18_0x1de6e18; // 0x1de6e18
        g_ps2RecompiledFunctionTable[2] = sub_01DE6E20_0x1de6e20; // 0x1de6e20
        g_ps2RecompiledFunctionTable[4] = sub_01DE6E28_0x1de6e28; // 0x1de6e28
        g_ps2RecompiledFunctionTable[6] = sub_01DE6E30_0x1de6e30; // 0x1de6e30
        g_ps2RecompiledFunctionTable[8] = sub_01DE6E38_0x1de6e38; // 0x1de6e38
        g_ps2RecompiledFunctionTable[10] = sub_01DE6E40_0x1de6e40; // 0x1de6e40
        g_ps2RecompiledFunctionTable[12] = sub_01DE6E48_0x1de6e48; // 0x1de6e48
        g_ps2RecompiledFunctionTable[16] = sub_01DE6E58_0x1de6e58; // 0x1de6e58
        g_ps2RecompiledFunctionTable[18] = sub_01DE6E60_0x1de6e60; // 0x1de6e60
        g_ps2RecompiledFunctionTable[22] = sub_01DE6E70_0x1de6e70; // 0x1de6e70
        g_ps2RecompiledFunctionTable[26] = sub_01DE6E80_0x1de6e80; // 0x1de6e80
        g_ps2RecompiledFunctionTable[41] = sub_01DE6E80_0x1de6e80; // 0x1de6ebc
        g_ps2RecompiledFunctionTable[46] = sub_01DE6E80_0x1de6e80; // 0x1de6ed0
        g_ps2RecompiledFunctionTable[51] = sub_01DE6E80_0x1de6e80; // 0x1de6ee4
        g_ps2RecompiledFunctionTable[56] = sub_01DE6E80_0x1de6e80; // 0x1de6ef8
        g_ps2RecompiledFunctionTable[65] = sub_01DE6E80_0x1de6e80; // 0x1de6f1c
        g_ps2RecompiledFunctionTable[72] = sub_01DE6E80_0x1de6e80; // 0x1de6f38
        g_ps2RecompiledFunctionTable[88] = sub_01DE6F78_0x1de6f78; // 0x1de6f78
        g_ps2RecompiledFunctionTable[97] = sub_01DE6F78_0x1de6f78; // 0x1de6f9c
        g_ps2RecompiledFunctionTable[101] = sub_01DE6F78_0x1de6f78; // 0x1de6fac
        g_ps2RecompiledFunctionTable[111] = sub_01DE6F78_0x1de6f78; // 0x1de6fd4
        g_ps2RecompiledFunctionTable[114] = sub_01DE6FE0_0x1de6fe0; // 0x1de6fe0
        g_ps2RecompiledFunctionTable[126] = sub_01DE6FE0_0x1de6fe0; // 0x1de7010
        g_ps2RecompiledFunctionTable[128] = sub_01DE7018_0x1de7018; // 0x1de7018
        g_ps2RecompiledFunctionTable[129] = sub_01DE7018_0x1de7018; // 0x1de701c
        g_ps2RecompiledFunctionTable[140] = sub_01DE7018_0x1de7018; // 0x1de7048
        g_ps2RecompiledFunctionTable[144] = sub_01DE7018_0x1de7018; // 0x1de7058
        g_ps2RecompiledFunctionTable[176] = sub_01DE7018_0x1de7018; // 0x1de70d8
        g_ps2RecompiledFunctionTable[188] = sub_01DE7108_0x1de7108; // 0x1de7108
        g_ps2RecompiledFunctionTable[197] = sub_01DE7108_0x1de7108; // 0x1de712c
        g_ps2RecompiledFunctionTable[202] = sub_01DE7108_0x1de7108; // 0x1de7140
        g_ps2RecompiledFunctionTable[262] = sub_01DE7230_0x1de7230; // 0x1de7230
        g_ps2RecompiledFunctionTable[266] = sub_01DE7240_0x1de7240; // 0x1de7240
        g_ps2RecompiledFunctionTable[270] = sub_01DE7250_0x1de7250; // 0x1de7250
        g_ps2RecompiledFunctionTable[278] = sub_01DE7250_0x1de7250; // 0x1de7270
        g_ps2RecompiledFunctionTable[303] = sub_01DE72D4_0x1de72d4; // 0x1de72d4
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
