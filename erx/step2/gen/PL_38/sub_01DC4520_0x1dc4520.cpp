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

// Function: sub_01DC4520
// Address: 0x1dc4520 - 0x1dc4528
void sub_01DC4520_0x1dc4520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4520_0x1dc4520");
#endif

    ctx->pc = 0x1dc4520u;

    // 0x1dc4520: 0x8099f0c  j           func_267C30
    ctx->pc = 0x1DC4520u;
    ctx->pc = 0x267C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267C30u, 0x1DC4520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4528u;
}
