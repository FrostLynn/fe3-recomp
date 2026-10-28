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

// Function: sub_01D67088
// Address: 0x1d67088 - 0x1d67090
void sub_01D67088_0x1d67088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67088_0x1d67088");
#endif

    ctx->pc = 0x1d67088u;

    // 0x1d67088: 0x80b0fa0  j           func_2C3E80
    ctx->pc = 0x1D67088u;
    ctx->pc = 0x2C3E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E80u, 0x1D67088u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D67090u;
}
