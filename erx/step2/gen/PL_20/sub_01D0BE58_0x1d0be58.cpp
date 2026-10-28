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

// Function: sub_01D0BE58
// Address: 0x1d0be58 - 0x1d0be60
void sub_01D0BE58_0x1d0be58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0BE58_0x1d0be58");
#endif

    ctx->pc = 0x1d0be58u;

    // 0x1d0be58: 0x80b0e9c  j           func_2C3A70
    ctx->pc = 0x1D0BE58u;
    ctx->pc = 0x2C3A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3A70u, 0x1D0BE58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0BE60u;
}
