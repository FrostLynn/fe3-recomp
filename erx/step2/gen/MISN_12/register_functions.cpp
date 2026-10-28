#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de0018u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de0190u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 94u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[94u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE0018_0x1de0018; // 0x1de0018
        g_ps2RecompiledFunctionTable[4] = sub_01DE0028_0x1de0028; // 0x1de0028
        g_ps2RecompiledFunctionTable[6] = sub_01DE0030_0x1de0030; // 0x1de0030
        g_ps2RecompiledFunctionTable[10] = sub_01DE0040_0x1de0040; // 0x1de0040
        g_ps2RecompiledFunctionTable[14] = sub_01DE0050_0x1de0050; // 0x1de0050
        g_ps2RecompiledFunctionTable[16] = sub_01DE0058_0x1de0058; // 0x1de0058
        g_ps2RecompiledFunctionTable[24] = sub_01DE0058_0x1de0058; // 0x1de0078
        g_ps2RecompiledFunctionTable[43] = sub_01DE0058_0x1de0058; // 0x1de00c4
        g_ps2RecompiledFunctionTable[54] = sub_01DE00F0_0x1de00f0; // 0x1de00f0
        g_ps2RecompiledFunctionTable[58] = sub_01DE0100_0x1de0100; // 0x1de0100
        g_ps2RecompiledFunctionTable[62] = sub_01DE0110_0x1de0110; // 0x1de0110
        g_ps2RecompiledFunctionTable[70] = sub_01DE0110_0x1de0110; // 0x1de0130
        g_ps2RecompiledFunctionTable[93] = sub_01DE018C_0x1de018c; // 0x1de018c
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
