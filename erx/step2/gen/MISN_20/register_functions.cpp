#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1deaf18u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1deb4a8u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 356u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[356u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DEAF18_0x1deaf18; // 0x1deaf18
        g_ps2RecompiledFunctionTable[2] = sub_01DEAF20_0x1deaf20; // 0x1deaf20
        g_ps2RecompiledFunctionTable[4] = sub_01DEAF28_0x1deaf28; // 0x1deaf28
        g_ps2RecompiledFunctionTable[6] = sub_01DEAF30_0x1deaf30; // 0x1deaf30
        g_ps2RecompiledFunctionTable[8] = sub_01DEAF38_0x1deaf38; // 0x1deaf38
        g_ps2RecompiledFunctionTable[10] = sub_01DEAF40_0x1deaf40; // 0x1deaf40
        g_ps2RecompiledFunctionTable[12] = sub_01DEAF48_0x1deaf48; // 0x1deaf48
        g_ps2RecompiledFunctionTable[16] = sub_01DEAF58_0x1deaf58; // 0x1deaf58
        g_ps2RecompiledFunctionTable[20] = sub_01DEAF68_0x1deaf68; // 0x1deaf68
        g_ps2RecompiledFunctionTable[24] = sub_01DEAF78_0x1deaf78; // 0x1deaf78
        g_ps2RecompiledFunctionTable[39] = sub_01DEAF78_0x1deaf78; // 0x1deafb4
        g_ps2RecompiledFunctionTable[44] = sub_01DEAF78_0x1deaf78; // 0x1deafc8
        g_ps2RecompiledFunctionTable[49] = sub_01DEAF78_0x1deaf78; // 0x1deafdc
        g_ps2RecompiledFunctionTable[54] = sub_01DEAF78_0x1deaf78; // 0x1deaff0
        g_ps2RecompiledFunctionTable[63] = sub_01DEAF78_0x1deaf78; // 0x1deb014
        g_ps2RecompiledFunctionTable[70] = sub_01DEAF78_0x1deaf78; // 0x1deb030
        g_ps2RecompiledFunctionTable[86] = sub_01DEB070_0x1deb070; // 0x1deb070
        g_ps2RecompiledFunctionTable[88] = sub_01DEB078_0x1deb078; // 0x1deb078
        g_ps2RecompiledFunctionTable[94] = sub_01DEB078_0x1deb078; // 0x1deb090
        g_ps2RecompiledFunctionTable[128] = sub_01DEB118_0x1deb118; // 0x1deb118
        g_ps2RecompiledFunctionTable[133] = sub_01DEB118_0x1deb118; // 0x1deb12c
        g_ps2RecompiledFunctionTable[144] = sub_01DEB118_0x1deb118; // 0x1deb158
        g_ps2RecompiledFunctionTable[166] = sub_01DEB118_0x1deb118; // 0x1deb1b0
        g_ps2RecompiledFunctionTable[170] = sub_01DEB118_0x1deb118; // 0x1deb1c0
        g_ps2RecompiledFunctionTable[180] = sub_01DEB118_0x1deb118; // 0x1deb1e8
        g_ps2RecompiledFunctionTable[186] = sub_01DEB118_0x1deb118; // 0x1deb200
        g_ps2RecompiledFunctionTable[196] = sub_01DEB228_0x1deb228; // 0x1deb228
        g_ps2RecompiledFunctionTable[215] = sub_01DEB228_0x1deb228; // 0x1deb274
        g_ps2RecompiledFunctionTable[218] = sub_01DEB280_0x1deb280; // 0x1deb280
        g_ps2RecompiledFunctionTable[227] = sub_01DEB280_0x1deb280; // 0x1deb2a4
        g_ps2RecompiledFunctionTable[230] = sub_01DEB2B0_0x1deb2b0; // 0x1deb2b0
        g_ps2RecompiledFunctionTable[238] = sub_01DEB2D0_0x1deb2d0; // 0x1deb2d0
        g_ps2RecompiledFunctionTable[242] = sub_01DEB2D0_0x1deb2d0; // 0x1deb2e0
        g_ps2RecompiledFunctionTable[244] = sub_01DEB2D0_0x1deb2d0; // 0x1deb2e8
        g_ps2RecompiledFunctionTable[252] = sub_01DEB308_0x1deb308; // 0x1deb308
        g_ps2RecompiledFunctionTable[258] = sub_01DEB308_0x1deb308; // 0x1deb320
        g_ps2RecompiledFunctionTable[266] = sub_01DEB340_0x1deb340; // 0x1deb340
        g_ps2RecompiledFunctionTable[270] = sub_01DEB340_0x1deb340; // 0x1deb350
        g_ps2RecompiledFunctionTable[272] = sub_01DEB340_0x1deb340; // 0x1deb358
        g_ps2RecompiledFunctionTable[280] = sub_01DEB378_0x1deb378; // 0x1deb378
        g_ps2RecompiledFunctionTable[286] = sub_01DEB390_0x1deb390; // 0x1deb390
        g_ps2RecompiledFunctionTable[290] = sub_01DEB390_0x1deb390; // 0x1deb3a0
        g_ps2RecompiledFunctionTable[294] = sub_01DEB390_0x1deb390; // 0x1deb3b0
        g_ps2RecompiledFunctionTable[314] = sub_01DEB400_0x1deb400; // 0x1deb400
        g_ps2RecompiledFunctionTable[318] = sub_01DEB410_0x1deb410; // 0x1deb410
        g_ps2RecompiledFunctionTable[322] = sub_01DEB420_0x1deb420; // 0x1deb420
        g_ps2RecompiledFunctionTable[330] = sub_01DEB420_0x1deb420; // 0x1deb440
        g_ps2RecompiledFunctionTable[355] = sub_01DEB4A4_0x1deb4a4; // 0x1deb4a4
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
