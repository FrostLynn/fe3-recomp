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

// Function: sub_01CDA6B0
// Address: 0x1cda6b0 - 0x1cda6b8
void sub_01CDA6B0_0x1cda6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA6B0_0x1cda6b0");
#endif

    ctx->pc = 0x1cda6b0u;

    // 0x1cda6b0: 0x80b1026  j           func_2C4098
    ctx->pc = 0x1CDA6B0u;
    ctx->pc = 0x2C4098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4098u, 0x1CDA6B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA6B8u;
}
