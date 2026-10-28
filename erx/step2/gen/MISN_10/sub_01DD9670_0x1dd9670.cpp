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

// Function: sub_01DD9670
// Address: 0x1dd9670 - 0x1dd9680
void sub_01DD9670_0x1dd9670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD9670_0x1dd9670");
#endif

    ctx->pc = 0x1dd9670u;

    // 0x1dd9670: 0x80868bc  j           func_21A2F0
    ctx->pc = 0x1DD9670u;
    ctx->pc = 0x21A2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A2F0u, 0x1DD9670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DD9678u;
    // 0x1dd9678: 0x0  nop
    ctx->pc = 0x1dd9678u;
    // NOP
    // 0x1dd967c: 0x0  nop
    ctx->pc = 0x1dd967cu;
    // NOP
    ctx->pc = 0x1dd9680u;
}
