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

// Function: sub_01D7DB28
// Address: 0x1d7db28 - 0x1d7db30
void sub_01D7DB28_0x1d7db28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7DB28_0x1d7db28");
#endif

    ctx->pc = 0x1d7db28u;

    // 0x1d7db28: 0x80b0d5a  j           func_2C3568
    ctx->pc = 0x1D7DB28u;
    ctx->pc = 0x2C3568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3568u, 0x1D7DB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D7DB30u;
}
