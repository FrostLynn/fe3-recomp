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

// Function: sub_01D5CF60
// Address: 0x1d5cf60 - 0x1d5cf68
void sub_01D5CF60_0x1d5cf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CF60_0x1d5cf60");
#endif

    ctx->pc = 0x1d5cf60u;

    // 0x1d5cf60: 0x80b1c14  j           func_2C7050
    ctx->pc = 0x1D5CF60u;
    ctx->pc = 0x2C7050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7050u, 0x1D5CF60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CF68u;
}
