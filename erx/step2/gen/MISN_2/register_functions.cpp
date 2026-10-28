#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dcbb18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dcc470u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 598u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[598u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DCBB18_0x1dcbb18; // 0x1dcbb18
        g_ps2RecompiledFunctionTable[2] = sub_01DCBB20_0x1dcbb20; // 0x1dcbb20
        g_ps2RecompiledFunctionTable[4] = sub_01DCBB28_0x1dcbb28; // 0x1dcbb28
        g_ps2RecompiledFunctionTable[6] = sub_01DCBB30_0x1dcbb30; // 0x1dcbb30
        g_ps2RecompiledFunctionTable[8] = sub_01DCBB38_0x1dcbb38; // 0x1dcbb38
        g_ps2RecompiledFunctionTable[10] = sub_01DCBB40_0x1dcbb40; // 0x1dcbb40
        g_ps2RecompiledFunctionTable[12] = sub_01DCBB48_0x1dcbb48; // 0x1dcbb48
        g_ps2RecompiledFunctionTable[14] = sub_01DCBB50_0x1dcbb50; // 0x1dcbb50
        g_ps2RecompiledFunctionTable[16] = sub_01DCBB58_0x1dcbb58; // 0x1dcbb58
        g_ps2RecompiledFunctionTable[20] = sub_01DCBB68_0x1dcbb68; // 0x1dcbb68
        g_ps2RecompiledFunctionTable[22] = sub_01DCBB70_0x1dcbb70; // 0x1dcbb70
        g_ps2RecompiledFunctionTable[24] = sub_01DCBB78_0x1dcbb78; // 0x1dcbb78
        g_ps2RecompiledFunctionTable[26] = sub_01DCBB80_0x1dcbb80; // 0x1dcbb80
        g_ps2RecompiledFunctionTable[28] = sub_01DCBB88_0x1dcbb88; // 0x1dcbb88
        g_ps2RecompiledFunctionTable[32] = sub_01DCBB98_0x1dcbb98; // 0x1dcbb98
        g_ps2RecompiledFunctionTable[36] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbba8
        g_ps2RecompiledFunctionTable[51] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbbe4
        g_ps2RecompiledFunctionTable[56] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbbf8
        g_ps2RecompiledFunctionTable[61] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbc0c
        g_ps2RecompiledFunctionTable[66] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbc20
        g_ps2RecompiledFunctionTable[75] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbc44
        g_ps2RecompiledFunctionTable[82] = sub_01DCBBA8_0x1dcbba8; // 0x1dcbc60
        g_ps2RecompiledFunctionTable[98] = sub_01DCBCA0_0x1dcbca0; // 0x1dcbca0
        g_ps2RecompiledFunctionTable[106] = sub_01DCBCA0_0x1dcbca0; // 0x1dcbcc0
        g_ps2RecompiledFunctionTable[116] = sub_01DCBCA0_0x1dcbca0; // 0x1dcbce8
        g_ps2RecompiledFunctionTable[120] = sub_01DCBCF8_0x1dcbcf8; // 0x1dcbcf8
        g_ps2RecompiledFunctionTable[125] = sub_01DCBCF8_0x1dcbcf8; // 0x1dcbd0c
        g_ps2RecompiledFunctionTable[128] = sub_01DCBD18_0x1dcbd18; // 0x1dcbd18
        g_ps2RecompiledFunctionTable[139] = sub_01DCBD18_0x1dcbd18; // 0x1dcbd44
        g_ps2RecompiledFunctionTable[172] = sub_01DCBD18_0x1dcbd18; // 0x1dcbdc8
        g_ps2RecompiledFunctionTable[184] = sub_01DCBD18_0x1dcbd18; // 0x1dcbdf8
        g_ps2RecompiledFunctionTable[189] = sub_01DCBD18_0x1dcbd18; // 0x1dcbe0c
        g_ps2RecompiledFunctionTable[193] = sub_01DCBD18_0x1dcbd18; // 0x1dcbe1c
        g_ps2RecompiledFunctionTable[197] = sub_01DCBD18_0x1dcbd18; // 0x1dcbe2c
        g_ps2RecompiledFunctionTable[201] = sub_01DCBD18_0x1dcbd18; // 0x1dcbe3c
        g_ps2RecompiledFunctionTable[208] = sub_01DCBD18_0x1dcbd18; // 0x1dcbe58
        g_ps2RecompiledFunctionTable[220] = sub_01DCBE88_0x1dcbe88; // 0x1dcbe88
        g_ps2RecompiledFunctionTable[238] = sub_01DCBE88_0x1dcbe88; // 0x1dcbed0
        g_ps2RecompiledFunctionTable[245] = sub_01DCBE88_0x1dcbe88; // 0x1dcbeec
        g_ps2RecompiledFunctionTable[255] = sub_01DCBE88_0x1dcbe88; // 0x1dcbf14
        g_ps2RecompiledFunctionTable[279] = sub_01DCBE88_0x1dcbe88; // 0x1dcbf74
        g_ps2RecompiledFunctionTable[282] = sub_01DCBF80_0x1dcbf80; // 0x1dcbf80
        g_ps2RecompiledFunctionTable[290] = sub_01DCBFA0_0x1dcbfa0; // 0x1dcbfa0
        g_ps2RecompiledFunctionTable[298] = sub_01DCBFA0_0x1dcbfa0; // 0x1dcbfc0
        g_ps2RecompiledFunctionTable[305] = sub_01DCBFA0_0x1dcbfa0; // 0x1dcbfdc
        g_ps2RecompiledFunctionTable[322] = sub_01DCBFA0_0x1dcbfa0; // 0x1dcc020
        g_ps2RecompiledFunctionTable[324] = sub_01DCBFA0_0x1dcbfa0; // 0x1dcc028
        g_ps2RecompiledFunctionTable[328] = sub_01DCBFA0_0x1dcbfa0; // 0x1dcc038
        g_ps2RecompiledFunctionTable[350] = sub_01DCC090_0x1dcc090; // 0x1dcc090
        g_ps2RecompiledFunctionTable[357] = sub_01DCC090_0x1dcc090; // 0x1dcc0ac
        g_ps2RecompiledFunctionTable[363] = sub_01DCC090_0x1dcc090; // 0x1dcc0c4
        g_ps2RecompiledFunctionTable[373] = sub_01DCC090_0x1dcc090; // 0x1dcc0ec
        g_ps2RecompiledFunctionTable[378] = sub_01DCC100_0x1dcc100; // 0x1dcc100
        g_ps2RecompiledFunctionTable[385] = sub_01DCC100_0x1dcc100; // 0x1dcc11c
        g_ps2RecompiledFunctionTable[391] = sub_01DCC100_0x1dcc100; // 0x1dcc134
        g_ps2RecompiledFunctionTable[401] = sub_01DCC100_0x1dcc100; // 0x1dcc15c
        g_ps2RecompiledFunctionTable[414] = sub_01DCC190_0x1dcc190; // 0x1dcc190
        g_ps2RecompiledFunctionTable[427] = sub_01DCC190_0x1dcc190; // 0x1dcc1c4
        g_ps2RecompiledFunctionTable[432] = sub_01DCC190_0x1dcc190; // 0x1dcc1d8
        g_ps2RecompiledFunctionTable[440] = sub_01DCC190_0x1dcc190; // 0x1dcc1f8
        g_ps2RecompiledFunctionTable[442] = sub_01DCC190_0x1dcc190; // 0x1dcc200
        g_ps2RecompiledFunctionTable[460] = sub_01DCC190_0x1dcc190; // 0x1dcc248
        g_ps2RecompiledFunctionTable[464] = sub_01DCC190_0x1dcc190; // 0x1dcc258
        g_ps2RecompiledFunctionTable[484] = sub_01DCC190_0x1dcc190; // 0x1dcc2a8
        g_ps2RecompiledFunctionTable[494] = sub_01DCC190_0x1dcc190; // 0x1dcc2d0
        g_ps2RecompiledFunctionTable[510] = sub_01DCC190_0x1dcc190; // 0x1dcc310
        g_ps2RecompiledFunctionTable[512] = sub_01DCC190_0x1dcc190; // 0x1dcc318
        g_ps2RecompiledFunctionTable[536] = sub_01DCC378_0x1dcc378; // 0x1dcc378
        g_ps2RecompiledFunctionTable[544] = sub_01DCC378_0x1dcc378; // 0x1dcc398
        g_ps2RecompiledFunctionTable[548] = sub_01DCC378_0x1dcc378; // 0x1dcc3a8
        g_ps2RecompiledFunctionTable[558] = sub_01DCC3D0_0x1dcc3d0; // 0x1dcc3d0
        g_ps2RecompiledFunctionTable[562] = sub_01DCC3E0_0x1dcc3e0; // 0x1dcc3e0
        g_ps2RecompiledFunctionTable[566] = sub_01DCC3F0_0x1dcc3f0; // 0x1dcc3f0
        g_ps2RecompiledFunctionTable[574] = sub_01DCC3F0_0x1dcc3f0; // 0x1dcc410
        g_ps2RecompiledFunctionTable[597] = sub_01DCC46C_0x1dcc46c; // 0x1dcc46c
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
