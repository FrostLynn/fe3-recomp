#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dd9618u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dd9d98u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 480u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[480u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DD9618_0x1dd9618; // 0x1dd9618
        g_ps2RecompiledFunctionTable[2] = sub_01DD9620_0x1dd9620; // 0x1dd9620
        g_ps2RecompiledFunctionTable[4] = sub_01DD9628_0x1dd9628; // 0x1dd9628
        g_ps2RecompiledFunctionTable[6] = sub_01DD9630_0x1dd9630; // 0x1dd9630
        g_ps2RecompiledFunctionTable[8] = sub_01DD9638_0x1dd9638; // 0x1dd9638
        g_ps2RecompiledFunctionTable[10] = sub_01DD9640_0x1dd9640; // 0x1dd9640
        g_ps2RecompiledFunctionTable[14] = sub_01DD9650_0x1dd9650; // 0x1dd9650
        g_ps2RecompiledFunctionTable[16] = sub_01DD9658_0x1dd9658; // 0x1dd9658
        g_ps2RecompiledFunctionTable[18] = sub_01DD9660_0x1dd9660; // 0x1dd9660
        g_ps2RecompiledFunctionTable[20] = sub_01DD9668_0x1dd9668; // 0x1dd9668
        g_ps2RecompiledFunctionTable[22] = sub_01DD9670_0x1dd9670; // 0x1dd9670
        g_ps2RecompiledFunctionTable[26] = sub_01DD9680_0x1dd9680; // 0x1dd9680
        g_ps2RecompiledFunctionTable[30] = sub_01DD9690_0x1dd9690; // 0x1dd9690
        g_ps2RecompiledFunctionTable[45] = sub_01DD9690_0x1dd9690; // 0x1dd96cc
        g_ps2RecompiledFunctionTable[50] = sub_01DD9690_0x1dd9690; // 0x1dd96e0
        g_ps2RecompiledFunctionTable[55] = sub_01DD9690_0x1dd9690; // 0x1dd96f4
        g_ps2RecompiledFunctionTable[60] = sub_01DD9690_0x1dd9690; // 0x1dd9708
        g_ps2RecompiledFunctionTable[69] = sub_01DD9690_0x1dd9690; // 0x1dd972c
        g_ps2RecompiledFunctionTable[76] = sub_01DD9690_0x1dd9690; // 0x1dd9748
        g_ps2RecompiledFunctionTable[92] = sub_01DD9788_0x1dd9788; // 0x1dd9788
        g_ps2RecompiledFunctionTable[105] = sub_01DD9788_0x1dd9788; // 0x1dd97bc
        g_ps2RecompiledFunctionTable[114] = sub_01DD9788_0x1dd9788; // 0x1dd97e0
        g_ps2RecompiledFunctionTable[120] = sub_01DD97F8_0x1dd97f8; // 0x1dd97f8
        g_ps2RecompiledFunctionTable[125] = sub_01DD97F8_0x1dd97f8; // 0x1dd980c
        g_ps2RecompiledFunctionTable[128] = sub_01DD9818_0x1dd9818; // 0x1dd9818
        g_ps2RecompiledFunctionTable[133] = sub_01DD9818_0x1dd9818; // 0x1dd982c
        g_ps2RecompiledFunctionTable[136] = sub_01DD9838_0x1dd9838; // 0x1dd9838
        g_ps2RecompiledFunctionTable[141] = sub_01DD9838_0x1dd9838; // 0x1dd984c
        g_ps2RecompiledFunctionTable[144] = sub_01DD9858_0x1dd9858; // 0x1dd9858
        g_ps2RecompiledFunctionTable[149] = sub_01DD9858_0x1dd9858; // 0x1dd986c
        g_ps2RecompiledFunctionTable[152] = sub_01DD9878_0x1dd9878; // 0x1dd9878
        g_ps2RecompiledFunctionTable[157] = sub_01DD9878_0x1dd9878; // 0x1dd988c
        g_ps2RecompiledFunctionTable[160] = sub_01DD9898_0x1dd9898; // 0x1dd9898
        g_ps2RecompiledFunctionTable[165] = sub_01DD9898_0x1dd9898; // 0x1dd98ac
        g_ps2RecompiledFunctionTable[168] = sub_01DD98B8_0x1dd98b8; // 0x1dd98b8
        g_ps2RecompiledFunctionTable[173] = sub_01DD98B8_0x1dd98b8; // 0x1dd98cc
        g_ps2RecompiledFunctionTable[176] = sub_01DD98D8_0x1dd98d8; // 0x1dd98d8
        g_ps2RecompiledFunctionTable[181] = sub_01DD98D8_0x1dd98d8; // 0x1dd98ec
        g_ps2RecompiledFunctionTable[184] = sub_01DD98F8_0x1dd98f8; // 0x1dd98f8
        g_ps2RecompiledFunctionTable[196] = sub_01DD9928_0x1dd9928; // 0x1dd9928
        g_ps2RecompiledFunctionTable[204] = sub_01DD9948_0x1dd9948; // 0x1dd9948
        g_ps2RecompiledFunctionTable[211] = sub_01DD9948_0x1dd9948; // 0x1dd9964
        g_ps2RecompiledFunctionTable[218] = sub_01DD9948_0x1dd9948; // 0x1dd9980
        g_ps2RecompiledFunctionTable[234] = sub_01DD99C0_0x1dd99c0; // 0x1dd99c0
        g_ps2RecompiledFunctionTable[240] = sub_01DD99D8_0x1dd99d8; // 0x1dd99d8
        g_ps2RecompiledFunctionTable[246] = sub_01DD99F0_0x1dd99f0; // 0x1dd99f0
        g_ps2RecompiledFunctionTable[253] = sub_01DD99F0_0x1dd99f0; // 0x1dd9a0c
        g_ps2RecompiledFunctionTable[258] = sub_01DD99F0_0x1dd99f0; // 0x1dd9a20
        g_ps2RecompiledFunctionTable[262] = sub_01DD99F0_0x1dd99f0; // 0x1dd9a30
        g_ps2RecompiledFunctionTable[290] = sub_01DD9AA0_0x1dd9aa0; // 0x1dd9aa0
        g_ps2RecompiledFunctionTable[297] = sub_01DD9AA0_0x1dd9aa0; // 0x1dd9abc
        g_ps2RecompiledFunctionTable[302] = sub_01DD9AA0_0x1dd9aa0; // 0x1dd9ad0
        g_ps2RecompiledFunctionTable[306] = sub_01DD9AA0_0x1dd9aa0; // 0x1dd9ae0
        g_ps2RecompiledFunctionTable[324] = sub_01DD9B28_0x1dd9b28; // 0x1dd9b28
        g_ps2RecompiledFunctionTable[334] = sub_01DD9B28_0x1dd9b28; // 0x1dd9b50
        g_ps2RecompiledFunctionTable[339] = sub_01DD9B28_0x1dd9b28; // 0x1dd9b64
        g_ps2RecompiledFunctionTable[344] = sub_01DD9B28_0x1dd9b28; // 0x1dd9b78
        g_ps2RecompiledFunctionTable[350] = sub_01DD9B28_0x1dd9b28; // 0x1dd9b90
        g_ps2RecompiledFunctionTable[354] = sub_01DD9B28_0x1dd9b28; // 0x1dd9ba0
        g_ps2RecompiledFunctionTable[374] = sub_01DD9BF0_0x1dd9bf0; // 0x1dd9bf0
        g_ps2RecompiledFunctionTable[384] = sub_01DD9BF0_0x1dd9bf0; // 0x1dd9c18
        g_ps2RecompiledFunctionTable[389] = sub_01DD9BF0_0x1dd9bf0; // 0x1dd9c2c
        g_ps2RecompiledFunctionTable[394] = sub_01DD9BF0_0x1dd9bf0; // 0x1dd9c40
        g_ps2RecompiledFunctionTable[400] = sub_01DD9BF0_0x1dd9bf0; // 0x1dd9c58
        g_ps2RecompiledFunctionTable[404] = sub_01DD9BF0_0x1dd9bf0; // 0x1dd9c68
        g_ps2RecompiledFunctionTable[428] = sub_01DD9CC8_0x1dd9cc8; // 0x1dd9cc8
        g_ps2RecompiledFunctionTable[430] = sub_01DD9CD0_0x1dd9cd0; // 0x1dd9cd0
        g_ps2RecompiledFunctionTable[436] = sub_01DD9CE8_0x1dd9ce8; // 0x1dd9ce8
        g_ps2RecompiledFunctionTable[440] = sub_01DD9CF8_0x1dd9cf8; // 0x1dd9cf8
        g_ps2RecompiledFunctionTable[444] = sub_01DD9D08_0x1dd9d08; // 0x1dd9d08
        g_ps2RecompiledFunctionTable[453] = sub_01DD9D08_0x1dd9d08; // 0x1dd9d2c
        g_ps2RecompiledFunctionTable[479] = sub_01DD9D94_0x1dd9d94; // 0x1dd9d94
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
