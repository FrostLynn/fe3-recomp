#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de4e18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de5400u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 378u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[378u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE4E18_0x1de4e18; // 0x1de4e18
        g_ps2RecompiledFunctionTable[2] = sub_01DE4E20_0x1de4e20; // 0x1de4e20
        g_ps2RecompiledFunctionTable[4] = sub_01DE4E28_0x1de4e28; // 0x1de4e28
        g_ps2RecompiledFunctionTable[6] = sub_01DE4E30_0x1de4e30; // 0x1de4e30
        g_ps2RecompiledFunctionTable[8] = sub_01DE4E38_0x1de4e38; // 0x1de4e38
        g_ps2RecompiledFunctionTable[10] = sub_01DE4E40_0x1de4e40; // 0x1de4e40
        g_ps2RecompiledFunctionTable[14] = sub_01DE4E50_0x1de4e50; // 0x1de4e50
        g_ps2RecompiledFunctionTable[16] = sub_01DE4E58_0x1de4e58; // 0x1de4e58
        g_ps2RecompiledFunctionTable[18] = sub_01DE4E60_0x1de4e60; // 0x1de4e60
        g_ps2RecompiledFunctionTable[20] = sub_01DE4E68_0x1de4e68; // 0x1de4e68
        g_ps2RecompiledFunctionTable[22] = sub_01DE4E70_0x1de4e70; // 0x1de4e70
        g_ps2RecompiledFunctionTable[24] = sub_01DE4E78_0x1de4e78; // 0x1de4e78
        g_ps2RecompiledFunctionTable[28] = sub_01DE4E88_0x1de4e88; // 0x1de4e88
        g_ps2RecompiledFunctionTable[32] = sub_01DE4E98_0x1de4e98; // 0x1de4e98
        g_ps2RecompiledFunctionTable[47] = sub_01DE4E98_0x1de4e98; // 0x1de4ed4
        g_ps2RecompiledFunctionTable[52] = sub_01DE4E98_0x1de4e98; // 0x1de4ee8
        g_ps2RecompiledFunctionTable[57] = sub_01DE4E98_0x1de4e98; // 0x1de4efc
        g_ps2RecompiledFunctionTable[62] = sub_01DE4E98_0x1de4e98; // 0x1de4f10
        g_ps2RecompiledFunctionTable[71] = sub_01DE4E98_0x1de4e98; // 0x1de4f34
        g_ps2RecompiledFunctionTable[78] = sub_01DE4E98_0x1de4e98; // 0x1de4f50
        g_ps2RecompiledFunctionTable[94] = sub_01DE4F90_0x1de4f90; // 0x1de4f90
        g_ps2RecompiledFunctionTable[100] = sub_01DE4F90_0x1de4f90; // 0x1de4fa8
        g_ps2RecompiledFunctionTable[110] = sub_01DE4FD0_0x1de4fd0; // 0x1de4fd0
        g_ps2RecompiledFunctionTable[119] = sub_01DE4FD0_0x1de4fd0; // 0x1de4ff4
        g_ps2RecompiledFunctionTable[124] = sub_01DE4FD0_0x1de4fd0; // 0x1de5008
        g_ps2RecompiledFunctionTable[137] = sub_01DE4FD0_0x1de4fd0; // 0x1de503c
        g_ps2RecompiledFunctionTable[198] = sub_01DE4FD0_0x1de4fd0; // 0x1de5130
        g_ps2RecompiledFunctionTable[204] = sub_01DE5148_0x1de5148; // 0x1de5148
        g_ps2RecompiledFunctionTable[237] = sub_01DE5148_0x1de5148; // 0x1de51cc
        g_ps2RecompiledFunctionTable[240] = sub_01DE51D8_0x1de51d8; // 0x1de51d8
        g_ps2RecompiledFunctionTable[245] = sub_01DE51D8_0x1de51d8; // 0x1de51ec
        g_ps2RecompiledFunctionTable[248] = sub_01DE51F8_0x1de51f8; // 0x1de51f8
        g_ps2RecompiledFunctionTable[260] = sub_01DE5228_0x1de5228; // 0x1de5228
        g_ps2RecompiledFunctionTable[264] = sub_01DE5228_0x1de5228; // 0x1de5238
        g_ps2RecompiledFunctionTable[278] = sub_01DE5270_0x1de5270; // 0x1de5270
        g_ps2RecompiledFunctionTable[289] = sub_01DE5270_0x1de5270; // 0x1de529c
        g_ps2RecompiledFunctionTable[294] = sub_01DE5270_0x1de5270; // 0x1de52b0
        g_ps2RecompiledFunctionTable[305] = sub_01DE5270_0x1de5270; // 0x1de52dc
        g_ps2RecompiledFunctionTable[307] = sub_01DE5270_0x1de5270; // 0x1de52e4
        g_ps2RecompiledFunctionTable[308] = sub_01DE5270_0x1de5270; // 0x1de52e8
        g_ps2RecompiledFunctionTable[312] = sub_01DE5270_0x1de5270; // 0x1de52f8
        g_ps2RecompiledFunctionTable[314] = sub_01DE5270_0x1de5270; // 0x1de5300
        g_ps2RecompiledFunctionTable[326] = sub_01DE5330_0x1de5330; // 0x1de5330
        g_ps2RecompiledFunctionTable[330] = sub_01DE5330_0x1de5330; // 0x1de5340
        g_ps2RecompiledFunctionTable[338] = sub_01DE5360_0x1de5360; // 0x1de5360
        g_ps2RecompiledFunctionTable[342] = sub_01DE5370_0x1de5370; // 0x1de5370
        g_ps2RecompiledFunctionTable[346] = sub_01DE5380_0x1de5380; // 0x1de5380
        g_ps2RecompiledFunctionTable[354] = sub_01DE5380_0x1de5380; // 0x1de53a0
        g_ps2RecompiledFunctionTable[377] = sub_01DE53FC_0x1de53fc; // 0x1de53fc
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
