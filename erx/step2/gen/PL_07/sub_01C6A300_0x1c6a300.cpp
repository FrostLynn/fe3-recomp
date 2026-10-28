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

// Function: sub_01C6A300
// Address: 0x1c6a300 - 0x1c6a308
void sub_01C6A300_0x1c6a300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A300_0x1c6a300");
#endif

    ctx->pc = 0x1c6a300u;

    // 0x1c6a300: 0x80b112a  j           func_2C44A8
    ctx->pc = 0x1C6A300u;
    ctx->pc = 0x2C44A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C44A8u, 0x1C6A300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A308u;
}
