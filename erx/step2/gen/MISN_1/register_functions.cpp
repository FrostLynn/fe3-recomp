#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dca318u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dca6d8u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 240u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[240u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DCA318_0x1dca318; // 0x1dca318
        g_ps2RecompiledFunctionTable[2] = sub_01DCA320_0x1dca320; // 0x1dca320
        g_ps2RecompiledFunctionTable[4] = sub_01DCA328_0x1dca328; // 0x1dca328
        g_ps2RecompiledFunctionTable[6] = sub_01DCA330_0x1dca330; // 0x1dca330
        g_ps2RecompiledFunctionTable[8] = sub_01DCA338_0x1dca338; // 0x1dca338
        g_ps2RecompiledFunctionTable[10] = sub_01DCA340_0x1dca340; // 0x1dca340
        g_ps2RecompiledFunctionTable[12] = sub_01DCA348_0x1dca348; // 0x1dca348
        g_ps2RecompiledFunctionTable[16] = sub_01DCA358_0x1dca358; // 0x1dca358
        g_ps2RecompiledFunctionTable[20] = sub_01DCA368_0x1dca368; // 0x1dca368
        g_ps2RecompiledFunctionTable[24] = sub_01DCA378_0x1dca378; // 0x1dca378
        g_ps2RecompiledFunctionTable[39] = sub_01DCA378_0x1dca378; // 0x1dca3b4
        g_ps2RecompiledFunctionTable[44] = sub_01DCA378_0x1dca378; // 0x1dca3c8
        g_ps2RecompiledFunctionTable[49] = sub_01DCA378_0x1dca378; // 0x1dca3dc
        g_ps2RecompiledFunctionTable[54] = sub_01DCA378_0x1dca378; // 0x1dca3f0
        g_ps2RecompiledFunctionTable[63] = sub_01DCA378_0x1dca378; // 0x1dca414
        g_ps2RecompiledFunctionTable[70] = sub_01DCA378_0x1dca378; // 0x1dca430
        g_ps2RecompiledFunctionTable[86] = sub_01DCA470_0x1dca470; // 0x1dca470
        g_ps2RecompiledFunctionTable[91] = sub_01DCA470_0x1dca470; // 0x1dca484
        g_ps2RecompiledFunctionTable[96] = sub_01DCA498_0x1dca498; // 0x1dca498
        g_ps2RecompiledFunctionTable[101] = sub_01DCA498_0x1dca498; // 0x1dca4ac
        g_ps2RecompiledFunctionTable[104] = sub_01DCA4B8_0x1dca4b8; // 0x1dca4b8
        g_ps2RecompiledFunctionTable[109] = sub_01DCA4B8_0x1dca4b8; // 0x1dca4cc
        g_ps2RecompiledFunctionTable[112] = sub_01DCA4D8_0x1dca4d8; // 0x1dca4d8
        g_ps2RecompiledFunctionTable[118] = sub_01DCA4F0_0x1dca4f0; // 0x1dca4f0
        g_ps2RecompiledFunctionTable[166] = sub_01DCA4F0_0x1dca4f0; // 0x1dca5b0
        g_ps2RecompiledFunctionTable[184] = sub_01DCA5F8_0x1dca5f8; // 0x1dca5f8
        g_ps2RecompiledFunctionTable[190] = sub_01DCA610_0x1dca610; // 0x1dca610
        g_ps2RecompiledFunctionTable[200] = sub_01DCA638_0x1dca638; // 0x1dca638
        g_ps2RecompiledFunctionTable[204] = sub_01DCA648_0x1dca648; // 0x1dca648
        g_ps2RecompiledFunctionTable[208] = sub_01DCA658_0x1dca658; // 0x1dca658
        g_ps2RecompiledFunctionTable[216] = sub_01DCA658_0x1dca658; // 0x1dca678
        g_ps2RecompiledFunctionTable[239] = sub_01DCA6D4_0x1dca6d4; // 0x1dca6d4
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
