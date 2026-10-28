#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de6718u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de68f8u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 120u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[120u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE6718_0x1de6718; // 0x1de6718
        g_ps2RecompiledFunctionTable[2] = sub_01DE6720_0x1de6720; // 0x1de6720
        g_ps2RecompiledFunctionTable[6] = sub_01DE6730_0x1de6730; // 0x1de6730
        g_ps2RecompiledFunctionTable[12] = sub_01DE6748_0x1de6748; // 0x1de6748
        g_ps2RecompiledFunctionTable[18] = sub_01DE6760_0x1de6760; // 0x1de6760
        g_ps2RecompiledFunctionTable[33] = sub_01DE6760_0x1de6760; // 0x1de679c
        g_ps2RecompiledFunctionTable[35] = sub_01DE6760_0x1de6760; // 0x1de67a4
        g_ps2RecompiledFunctionTable[36] = sub_01DE6760_0x1de6760; // 0x1de67a8
        g_ps2RecompiledFunctionTable[44] = sub_01DE67C8_0x1de67c8; // 0x1de67c8
        g_ps2RecompiledFunctionTable[51] = sub_01DE67C8_0x1de67c8; // 0x1de67e4
        g_ps2RecompiledFunctionTable[53] = sub_01DE67C8_0x1de67c8; // 0x1de67ec
        g_ps2RecompiledFunctionTable[56] = sub_01DE67C8_0x1de67c8; // 0x1de67f8
        g_ps2RecompiledFunctionTable[58] = sub_01DE67C8_0x1de67c8; // 0x1de6800
        g_ps2RecompiledFunctionTable[61] = sub_01DE67C8_0x1de67c8; // 0x1de680c
        g_ps2RecompiledFunctionTable[64] = sub_01DE67C8_0x1de67c8; // 0x1de6818
        g_ps2RecompiledFunctionTable[67] = sub_01DE67C8_0x1de67c8; // 0x1de6824
        g_ps2RecompiledFunctionTable[80] = sub_01DE6858_0x1de6858; // 0x1de6858
        g_ps2RecompiledFunctionTable[84] = sub_01DE6868_0x1de6868; // 0x1de6868
        g_ps2RecompiledFunctionTable[88] = sub_01DE6878_0x1de6878; // 0x1de6878
        g_ps2RecompiledFunctionTable[96] = sub_01DE6878_0x1de6878; // 0x1de6898
        g_ps2RecompiledFunctionTable[119] = sub_01DE68F4_0x1de68f4; // 0x1de68f4
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
