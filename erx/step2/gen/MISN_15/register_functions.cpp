#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1de3718u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1de3d90u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 414u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[414u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DE3718_0x1de3718; // 0x1de3718
        g_ps2RecompiledFunctionTable[2] = sub_01DE3720_0x1de3720; // 0x1de3720
        g_ps2RecompiledFunctionTable[4] = sub_01DE3728_0x1de3728; // 0x1de3728
        g_ps2RecompiledFunctionTable[6] = sub_01DE3730_0x1de3730; // 0x1de3730
        g_ps2RecompiledFunctionTable[8] = sub_01DE3738_0x1de3738; // 0x1de3738
        g_ps2RecompiledFunctionTable[10] = sub_01DE3740_0x1de3740; // 0x1de3740
        g_ps2RecompiledFunctionTable[12] = sub_01DE3748_0x1de3748; // 0x1de3748
        g_ps2RecompiledFunctionTable[16] = sub_01DE3758_0x1de3758; // 0x1de3758
        g_ps2RecompiledFunctionTable[18] = sub_01DE3760_0x1de3760; // 0x1de3760
        g_ps2RecompiledFunctionTable[20] = sub_01DE3768_0x1de3768; // 0x1de3768
        g_ps2RecompiledFunctionTable[24] = sub_01DE3778_0x1de3778; // 0x1de3778
        g_ps2RecompiledFunctionTable[28] = sub_01DE3788_0x1de3788; // 0x1de3788
        g_ps2RecompiledFunctionTable[43] = sub_01DE3788_0x1de3788; // 0x1de37c4
        g_ps2RecompiledFunctionTable[48] = sub_01DE3788_0x1de3788; // 0x1de37d8
        g_ps2RecompiledFunctionTable[53] = sub_01DE3788_0x1de3788; // 0x1de37ec
        g_ps2RecompiledFunctionTable[58] = sub_01DE3788_0x1de3788; // 0x1de3800
        g_ps2RecompiledFunctionTable[67] = sub_01DE3788_0x1de3788; // 0x1de3824
        g_ps2RecompiledFunctionTable[74] = sub_01DE3788_0x1de3788; // 0x1de3840
        g_ps2RecompiledFunctionTable[90] = sub_01DE3880_0x1de3880; // 0x1de3880
        g_ps2RecompiledFunctionTable[96] = sub_01DE3898_0x1de3898; // 0x1de3898
        g_ps2RecompiledFunctionTable[138] = sub_01DE3940_0x1de3940; // 0x1de3940
        g_ps2RecompiledFunctionTable[147] = sub_01DE3940_0x1de3940; // 0x1de3964
        g_ps2RecompiledFunctionTable[157] = sub_01DE3940_0x1de3940; // 0x1de398c
        g_ps2RecompiledFunctionTable[164] = sub_01DE3940_0x1de3940; // 0x1de39a8
        g_ps2RecompiledFunctionTable[168] = sub_01DE3940_0x1de3940; // 0x1de39b8
        g_ps2RecompiledFunctionTable[172] = sub_01DE3940_0x1de3940; // 0x1de39c8
        g_ps2RecompiledFunctionTable[182] = sub_01DE39F0_0x1de39f0; // 0x1de39f0
        g_ps2RecompiledFunctionTable[184] = sub_01DE39F8_0x1de39f8; // 0x1de39f8
        g_ps2RecompiledFunctionTable[193] = sub_01DE39F8_0x1de39f8; // 0x1de3a1c
        g_ps2RecompiledFunctionTable[198] = sub_01DE39F8_0x1de39f8; // 0x1de3a30
        g_ps2RecompiledFunctionTable[208] = sub_01DE39F8_0x1de39f8; // 0x1de3a58
        g_ps2RecompiledFunctionTable[218] = sub_01DE3A80_0x1de3a80; // 0x1de3a80
        g_ps2RecompiledFunctionTable[227] = sub_01DE3A80_0x1de3a80; // 0x1de3aa4
        g_ps2RecompiledFunctionTable[230] = sub_01DE3AB0_0x1de3ab0; // 0x1de3ab0
        g_ps2RecompiledFunctionTable[239] = sub_01DE3AB0_0x1de3ab0; // 0x1de3ad4
        g_ps2RecompiledFunctionTable[242] = sub_01DE3AE0_0x1de3ae0; // 0x1de3ae0
        g_ps2RecompiledFunctionTable[248] = sub_01DE3AF8_0x1de3af8; // 0x1de3af8
        g_ps2RecompiledFunctionTable[257] = sub_01DE3AF8_0x1de3af8; // 0x1de3b1c
        g_ps2RecompiledFunctionTable[262] = sub_01DE3AF8_0x1de3af8; // 0x1de3b30
        g_ps2RecompiledFunctionTable[264] = sub_01DE3AF8_0x1de3af8; // 0x1de3b38
        g_ps2RecompiledFunctionTable[270] = sub_01DE3AF8_0x1de3af8; // 0x1de3b50
        g_ps2RecompiledFunctionTable[272] = sub_01DE3AF8_0x1de3af8; // 0x1de3b58
        g_ps2RecompiledFunctionTable[282] = sub_01DE3B80_0x1de3b80; // 0x1de3b80
        g_ps2RecompiledFunctionTable[290] = sub_01DE3BA0_0x1de3ba0; // 0x1de3ba0
        g_ps2RecompiledFunctionTable[299] = sub_01DE3BA0_0x1de3ba0; // 0x1de3bc4
        g_ps2RecompiledFunctionTable[304] = sub_01DE3BA0_0x1de3ba0; // 0x1de3bd8
        g_ps2RecompiledFunctionTable[309] = sub_01DE3BA0_0x1de3ba0; // 0x1de3bec
        g_ps2RecompiledFunctionTable[313] = sub_01DE3BA0_0x1de3ba0; // 0x1de3bfc
        g_ps2RecompiledFunctionTable[315] = sub_01DE3BA0_0x1de3ba0; // 0x1de3c04
        g_ps2RecompiledFunctionTable[317] = sub_01DE3BA0_0x1de3ba0; // 0x1de3c0c
        g_ps2RecompiledFunctionTable[328] = sub_01DE3C38_0x1de3c38; // 0x1de3c38
        g_ps2RecompiledFunctionTable[338] = sub_01DE3C60_0x1de3c60; // 0x1de3c60
        g_ps2RecompiledFunctionTable[347] = sub_01DE3C60_0x1de3c60; // 0x1de3c84
        g_ps2RecompiledFunctionTable[352] = sub_01DE3C60_0x1de3c60; // 0x1de3c98
        g_ps2RecompiledFunctionTable[357] = sub_01DE3C60_0x1de3c60; // 0x1de3cac
        g_ps2RecompiledFunctionTable[361] = sub_01DE3C60_0x1de3c60; // 0x1de3cbc
        g_ps2RecompiledFunctionTable[363] = sub_01DE3C60_0x1de3c60; // 0x1de3cc4
        g_ps2RecompiledFunctionTable[374] = sub_01DE3CF0_0x1de3cf0; // 0x1de3cf0
        g_ps2RecompiledFunctionTable[378] = sub_01DE3D00_0x1de3d00; // 0x1de3d00
        g_ps2RecompiledFunctionTable[382] = sub_01DE3D10_0x1de3d10; // 0x1de3d10
        g_ps2RecompiledFunctionTable[390] = sub_01DE3D10_0x1de3d10; // 0x1de3d30
        g_ps2RecompiledFunctionTable[413] = sub_01DE3D8C_0x1de3d8c; // 0x1de3d8c
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
