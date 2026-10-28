#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dcf418u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dcf8c0u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 298u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[298u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DCF418_0x1dcf418; // 0x1dcf418
        g_ps2RecompiledFunctionTable[2] = sub_01DCF420_0x1dcf420; // 0x1dcf420
        g_ps2RecompiledFunctionTable[4] = sub_01DCF428_0x1dcf428; // 0x1dcf428
        g_ps2RecompiledFunctionTable[6] = sub_01DCF430_0x1dcf430; // 0x1dcf430
        g_ps2RecompiledFunctionTable[8] = sub_01DCF438_0x1dcf438; // 0x1dcf438
        g_ps2RecompiledFunctionTable[10] = sub_01DCF440_0x1dcf440; // 0x1dcf440
        g_ps2RecompiledFunctionTable[12] = sub_01DCF448_0x1dcf448; // 0x1dcf448
        g_ps2RecompiledFunctionTable[14] = sub_01DCF450_0x1dcf450; // 0x1dcf450
        g_ps2RecompiledFunctionTable[18] = sub_01DCF460_0x1dcf460; // 0x1dcf460
        g_ps2RecompiledFunctionTable[20] = sub_01DCF468_0x1dcf468; // 0x1dcf468
        g_ps2RecompiledFunctionTable[24] = sub_01DCF478_0x1dcf478; // 0x1dcf478
        g_ps2RecompiledFunctionTable[28] = sub_01DCF488_0x1dcf488; // 0x1dcf488
        g_ps2RecompiledFunctionTable[43] = sub_01DCF488_0x1dcf488; // 0x1dcf4c4
        g_ps2RecompiledFunctionTable[48] = sub_01DCF488_0x1dcf488; // 0x1dcf4d8
        g_ps2RecompiledFunctionTable[53] = sub_01DCF488_0x1dcf488; // 0x1dcf4ec
        g_ps2RecompiledFunctionTable[58] = sub_01DCF488_0x1dcf488; // 0x1dcf500
        g_ps2RecompiledFunctionTable[67] = sub_01DCF488_0x1dcf488; // 0x1dcf524
        g_ps2RecompiledFunctionTable[74] = sub_01DCF488_0x1dcf488; // 0x1dcf540
        g_ps2RecompiledFunctionTable[90] = sub_01DCF580_0x1dcf580; // 0x1dcf580
        g_ps2RecompiledFunctionTable[99] = sub_01DCF580_0x1dcf580; // 0x1dcf5a4
        g_ps2RecompiledFunctionTable[104] = sub_01DCF580_0x1dcf580; // 0x1dcf5b8
        g_ps2RecompiledFunctionTable[128] = sub_01DCF618_0x1dcf618; // 0x1dcf618
        g_ps2RecompiledFunctionTable[132] = sub_01DCF628_0x1dcf628; // 0x1dcf628
        g_ps2RecompiledFunctionTable[137] = sub_01DCF628_0x1dcf628; // 0x1dcf63c
        g_ps2RecompiledFunctionTable[140] = sub_01DCF648_0x1dcf648; // 0x1dcf648
        g_ps2RecompiledFunctionTable[145] = sub_01DCF648_0x1dcf648; // 0x1dcf65c
        g_ps2RecompiledFunctionTable[154] = sub_01DCF680_0x1dcf680; // 0x1dcf680
        g_ps2RecompiledFunctionTable[164] = sub_01DCF6A8_0x1dcf6a8; // 0x1dcf6a8
        g_ps2RecompiledFunctionTable[168] = sub_01DCF6A8_0x1dcf6a8; // 0x1dcf6b8
        g_ps2RecompiledFunctionTable[176] = sub_01DCF6D8_0x1dcf6d8; // 0x1dcf6d8
        g_ps2RecompiledFunctionTable[182] = sub_01DCF6F0_0x1dcf6f0; // 0x1dcf6f0
        g_ps2RecompiledFunctionTable[188] = sub_01DCF708_0x1dcf708; // 0x1dcf708
        g_ps2RecompiledFunctionTable[198] = sub_01DCF708_0x1dcf708; // 0x1dcf730
        g_ps2RecompiledFunctionTable[203] = sub_01DCF708_0x1dcf708; // 0x1dcf744
        g_ps2RecompiledFunctionTable[221] = sub_01DCF708_0x1dcf708; // 0x1dcf78c
        g_ps2RecompiledFunctionTable[234] = sub_01DCF708_0x1dcf708; // 0x1dcf7c0
        g_ps2RecompiledFunctionTable[236] = sub_01DCF708_0x1dcf708; // 0x1dcf7c8
        g_ps2RecompiledFunctionTable[238] = sub_01DCF708_0x1dcf708; // 0x1dcf7d0
        g_ps2RecompiledFunctionTable[256] = sub_01DCF818_0x1dcf818; // 0x1dcf818
        g_ps2RecompiledFunctionTable[260] = sub_01DCF828_0x1dcf828; // 0x1dcf828
        g_ps2RecompiledFunctionTable[264] = sub_01DCF838_0x1dcf838; // 0x1dcf838
        g_ps2RecompiledFunctionTable[272] = sub_01DCF838_0x1dcf838; // 0x1dcf858
        g_ps2RecompiledFunctionTable[297] = sub_01DCF8BC_0x1dcf8bc; // 0x1dcf8bc
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
