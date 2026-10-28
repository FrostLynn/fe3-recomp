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

// Function: sub_01C2FEC8
// Address: 0x1c2fec8 - 0x1c2fed0
void sub_01C2FEC8_0x1c2fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2FEC8_0x1c2fec8");
#endif

    ctx->pc = 0x1c2fec8u;

    // 0x1c2fec8: 0x80b22b0  j           func_2C8AC0
    ctx->pc = 0x1C2FEC8u;
    ctx->pc = 0x2C8AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AC0u, 0x1C2FEC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2FED0u;
}
