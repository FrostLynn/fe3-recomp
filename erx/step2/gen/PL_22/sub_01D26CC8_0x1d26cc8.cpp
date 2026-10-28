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

// Function: sub_01D26CC8
// Address: 0x1d26cc8 - 0x1d26cd8
void sub_01D26CC8_0x1d26cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D26CC8_0x1d26cc8");
#endif

    ctx->pc = 0x1d26cc8u;

    // 0x1d26cc8: 0x808136a  j           func_204DA8
    ctx->pc = 0x1D26CC8u;
    ctx->pc = 0x204DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204DA8u, 0x1D26CC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26CD0u;
    // 0x1d26cd0: 0x810a958  j           func_42A560
    ctx->pc = 0x1D26CD0u;
    ctx->pc = 0x42A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A560u, 0x1D26CD0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D26CD8u;
}
