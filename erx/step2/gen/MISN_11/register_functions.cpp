#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1ddef18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1ddf2c8u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 236u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[236u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DDEF18_0x1ddef18; // 0x1ddef18
        g_ps2RecompiledFunctionTable[2] = sub_01DDEF20_0x1ddef20; // 0x1ddef20
        g_ps2RecompiledFunctionTable[4] = sub_01DDEF28_0x1ddef28; // 0x1ddef28
        g_ps2RecompiledFunctionTable[6] = sub_01DDEF30_0x1ddef30; // 0x1ddef30
        g_ps2RecompiledFunctionTable[8] = sub_01DDEF38_0x1ddef38; // 0x1ddef38
        g_ps2RecompiledFunctionTable[10] = sub_01DDEF40_0x1ddef40; // 0x1ddef40
        g_ps2RecompiledFunctionTable[14] = sub_01DDEF50_0x1ddef50; // 0x1ddef50
        g_ps2RecompiledFunctionTable[16] = sub_01DDEF58_0x1ddef58; // 0x1ddef58
        g_ps2RecompiledFunctionTable[18] = sub_01DDEF60_0x1ddef60; // 0x1ddef60
        g_ps2RecompiledFunctionTable[22] = sub_01DDEF70_0x1ddef70; // 0x1ddef70
        g_ps2RecompiledFunctionTable[26] = sub_01DDEF80_0x1ddef80; // 0x1ddef80
        g_ps2RecompiledFunctionTable[35] = sub_01DDEF80_0x1ddef80; // 0x1ddefa4
        g_ps2RecompiledFunctionTable[40] = sub_01DDEF80_0x1ddef80; // 0x1ddefb8
        g_ps2RecompiledFunctionTable[70] = sub_01DDF030_0x1ddf030; // 0x1ddf030
        g_ps2RecompiledFunctionTable[85] = sub_01DDF030_0x1ddf030; // 0x1ddf06c
        g_ps2RecompiledFunctionTable[90] = sub_01DDF030_0x1ddf030; // 0x1ddf080
        g_ps2RecompiledFunctionTable[95] = sub_01DDF030_0x1ddf030; // 0x1ddf094
        g_ps2RecompiledFunctionTable[100] = sub_01DDF030_0x1ddf030; // 0x1ddf0a8
        g_ps2RecompiledFunctionTable[109] = sub_01DDF030_0x1ddf030; // 0x1ddf0cc
        g_ps2RecompiledFunctionTable[116] = sub_01DDF030_0x1ddf030; // 0x1ddf0e8
        g_ps2RecompiledFunctionTable[132] = sub_01DDF128_0x1ddf128; // 0x1ddf128
        g_ps2RecompiledFunctionTable[137] = sub_01DDF128_0x1ddf128; // 0x1ddf13c
        g_ps2RecompiledFunctionTable[140] = sub_01DDF148_0x1ddf148; // 0x1ddf148
        g_ps2RecompiledFunctionTable[145] = sub_01DDF148_0x1ddf148; // 0x1ddf15c
        g_ps2RecompiledFunctionTable[148] = sub_01DDF168_0x1ddf168; // 0x1ddf168
        g_ps2RecompiledFunctionTable[154] = sub_01DDF180_0x1ddf180; // 0x1ddf180
        g_ps2RecompiledFunctionTable[160] = sub_01DDF180_0x1ddf180; // 0x1ddf198
        g_ps2RecompiledFunctionTable[162] = sub_01DDF180_0x1ddf180; // 0x1ddf1a0
        g_ps2RecompiledFunctionTable[170] = sub_01DDF1C0_0x1ddf1c0; // 0x1ddf1c0
        g_ps2RecompiledFunctionTable[179] = sub_01DDF1C0_0x1ddf1c0; // 0x1ddf1e4
        g_ps2RecompiledFunctionTable[184] = sub_01DDF1F8_0x1ddf1f8; // 0x1ddf1f8
        g_ps2RecompiledFunctionTable[188] = sub_01DDF1F8_0x1ddf1f8; // 0x1ddf208
        g_ps2RecompiledFunctionTable[196] = sub_01DDF228_0x1ddf228; // 0x1ddf228
        g_ps2RecompiledFunctionTable[200] = sub_01DDF238_0x1ddf238; // 0x1ddf238
        g_ps2RecompiledFunctionTable[204] = sub_01DDF248_0x1ddf248; // 0x1ddf248
        g_ps2RecompiledFunctionTable[212] = sub_01DDF248_0x1ddf248; // 0x1ddf268
        g_ps2RecompiledFunctionTable[235] = sub_01DDF2C4_0x1ddf2c4; // 0x1ddf2c4
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
