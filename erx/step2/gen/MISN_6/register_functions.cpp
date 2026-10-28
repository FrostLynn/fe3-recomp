#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dd3d18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dd4248u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 332u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[332u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DD3D18_0x1dd3d18; // 0x1dd3d18
        g_ps2RecompiledFunctionTable[2] = sub_01DD3D20_0x1dd3d20; // 0x1dd3d20
        g_ps2RecompiledFunctionTable[4] = sub_01DD3D28_0x1dd3d28; // 0x1dd3d28
        g_ps2RecompiledFunctionTable[6] = sub_01DD3D30_0x1dd3d30; // 0x1dd3d30
        g_ps2RecompiledFunctionTable[8] = sub_01DD3D38_0x1dd3d38; // 0x1dd3d38
        g_ps2RecompiledFunctionTable[10] = sub_01DD3D40_0x1dd3d40; // 0x1dd3d40
        g_ps2RecompiledFunctionTable[14] = sub_01DD3D50_0x1dd3d50; // 0x1dd3d50
        g_ps2RecompiledFunctionTable[16] = sub_01DD3D58_0x1dd3d58; // 0x1dd3d58
        g_ps2RecompiledFunctionTable[18] = sub_01DD3D60_0x1dd3d60; // 0x1dd3d60
        g_ps2RecompiledFunctionTable[22] = sub_01DD3D70_0x1dd3d70; // 0x1dd3d70
        g_ps2RecompiledFunctionTable[26] = sub_01DD3D80_0x1dd3d80; // 0x1dd3d80
        g_ps2RecompiledFunctionTable[32] = sub_01DD3D98_0x1dd3d98; // 0x1dd3d98
        g_ps2RecompiledFunctionTable[47] = sub_01DD3D98_0x1dd3d98; // 0x1dd3dd4
        g_ps2RecompiledFunctionTable[52] = sub_01DD3D98_0x1dd3d98; // 0x1dd3de8
        g_ps2RecompiledFunctionTable[57] = sub_01DD3D98_0x1dd3d98; // 0x1dd3dfc
        g_ps2RecompiledFunctionTable[62] = sub_01DD3D98_0x1dd3d98; // 0x1dd3e10
        g_ps2RecompiledFunctionTable[71] = sub_01DD3D98_0x1dd3d98; // 0x1dd3e34
        g_ps2RecompiledFunctionTable[78] = sub_01DD3D98_0x1dd3d98; // 0x1dd3e50
        g_ps2RecompiledFunctionTable[94] = sub_01DD3E90_0x1dd3e90; // 0x1dd3e90
        g_ps2RecompiledFunctionTable[99] = sub_01DD3E90_0x1dd3e90; // 0x1dd3ea4
        g_ps2RecompiledFunctionTable[102] = sub_01DD3EB0_0x1dd3eb0; // 0x1dd3eb0
        g_ps2RecompiledFunctionTable[109] = sub_01DD3EB0_0x1dd3eb0; // 0x1dd3ecc
        g_ps2RecompiledFunctionTable[112] = sub_01DD3EB0_0x1dd3eb0; // 0x1dd3ed8
        g_ps2RecompiledFunctionTable[116] = sub_01DD3EE8_0x1dd3ee8; // 0x1dd3ee8
        g_ps2RecompiledFunctionTable[121] = sub_01DD3EE8_0x1dd3ee8; // 0x1dd3efc
        g_ps2RecompiledFunctionTable[124] = sub_01DD3F08_0x1dd3f08; // 0x1dd3f08
        g_ps2RecompiledFunctionTable[129] = sub_01DD3F08_0x1dd3f08; // 0x1dd3f1c
        g_ps2RecompiledFunctionTable[138] = sub_01DD3F40_0x1dd3f40; // 0x1dd3f40
        g_ps2RecompiledFunctionTable[144] = sub_01DD3F58_0x1dd3f58; // 0x1dd3f58
        g_ps2RecompiledFunctionTable[154] = sub_01DD3F80_0x1dd3f80; // 0x1dd3f80
        g_ps2RecompiledFunctionTable[160] = sub_01DD3F98_0x1dd3f98; // 0x1dd3f98
        g_ps2RecompiledFunctionTable[169] = sub_01DD3F98_0x1dd3f98; // 0x1dd3fbc
        g_ps2RecompiledFunctionTable[176] = sub_01DD3FD8_0x1dd3fd8; // 0x1dd3fd8
        g_ps2RecompiledFunctionTable[186] = sub_01DD4000_0x1dd4000; // 0x1dd4000
        g_ps2RecompiledFunctionTable[196] = sub_01DD4028_0x1dd4028; // 0x1dd4028
        g_ps2RecompiledFunctionTable[205] = sub_01DD4028_0x1dd4028; // 0x1dd404c
        g_ps2RecompiledFunctionTable[210] = sub_01DD4028_0x1dd4028; // 0x1dd4060
        g_ps2RecompiledFunctionTable[220] = sub_01DD4028_0x1dd4028; // 0x1dd4088
        g_ps2RecompiledFunctionTable[226] = sub_01DD4028_0x1dd4028; // 0x1dd40a0
        g_ps2RecompiledFunctionTable[241] = sub_01DD4028_0x1dd4028; // 0x1dd40dc
        g_ps2RecompiledFunctionTable[256] = sub_01DD4118_0x1dd4118; // 0x1dd4118
        g_ps2RecompiledFunctionTable[262] = sub_01DD4130_0x1dd4130; // 0x1dd4130
        g_ps2RecompiledFunctionTable[268] = sub_01DD4130_0x1dd4130; // 0x1dd4148
        g_ps2RecompiledFunctionTable[284] = sub_01DD4188_0x1dd4188; // 0x1dd4188
        g_ps2RecompiledFunctionTable[290] = sub_01DD41A0_0x1dd41a0; // 0x1dd41a0
        g_ps2RecompiledFunctionTable[294] = sub_01DD41B0_0x1dd41b0; // 0x1dd41b0
        g_ps2RecompiledFunctionTable[298] = sub_01DD41C0_0x1dd41c0; // 0x1dd41c0
        g_ps2RecompiledFunctionTable[306] = sub_01DD41C0_0x1dd41c0; // 0x1dd41e0
        g_ps2RecompiledFunctionTable[331] = sub_01DD4244_0x1dd4244; // 0x1dd4244
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
