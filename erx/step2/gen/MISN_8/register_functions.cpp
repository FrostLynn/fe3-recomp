#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dd6c18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dd7418u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 512u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[512u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DD6C18_0x1dd6c18; // 0x1dd6c18
        g_ps2RecompiledFunctionTable[2] = sub_01DD6C20_0x1dd6c20; // 0x1dd6c20
        g_ps2RecompiledFunctionTable[4] = sub_01DD6C28_0x1dd6c28; // 0x1dd6c28
        g_ps2RecompiledFunctionTable[6] = sub_01DD6C30_0x1dd6c30; // 0x1dd6c30
        g_ps2RecompiledFunctionTable[8] = sub_01DD6C38_0x1dd6c38; // 0x1dd6c38
        g_ps2RecompiledFunctionTable[10] = sub_01DD6C40_0x1dd6c40; // 0x1dd6c40
        g_ps2RecompiledFunctionTable[12] = sub_01DD6C48_0x1dd6c48; // 0x1dd6c48
        g_ps2RecompiledFunctionTable[14] = sub_01DD6C50_0x1dd6c50; // 0x1dd6c50
        g_ps2RecompiledFunctionTable[18] = sub_01DD6C60_0x1dd6c60; // 0x1dd6c60
        g_ps2RecompiledFunctionTable[20] = sub_01DD6C68_0x1dd6c68; // 0x1dd6c68
        g_ps2RecompiledFunctionTable[22] = sub_01DD6C70_0x1dd6c70; // 0x1dd6c70
        g_ps2RecompiledFunctionTable[24] = sub_01DD6C78_0x1dd6c78; // 0x1dd6c78
        g_ps2RecompiledFunctionTable[28] = sub_01DD6C88_0x1dd6c88; // 0x1dd6c88
        g_ps2RecompiledFunctionTable[32] = sub_01DD6C98_0x1dd6c98; // 0x1dd6c98
        g_ps2RecompiledFunctionTable[47] = sub_01DD6C98_0x1dd6c98; // 0x1dd6cd4
        g_ps2RecompiledFunctionTable[52] = sub_01DD6C98_0x1dd6c98; // 0x1dd6ce8
        g_ps2RecompiledFunctionTable[57] = sub_01DD6C98_0x1dd6c98; // 0x1dd6cfc
        g_ps2RecompiledFunctionTable[62] = sub_01DD6C98_0x1dd6c98; // 0x1dd6d10
        g_ps2RecompiledFunctionTable[71] = sub_01DD6C98_0x1dd6c98; // 0x1dd6d34
        g_ps2RecompiledFunctionTable[78] = sub_01DD6C98_0x1dd6c98; // 0x1dd6d50
        g_ps2RecompiledFunctionTable[94] = sub_01DD6D90_0x1dd6d90; // 0x1dd6d90
        g_ps2RecompiledFunctionTable[119] = sub_01DD6D90_0x1dd6d90; // 0x1dd6df4
        g_ps2RecompiledFunctionTable[132] = sub_01DD6D90_0x1dd6d90; // 0x1dd6e28
        g_ps2RecompiledFunctionTable[142] = sub_01DD6D90_0x1dd6d90; // 0x1dd6e50
        g_ps2RecompiledFunctionTable[147] = sub_01DD6D90_0x1dd6d90; // 0x1dd6e64
        g_ps2RecompiledFunctionTable[148] = sub_01DD6D90_0x1dd6d90; // 0x1dd6e68
        g_ps2RecompiledFunctionTable[152] = sub_01DD6D90_0x1dd6d90; // 0x1dd6e78
        g_ps2RecompiledFunctionTable[168] = sub_01DD6D90_0x1dd6d90; // 0x1dd6eb8
        g_ps2RecompiledFunctionTable[190] = sub_01DD6D90_0x1dd6d90; // 0x1dd6f10
        g_ps2RecompiledFunctionTable[197] = sub_01DD6D90_0x1dd6d90; // 0x1dd6f2c
        g_ps2RecompiledFunctionTable[214] = sub_01DD6D90_0x1dd6d90; // 0x1dd6f70
        g_ps2RecompiledFunctionTable[238] = sub_01DD6D90_0x1dd6d90; // 0x1dd6fd0
        g_ps2RecompiledFunctionTable[245] = sub_01DD6D90_0x1dd6d90; // 0x1dd6fec
        g_ps2RecompiledFunctionTable[250] = sub_01DD6D90_0x1dd6d90; // 0x1dd7000
        g_ps2RecompiledFunctionTable[260] = sub_01DD7028_0x1dd7028; // 0x1dd7028
        g_ps2RecompiledFunctionTable[278] = sub_01DD7070_0x1dd7070; // 0x1dd7070
        g_ps2RecompiledFunctionTable[284] = sub_01DD7070_0x1dd7070; // 0x1dd7088
        g_ps2RecompiledFunctionTable[294] = sub_01DD70B0_0x1dd70b0; // 0x1dd70b0
        g_ps2RecompiledFunctionTable[304] = sub_01DD70B0_0x1dd70b0; // 0x1dd70d8
        g_ps2RecompiledFunctionTable[308] = sub_01DD70E8_0x1dd70e8; // 0x1dd70e8
        g_ps2RecompiledFunctionTable[314] = sub_01DD70E8_0x1dd70e8; // 0x1dd7100
        g_ps2RecompiledFunctionTable[327] = sub_01DD70E8_0x1dd70e8; // 0x1dd7134
        g_ps2RecompiledFunctionTable[336] = sub_01DD7158_0x1dd7158; // 0x1dd7158
        g_ps2RecompiledFunctionTable[345] = sub_01DD7158_0x1dd7158; // 0x1dd717c
        g_ps2RecompiledFunctionTable[348] = sub_01DD7188_0x1dd7188; // 0x1dd7188
        g_ps2RecompiledFunctionTable[351] = sub_01DD7188_0x1dd7188; // 0x1dd7194
        g_ps2RecompiledFunctionTable[364] = sub_01DD71C8_0x1dd71c8; // 0x1dd71c8
        g_ps2RecompiledFunctionTable[376] = sub_01DD71C8_0x1dd71c8; // 0x1dd71f8
        g_ps2RecompiledFunctionTable[381] = sub_01DD71C8_0x1dd71c8; // 0x1dd720c
        g_ps2RecompiledFunctionTable[385] = sub_01DD71C8_0x1dd71c8; // 0x1dd721c
        g_ps2RecompiledFunctionTable[416] = sub_01DD71C8_0x1dd71c8; // 0x1dd7298
        g_ps2RecompiledFunctionTable[425] = sub_01DD71C8_0x1dd71c8; // 0x1dd72bc
        g_ps2RecompiledFunctionTable[429] = sub_01DD71C8_0x1dd71c8; // 0x1dd72cc
        g_ps2RecompiledFunctionTable[433] = sub_01DD71C8_0x1dd71c8; // 0x1dd72dc
        g_ps2RecompiledFunctionTable[436] = sub_01DD71C8_0x1dd71c8; // 0x1dd72e8
        g_ps2RecompiledFunctionTable[458] = sub_01DD71C8_0x1dd71c8; // 0x1dd7340
        g_ps2RecompiledFunctionTable[472] = sub_01DD7378_0x1dd7378; // 0x1dd7378
        g_ps2RecompiledFunctionTable[476] = sub_01DD7388_0x1dd7388; // 0x1dd7388
        g_ps2RecompiledFunctionTable[480] = sub_01DD7398_0x1dd7398; // 0x1dd7398
        g_ps2RecompiledFunctionTable[488] = sub_01DD7398_0x1dd7398; // 0x1dd73b8
        g_ps2RecompiledFunctionTable[511] = sub_01DD7414_0x1dd7414; // 0x1dd7414
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
