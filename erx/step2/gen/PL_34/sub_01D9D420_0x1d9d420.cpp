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

// Function: sub_01D9D420
// Address: 0x1d9d420 - 0x1d9d430
void sub_01D9D420_0x1d9d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D420_0x1d9d420");
#endif

    ctx->pc = 0x1d9d420u;

    // 0x1d9d420: 0x0  nop
    ctx->pc = 0x1d9d420u;
    // NOP
    // 0x1d9d424: 0x0  nop
    ctx->pc = 0x1d9d424u;
    // NOP
    // 0x1d9d428: 0x0  nop
    ctx->pc = 0x1d9d428u;
    // NOP
    // 0x1d9d42c: 0x0  nop
    ctx->pc = 0x1d9d42cu;
    // NOP
    ctx->pc = 0x1d9d430u;
}
