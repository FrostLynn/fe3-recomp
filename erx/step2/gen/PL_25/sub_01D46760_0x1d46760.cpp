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

// Function: sub_01D46760
// Address: 0x1d46760 - 0x1d46768
void sub_01D46760_0x1d46760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46760_0x1d46760");
#endif

    ctx->pc = 0x1d46760u;

    // 0x1d46760: 0x80b2aee  j           func_2CABB8
    ctx->pc = 0x1D46760u;
    ctx->pc = 0x2CABB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABB8u, 0x1D46760u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D46768u;
}
