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

// Function: sub_01D5CE58
// Address: 0x1d5ce58 - 0x1d5ce60
void sub_01D5CE58_0x1d5ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5CE58_0x1d5ce58");
#endif

    ctx->pc = 0x1d5ce58u;

    // 0x1d5ce58: 0x80b0ec8  j           func_2C3B20
    ctx->pc = 0x1D5CE58u;
    ctx->pc = 0x2C3B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3B20u, 0x1D5CE58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5CE60u;
}
