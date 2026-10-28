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

// Function: sub_01D93100
// Address: 0x1d93100 - 0x1d93108
void sub_01D93100_0x1d93100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93100_0x1d93100");
#endif

    ctx->pc = 0x1d93100u;

    // 0x1d93100: 0x80b274e  j           func_2C9D38
    ctx->pc = 0x1D93100u;
    ctx->pc = 0x2C9D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D38u, 0x1D93100u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D93108u;
}
