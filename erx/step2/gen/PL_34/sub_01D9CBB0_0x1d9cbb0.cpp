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

// Function: sub_01D9CBB0
// Address: 0x1d9cbb0 - 0x1d9cbb8
void sub_01D9CBB0_0x1d9cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CBB0_0x1d9cbb0");
#endif

    ctx->pc = 0x1d9cbb0u;

    // 0x1d9cbb0: 0x80b19d0  j           func_2C6740
    ctx->pc = 0x1D9CBB0u;
    ctx->pc = 0x2C6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6740u, 0x1D9CBB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CBB8u;
}
