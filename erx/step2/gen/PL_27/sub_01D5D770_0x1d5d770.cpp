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

// Function: sub_01D5D770
// Address: 0x1d5d770 - 0x1d5d778
void sub_01D5D770_0x1d5d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D770_0x1d5d770");
#endif

    ctx->pc = 0x1d5d770u;

    // 0x1d5d770: 0x80b323a  j           func_2CC8E8
    ctx->pc = 0x1D5D770u;
    ctx->pc = 0x2CC8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC8E8u, 0x1D5D770u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D778u;
}
