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

// Function: sub_01D9CBE8
// Address: 0x1d9cbe8 - 0x1d9cbf0
void sub_01D9CBE8_0x1d9cbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CBE8_0x1d9cbe8");
#endif

    ctx->pc = 0x1d9cbe8u;

    // 0x1d9cbe8: 0x80b17ba  j           func_2C5EE8
    ctx->pc = 0x1D9CBE8u;
    ctx->pc = 0x2C5EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5EE8u, 0x1D9CBE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CBF0u;
}
