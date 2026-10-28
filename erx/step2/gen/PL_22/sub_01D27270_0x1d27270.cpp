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

// Function: sub_01D27270
// Address: 0x1d27270 - 0x1d27278
void sub_01D27270_0x1d27270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27270_0x1d27270");
#endif

    ctx->pc = 0x1d27270u;

    // 0x1d27270: 0x80b1dc6  j           func_2C7718
    ctx->pc = 0x1D27270u;
    ctx->pc = 0x2C7718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7718u, 0x1D27270u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D27278u;
}
