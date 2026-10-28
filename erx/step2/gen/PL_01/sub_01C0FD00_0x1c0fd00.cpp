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

// Function: sub_01C0FD00
// Address: 0x1c0fd00 - 0x1c0fd08
void sub_01C0FD00_0x1c0fd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0FD00_0x1c0fd00");
#endif

    ctx->pc = 0x1c0fd00u;

    // 0x1c0fd00: 0x80b1468  j           func_2C51A0
    ctx->pc = 0x1C0FD00u;
    ctx->pc = 0x2C51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C51A0u, 0x1C0FD00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0FD08u;
}
