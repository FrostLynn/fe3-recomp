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

// Function: sub_01CFDCC0
// Address: 0x1cfdcc0 - 0x1cfdcc8
void sub_01CFDCC0_0x1cfdcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDCC0_0x1cfdcc0");
#endif

    ctx->pc = 0x1cfdcc0u;

    // 0x1cfdcc0: 0x8099f0c  j           func_267C30
    ctx->pc = 0x1CFDCC0u;
    ctx->pc = 0x267C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267C30u, 0x1CFDCC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDCC8u;
}
