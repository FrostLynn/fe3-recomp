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

// Function: sub_01D70788
// Address: 0x1d70788 - 0x1d70790
void sub_01D70788_0x1d70788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70788_0x1d70788");
#endif

    ctx->pc = 0x1d70788u;

    // 0x1d70788: 0x80b22c8  j           func_2C8B20
    ctx->pc = 0x1D70788u;
    ctx->pc = 0x2C8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8B20u, 0x1D70788u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70790u;
}
