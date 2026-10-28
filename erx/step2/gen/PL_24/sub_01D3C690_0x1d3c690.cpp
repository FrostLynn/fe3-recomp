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

// Function: sub_01D3C690
// Address: 0x1d3c690 - 0x1d3c698
void sub_01D3C690_0x1d3c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C690_0x1d3c690");
#endif

    ctx->pc = 0x1d3c690u;

    // 0x1d3c690: 0x80b29dc  j           func_2CA770
    ctx->pc = 0x1D3C690u;
    ctx->pc = 0x2CA770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA770u, 0x1D3C690u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C698u;
}
