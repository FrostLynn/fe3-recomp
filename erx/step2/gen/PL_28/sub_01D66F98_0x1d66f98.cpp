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

// Function: sub_01D66F98
// Address: 0x1d66f98 - 0x1d66fa0
void sub_01D66F98_0x1d66f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66F98_0x1d66f98");
#endif

    ctx->pc = 0x1d66f98u;

    // 0x1d66f98: 0x80b272e  j           func_2C9CB8
    ctx->pc = 0x1D66F98u;
    ctx->pc = 0x2C9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9CB8u, 0x1D66F98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66FA0u;
}
