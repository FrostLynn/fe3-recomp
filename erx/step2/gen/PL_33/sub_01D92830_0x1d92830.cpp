#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01D92830
// Address: 0x1d92830 - 0x1d92840
void sub_01D92830_0x1d92830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D92830_0x1d92830");
#endif

    ctx->pc = 0x1d92830u;

    // 0x1d92830: 0x0  nop
    ctx->pc = 0x1d92830u;
    // NOP
    // 0x1d92834: 0x0  nop
    ctx->pc = 0x1d92834u;
    // NOP
    // 0x1d92838: 0x0  nop
    ctx->pc = 0x1d92838u;
    // NOP
    // 0x1d9283c: 0x0  nop
    ctx->pc = 0x1d9283cu;
    // NOP
    ctx->pc = 0x1d92840u;
}
