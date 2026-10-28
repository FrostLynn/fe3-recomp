#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "ps2_stubs.h"
#include <ps2_recompiled_stubs.h>
#include "ps2_syscalls.h"

extern const uint32_t g_ps2RecompiledFunctionTableBase = 0x1dd8318u;
extern const uint32_t g_ps2RecompiledFunctionTableEnd = 0x1dd8818u;
extern const uint32_t g_ps2RecompiledFunctionTableSlotCount = 320u;
PS2Runtime::RecompiledFunction g_ps2RecompiledFunctionTable[320u] = {};

namespace {
struct GeneratedFunctionTableInitializer {
    GeneratedFunctionTableInitializer() {
        g_ps2RecompiledFunctionTable[0] = sub_01DD8318_0x1dd8318; // 0x1dd8318
        g_ps2RecompiledFunctionTable[2] = sub_01DD8320_0x1dd8320; // 0x1dd8320
        g_ps2RecompiledFunctionTable[4] = sub_01DD8328_0x1dd8328; // 0x1dd8328
        g_ps2RecompiledFunctionTable[6] = sub_01DD8330_0x1dd8330; // 0x1dd8330
        g_ps2RecompiledFunctionTable[8] = sub_01DD8338_0x1dd8338; // 0x1dd8338
        g_ps2RecompiledFunctionTable[10] = sub_01DD8340_0x1dd8340; // 0x1dd8340
        g_ps2RecompiledFunctionTable[12] = sub_01DD8348_0x1dd8348; // 0x1dd8348
        g_ps2RecompiledFunctionTable[14] = sub_01DD8350_0x1dd8350; // 0x1dd8350
        g_ps2RecompiledFunctionTable[18] = sub_01DD8360_0x1dd8360; // 0x1dd8360
        g_ps2RecompiledFunctionTable[20] = sub_01DD8368_0x1dd8368; // 0x1dd8368
        g_ps2RecompiledFunctionTable[22] = sub_01DD8370_0x1dd8370; // 0x1dd8370
        g_ps2RecompiledFunctionTable[24] = sub_01DD8378_0x1dd8378; // 0x1dd8378
        g_ps2RecompiledFunctionTable[26] = sub_01DD8380_0x1dd8380; // 0x1dd8380
        g_ps2RecompiledFunctionTable[30] = sub_01DD8390_0x1dd8390; // 0x1dd8390
        g_ps2RecompiledFunctionTable[34] = sub_01DD83A0_0x1dd83a0; // 0x1dd83a0
        g_ps2RecompiledFunctionTable[49] = sub_01DD83A0_0x1dd83a0; // 0x1dd83dc
        g_ps2RecompiledFunctionTable[54] = sub_01DD83A0_0x1dd83a0; // 0x1dd83f0
        g_ps2RecompiledFunctionTable[59] = sub_01DD83A0_0x1dd83a0; // 0x1dd8404
        g_ps2RecompiledFunctionTable[64] = sub_01DD83A0_0x1dd83a0; // 0x1dd8418
        g_ps2RecompiledFunctionTable[73] = sub_01DD83A0_0x1dd83a0; // 0x1dd843c
        g_ps2RecompiledFunctionTable[80] = sub_01DD83A0_0x1dd83a0; // 0x1dd8458
        g_ps2RecompiledFunctionTable[96] = sub_01DD8498_0x1dd8498; // 0x1dd8498
        g_ps2RecompiledFunctionTable[102] = sub_01DD8498_0x1dd8498; // 0x1dd84b0
        g_ps2RecompiledFunctionTable[108] = sub_01DD8498_0x1dd8498; // 0x1dd84c8
        g_ps2RecompiledFunctionTable[127] = sub_01DD8498_0x1dd8498; // 0x1dd8514
        g_ps2RecompiledFunctionTable[130] = sub_01DD8520_0x1dd8520; // 0x1dd8520
        g_ps2RecompiledFunctionTable[139] = sub_01DD8520_0x1dd8520; // 0x1dd8544
        g_ps2RecompiledFunctionTable[142] = sub_01DD8550_0x1dd8550; // 0x1dd8550
        g_ps2RecompiledFunctionTable[148] = sub_01DD8550_0x1dd8550; // 0x1dd8568
        g_ps2RecompiledFunctionTable[156] = sub_01DD8588_0x1dd8588; // 0x1dd8588
        g_ps2RecompiledFunctionTable[167] = sub_01DD8588_0x1dd8588; // 0x1dd85b4
        g_ps2RecompiledFunctionTable[172] = sub_01DD8588_0x1dd8588; // 0x1dd85c8
        g_ps2RecompiledFunctionTable[174] = sub_01DD8588_0x1dd8588; // 0x1dd85d0
        g_ps2RecompiledFunctionTable[198] = sub_01DD8588_0x1dd8588; // 0x1dd8630
        g_ps2RecompiledFunctionTable[204] = sub_01DD8588_0x1dd8588; // 0x1dd8648
        g_ps2RecompiledFunctionTable[212] = sub_01DD8588_0x1dd8588; // 0x1dd8668
        g_ps2RecompiledFunctionTable[216] = sub_01DD8588_0x1dd8588; // 0x1dd8678
        g_ps2RecompiledFunctionTable[228] = sub_01DD86A8_0x1dd86a8; // 0x1dd86a8
        g_ps2RecompiledFunctionTable[236] = sub_01DD86A8_0x1dd86a8; // 0x1dd86c8
        g_ps2RecompiledFunctionTable[240] = sub_01DD86A8_0x1dd86a8; // 0x1dd86d8
        g_ps2RecompiledFunctionTable[248] = sub_01DD86F8_0x1dd86f8; // 0x1dd86f8
        g_ps2RecompiledFunctionTable[256] = sub_01DD86F8_0x1dd86f8; // 0x1dd8718
        g_ps2RecompiledFunctionTable[260] = sub_01DD86F8_0x1dd86f8; // 0x1dd8728
        g_ps2RecompiledFunctionTable[271] = sub_01DD86F8_0x1dd86f8; // 0x1dd8754
        g_ps2RecompiledFunctionTable[280] = sub_01DD8778_0x1dd8778; // 0x1dd8778
        g_ps2RecompiledFunctionTable[284] = sub_01DD8788_0x1dd8788; // 0x1dd8788
        g_ps2RecompiledFunctionTable[288] = sub_01DD8798_0x1dd8798; // 0x1dd8798
        g_ps2RecompiledFunctionTable[296] = sub_01DD8798_0x1dd8798; // 0x1dd87b8
        g_ps2RecompiledFunctionTable[319] = sub_01DD8814_0x1dd8814; // 0x1dd8814
    }
};
static const GeneratedFunctionTableInitializer g_generatedFunctionTableInitializer;
}
