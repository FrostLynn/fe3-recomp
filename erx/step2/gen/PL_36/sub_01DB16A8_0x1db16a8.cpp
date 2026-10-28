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

// Function: sub_01DB16A8
// Address: 0x1db16a8 - 0x1db16b0
void sub_01DB16A8_0x1db16a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB16A8_0x1db16a8");
#endif

    ctx->pc = 0x1db16a8u;

    // 0x1db16a8: 0x80b22b6  j           func_2C8AD8
    ctx->pc = 0x1DB16A8u;
    ctx->pc = 0x2C8AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8AD8u, 0x1DB16A8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB16B0u;
}
