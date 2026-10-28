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

// Function: sub_01D77CC8
// Address: 0x1d77cc8 - 0x1d77cd0
void sub_01D77CC8_0x1d77cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77CC8_0x1d77cc8");
#endif

    ctx->pc = 0x1d77cc8u;

    // 0x1d77cc8: 0x80b18d2  j           func_2C6348
    ctx->pc = 0x1D77CC8u;
    ctx->pc = 0x2C6348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6348u, 0x1D77CC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77CD0u;
}
