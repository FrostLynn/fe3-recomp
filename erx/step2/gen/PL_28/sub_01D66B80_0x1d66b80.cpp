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

// Function: sub_01D66B80
// Address: 0x1d66b80 - 0x1d66b88
void sub_01D66B80_0x1d66b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66B80_0x1d66b80");
#endif

    ctx->pc = 0x1d66b80u;

    // 0x1d66b80: 0x80b104c  j           func_2C4130
    ctx->pc = 0x1D66B80u;
    ctx->pc = 0x2C4130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4130u, 0x1D66B80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66B88u;
}
