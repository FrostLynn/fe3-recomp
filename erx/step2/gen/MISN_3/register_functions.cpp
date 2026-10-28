#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dcd818u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dcdfc0u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 490u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[490u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DCD818_0x1dcd818; // 0x1dcd818
        g_ps2RecompiledFunctionTable[2] = sub_01DCD820_0x1dcd820; // 0x1dcd820
        g_ps2RecompiledFunctionTable[4] = sub_01DCD828_0x1dcd828; // 0x1dcd828
        g_ps2RecompiledFunctionTable[6] = sub_01DCD830_0x1dcd830; // 0x1dcd830
        g_ps2RecompiledFunctionTable[8] = sub_01DCD838_0x1dcd838; // 0x1dcd838
        g_ps2RecompiledFunctionTable[10] = sub_01DCD840_0x1dcd840; // 0x1dcd840
        g_ps2RecompiledFunctionTable[12] = sub_01DCD848_0x1dcd848; // 0x1dcd848
        g_ps2RecompiledFunctionTable[16] = sub_01DCD858_0x1dcd858; // 0x1dcd858
        g_ps2RecompiledFunctionTable[18] = sub_01DCD860_0x1dcd860; // 0x1dcd860
        g_ps2RecompiledFunctionTable[20] = sub_01DCD868_0x1dcd868; // 0x1dcd868
        g_ps2RecompiledFunctionTable[22] = sub_01DCD870_0x1dcd870; // 0x1dcd870
        g_ps2RecompiledFunctionTable[26] = sub_01DCD880_0x1dcd880; // 0x1dcd880
        g_ps2RecompiledFunctionTable[30] = sub_01DCD890_0x1dcd890; // 0x1dcd890
        g_ps2RecompiledFunctionTable[45] = sub_01DCD890_0x1dcd890; // 0x1dcd8cc
        g_ps2RecompiledFunctionTable[50] = sub_01DCD890_0x1dcd890; // 0x1dcd8e0
        g_ps2RecompiledFunctionTable[55] = sub_01DCD890_0x1dcd890; // 0x1dcd8f4
        g_ps2RecompiledFunctionTable[60] = sub_01DCD890_0x1dcd890; // 0x1dcd908
        g_ps2RecompiledFunctionTable[67] = sub_01DCD890_0x1dcd890; // 0x1dcd924
        g_ps2RecompiledFunctionTable[72] = sub_01DCD890_0x1dcd890; // 0x1dcd938
        g_ps2RecompiledFunctionTable[81] = sub_01DCD890_0x1dcd890; // 0x1dcd95c
        g_ps2RecompiledFunctionTable[88] = sub_01DCD890_0x1dcd890; // 0x1dcd978
        g_ps2RecompiledFunctionTable[104] = sub_01DCD9B8_0x1dcd9b8; // 0x1dcd9b8
        g_ps2RecompiledFunctionTable[117] = sub_01DCD9B8_0x1dcd9b8; // 0x1dcd9ec
        g_ps2RecompiledFunctionTable[122] = sub_01DCD9B8_0x1dcd9b8; // 0x1dcda00
        g_ps2RecompiledFunctionTable[128] = sub_01DCD9B8_0x1dcd9b8; // 0x1dcda18
        g_ps2RecompiledFunctionTable[147] = sub_01DCD9B8_0x1dcd9b8; // 0x1dcda64
        g_ps2RecompiledFunctionTable[150] = sub_01DCDA70_0x1dcda70; // 0x1dcda70
        g_ps2RecompiledFunctionTable[155] = sub_01DCDA70_0x1dcda70; // 0x1dcda84
        g_ps2RecompiledFunctionTable[158] = sub_01DCDA90_0x1dcda90; // 0x1dcda90
        g_ps2RecompiledFunctionTable[168] = sub_01DCDA90_0x1dcda90; // 0x1dcdab8
        g_ps2RecompiledFunctionTable[172] = sub_01DCDA90_0x1dcda90; // 0x1dcdac8
        g_ps2RecompiledFunctionTable[177] = sub_01DCDA90_0x1dcda90; // 0x1dcdadc
        g_ps2RecompiledFunctionTable[182] = sub_01DCDA90_0x1dcda90; // 0x1dcdaf0
        g_ps2RecompiledFunctionTable[189] = sub_01DCDA90_0x1dcda90; // 0x1dcdb0c
        g_ps2RecompiledFunctionTable[194] = sub_01DCDA90_0x1dcda90; // 0x1dcdb20
        g_ps2RecompiledFunctionTable[224] = sub_01DCDB98_0x1dcdb98; // 0x1dcdb98
        g_ps2RecompiledFunctionTable[232] = sub_01DCDB98_0x1dcdb98; // 0x1dcdbb8
        g_ps2RecompiledFunctionTable[236] = sub_01DCDB98_0x1dcdb98; // 0x1dcdbc8
        g_ps2RecompiledFunctionTable[254] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc10
        g_ps2RecompiledFunctionTable[260] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc28
        g_ps2RecompiledFunctionTable[266] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc40
        g_ps2RecompiledFunctionTable[271] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc54
        g_ps2RecompiledFunctionTable[275] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc64
        g_ps2RecompiledFunctionTable[280] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc78
        g_ps2RecompiledFunctionTable[287] = sub_01DCDC10_0x1dcdc10; // 0x1dcdc94
        g_ps2RecompiledFunctionTable[292] = sub_01DCDC10_0x1dcdc10; // 0x1dcdca8
        g_ps2RecompiledFunctionTable[314] = sub_01DCDD00_0x1dcdd00; // 0x1dcdd00
        g_ps2RecompiledFunctionTable[322] = sub_01DCDD00_0x1dcdd00; // 0x1dcdd20
        g_ps2RecompiledFunctionTable[326] = sub_01DCDD00_0x1dcdd00; // 0x1dcdd30
        g_ps2RecompiledFunctionTable[335] = sub_01DCDD00_0x1dcdd00; // 0x1dcdd54
        g_ps2RecompiledFunctionTable[338] = sub_01DCDD00_0x1dcdd00; // 0x1dcdd60
        g_ps2RecompiledFunctionTable[344] = sub_01DCDD00_0x1dcdd00; // 0x1dcdd78
        g_ps2RecompiledFunctionTable[352] = sub_01DCDD98_0x1dcdd98; // 0x1dcdd98
        g_ps2RecompiledFunctionTable[362] = sub_01DCDD98_0x1dcdd98; // 0x1dcddc0
        g_ps2RecompiledFunctionTable[366] = sub_01DCDD98_0x1dcdd98; // 0x1dcddd0
        g_ps2RecompiledFunctionTable[371] = sub_01DCDD98_0x1dcdd98; // 0x1dcdde4
        g_ps2RecompiledFunctionTable[379] = sub_01DCDD98_0x1dcdd98; // 0x1dcde04
        g_ps2RecompiledFunctionTable[383] = sub_01DCDD98_0x1dcdd98; // 0x1dcde14
        g_ps2RecompiledFunctionTable[386] = sub_01DCDD98_0x1dcdd98; // 0x1dcde20
        g_ps2RecompiledFunctionTable[404] = sub_01DCDE68_0x1dcde68; // 0x1dcde68
        g_ps2RecompiledFunctionTable[413] = sub_01DCDE68_0x1dcde68; // 0x1dcde8c
        g_ps2RecompiledFunctionTable[418] = sub_01DCDE68_0x1dcde68; // 0x1dcdea0
        g_ps2RecompiledFunctionTable[432] = sub_01DCDED8_0x1dcded8; // 0x1dcded8
        g_ps2RecompiledFunctionTable[438] = sub_01DCDEF0_0x1dcdef0; // 0x1dcdef0
        g_ps2RecompiledFunctionTable[442] = sub_01DCDEF0_0x1dcdef0; // 0x1dcdf00
        g_ps2RecompiledFunctionTable[450] = sub_01DCDF20_0x1dcdf20; // 0x1dcdf20
        g_ps2RecompiledFunctionTable[454] = sub_01DCDF30_0x1dcdf30; // 0x1dcdf30
        g_ps2RecompiledFunctionTable[458] = sub_01DCDF40_0x1dcdf40; // 0x1dcdf40
        g_ps2RecompiledFunctionTable[466] = sub_01DCDF40_0x1dcdf40; // 0x1dcdf60
        g_ps2RecompiledFunctionTable[489] = sub_01DCDFBC_0x1dcdfbc; // 0x1dcdfbc
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
