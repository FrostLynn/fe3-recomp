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

// Function: sub_01C42770
// Address: 0x1c42770 - 0x1c42778
void sub_01C42770_0x1c42770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42770_0x1c42770");
#endif

    ctx->pc = 0x1c42770u;

    // 0x1c42770: 0x80b1584  j           func_2C5610
    ctx->pc = 0x1C42770u;
    ctx->pc = 0x2C5610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5610u, 0x1C42770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42778u;
}
