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

// Function: sub_01CFDBE0
// Address: 0x1cfdbe0 - 0x1cfdbe8
void sub_01CFDBE0_0x1cfdbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDBE0_0x1cfdbe0");
#endif

    ctx->pc = 0x1cfdbe0u;

    // 0x1cfdbe0: 0x80b0fa0  j           func_2C3E80
    ctx->pc = 0x1CFDBE0u;
    ctx->pc = 0x2C3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E80u, 0x1CFDBE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFDBE8u;
}
