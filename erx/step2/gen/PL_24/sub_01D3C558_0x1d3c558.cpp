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

// Function: sub_01D3C558
// Address: 0x1d3c558 - 0x1d3c560
void sub_01D3C558_0x1d3c558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C558_0x1d3c558");
#endif

    ctx->pc = 0x1d3c558u;

    // 0x1d3c558: 0x80b289a  j           func_2CA268
    ctx->pc = 0x1D3C558u;
    ctx->pc = 0x2CA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA268u, 0x1D3C558u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C560u;
}
