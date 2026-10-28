#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dd5a18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dd5d70u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 214u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[214u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DD5A18_0x1dd5a18; // 0x1dd5a18
        g_ps2RecompiledFunctionTable[2] = sub_01DD5A20_0x1dd5a20; // 0x1dd5a20
        g_ps2RecompiledFunctionTable[4] = sub_01DD5A28_0x1dd5a28; // 0x1dd5a28
        g_ps2RecompiledFunctionTable[6] = sub_01DD5A30_0x1dd5a30; // 0x1dd5a30
        g_ps2RecompiledFunctionTable[8] = sub_01DD5A38_0x1dd5a38; // 0x1dd5a38
        g_ps2RecompiledFunctionTable[10] = sub_01DD5A40_0x1dd5a40; // 0x1dd5a40
        g_ps2RecompiledFunctionTable[14] = sub_01DD5A50_0x1dd5a50; // 0x1dd5a50
        g_ps2RecompiledFunctionTable[16] = sub_01DD5A58_0x1dd5a58; // 0x1dd5a58
        g_ps2RecompiledFunctionTable[20] = sub_01DD5A68_0x1dd5a68; // 0x1dd5a68
        g_ps2RecompiledFunctionTable[24] = sub_01DD5A78_0x1dd5a78; // 0x1dd5a78
        g_ps2RecompiledFunctionTable[39] = sub_01DD5A78_0x1dd5a78; // 0x1dd5ab4
        g_ps2RecompiledFunctionTable[44] = sub_01DD5A78_0x1dd5a78; // 0x1dd5ac8
        g_ps2RecompiledFunctionTable[49] = sub_01DD5A78_0x1dd5a78; // 0x1dd5adc
        g_ps2RecompiledFunctionTable[54] = sub_01DD5A78_0x1dd5a78; // 0x1dd5af0
        g_ps2RecompiledFunctionTable[63] = sub_01DD5A78_0x1dd5a78; // 0x1dd5b14
        g_ps2RecompiledFunctionTable[70] = sub_01DD5A78_0x1dd5a78; // 0x1dd5b30
        g_ps2RecompiledFunctionTable[86] = sub_01DD5B70_0x1dd5b70; // 0x1dd5b70
        g_ps2RecompiledFunctionTable[91] = sub_01DD5B70_0x1dd5b70; // 0x1dd5b84
        g_ps2RecompiledFunctionTable[94] = sub_01DD5B90_0x1dd5b90; // 0x1dd5b90
        g_ps2RecompiledFunctionTable[102] = sub_01DD5B90_0x1dd5b90; // 0x1dd5bb0
        g_ps2RecompiledFunctionTable[124] = sub_01DD5C08_0x1dd5c08; // 0x1dd5c08
        g_ps2RecompiledFunctionTable[130] = sub_01DD5C20_0x1dd5c20; // 0x1dd5c20
        g_ps2RecompiledFunctionTable[145] = sub_01DD5C20_0x1dd5c20; // 0x1dd5c5c
        g_ps2RecompiledFunctionTable[154] = sub_01DD5C80_0x1dd5c80; // 0x1dd5c80
        g_ps2RecompiledFunctionTable[162] = sub_01DD5CA0_0x1dd5ca0; // 0x1dd5ca0
        g_ps2RecompiledFunctionTable[166] = sub_01DD5CA0_0x1dd5ca0; // 0x1dd5cb0
        g_ps2RecompiledFunctionTable[174] = sub_01DD5CD0_0x1dd5cd0; // 0x1dd5cd0
        g_ps2RecompiledFunctionTable[178] = sub_01DD5CE0_0x1dd5ce0; // 0x1dd5ce0
        g_ps2RecompiledFunctionTable[182] = sub_01DD5CF0_0x1dd5cf0; // 0x1dd5cf0
        g_ps2RecompiledFunctionTable[190] = sub_01DD5CF0_0x1dd5cf0; // 0x1dd5d10
        g_ps2RecompiledFunctionTable[213] = sub_01DD5D6C_0x1dd5d6c; // 0x1dd5d6c
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
