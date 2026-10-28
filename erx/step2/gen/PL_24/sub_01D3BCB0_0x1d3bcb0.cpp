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

// Function: sub_01D3BCB0
// Address: 0x1d3bcb0 - 0x1d3bcc0
void sub_01D3BCB0_0x1d3bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3BCB0_0x1d3bcb0");
#endif

    ctx->pc = 0x1d3bcb0u;

    // 0x1d3bcb0: 0x80b30d0  j           func_2CC340
    ctx->pc = 0x1D3BCB0u;
    ctx->pc = 0x2CC340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC340u, 0x1D3BCB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3BCB8u;
    // 0x1d3bcb8: 0x810a958  j           func_42A560
    ctx->pc = 0x1D3BCB8u;
    ctx->pc = 0x42A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42A560u, 0x1D3BCB8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3BCC0u;
}
