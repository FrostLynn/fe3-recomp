#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de0718u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de0b48u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 268u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[268u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE0718_0x1de0718; // 0x1de0718
        g_ps2RecompiledFunctionTable[2] = sub_01DE0720_0x1de0720; // 0x1de0720
        g_ps2RecompiledFunctionTable[4] = sub_01DE0728_0x1de0728; // 0x1de0728
        g_ps2RecompiledFunctionTable[6] = sub_01DE0730_0x1de0730; // 0x1de0730
        g_ps2RecompiledFunctionTable[8] = sub_01DE0738_0x1de0738; // 0x1de0738
        g_ps2RecompiledFunctionTable[10] = sub_01DE0740_0x1de0740; // 0x1de0740
        g_ps2RecompiledFunctionTable[14] = sub_01DE0750_0x1de0750; // 0x1de0750
        g_ps2RecompiledFunctionTable[16] = sub_01DE0758_0x1de0758; // 0x1de0758
        g_ps2RecompiledFunctionTable[20] = sub_01DE0768_0x1de0768; // 0x1de0768
        g_ps2RecompiledFunctionTable[28] = sub_01DE0788_0x1de0788; // 0x1de0788
        g_ps2RecompiledFunctionTable[43] = sub_01DE0788_0x1de0788; // 0x1de07c4
        g_ps2RecompiledFunctionTable[48] = sub_01DE0788_0x1de0788; // 0x1de07d8
        g_ps2RecompiledFunctionTable[53] = sub_01DE0788_0x1de0788; // 0x1de07ec
        g_ps2RecompiledFunctionTable[58] = sub_01DE0788_0x1de0788; // 0x1de0800
        g_ps2RecompiledFunctionTable[67] = sub_01DE0788_0x1de0788; // 0x1de0824
        g_ps2RecompiledFunctionTable[74] = sub_01DE0788_0x1de0788; // 0x1de0840
        g_ps2RecompiledFunctionTable[90] = sub_01DE0880_0x1de0880; // 0x1de0880
        g_ps2RecompiledFunctionTable[99] = sub_01DE0880_0x1de0880; // 0x1de08a4
        g_ps2RecompiledFunctionTable[104] = sub_01DE0880_0x1de0880; // 0x1de08b8
        g_ps2RecompiledFunctionTable[120] = sub_01DE08F8_0x1de08f8; // 0x1de08f8
        g_ps2RecompiledFunctionTable[125] = sub_01DE08F8_0x1de08f8; // 0x1de090c
        g_ps2RecompiledFunctionTable[128] = sub_01DE0918_0x1de0918; // 0x1de0918
        g_ps2RecompiledFunctionTable[170] = sub_01DE0918_0x1de0918; // 0x1de09c0
        g_ps2RecompiledFunctionTable[174] = sub_01DE09D0_0x1de09d0; // 0x1de09d0
        g_ps2RecompiledFunctionTable[180] = sub_01DE09E8_0x1de09e8; // 0x1de09e8
        g_ps2RecompiledFunctionTable[184] = sub_01DE09E8_0x1de09e8; // 0x1de09f8
        g_ps2RecompiledFunctionTable[204] = sub_01DE0A48_0x1de0a48; // 0x1de0a48
        g_ps2RecompiledFunctionTable[209] = sub_01DE0A48_0x1de0a48; // 0x1de0a5c
        g_ps2RecompiledFunctionTable[216] = sub_01DE0A78_0x1de0a78; // 0x1de0a78
        g_ps2RecompiledFunctionTable[220] = sub_01DE0A78_0x1de0a78; // 0x1de0a88
        g_ps2RecompiledFunctionTable[228] = sub_01DE0AA8_0x1de0aa8; // 0x1de0aa8
        g_ps2RecompiledFunctionTable[232] = sub_01DE0AB8_0x1de0ab8; // 0x1de0ab8
        g_ps2RecompiledFunctionTable[236] = sub_01DE0AC8_0x1de0ac8; // 0x1de0ac8
        g_ps2RecompiledFunctionTable[244] = sub_01DE0AC8_0x1de0ac8; // 0x1de0ae8
        g_ps2RecompiledFunctionTable[267] = sub_01DE0B44_0x1de0b44; // 0x1de0b44
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
