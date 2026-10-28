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

// Function: sub_01D66988
// Address: 0x1d66988 - 0x1d66990
void sub_01D66988_0x1d66988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D66988_0x1d66988");
#endif

    ctx->pc = 0x1d66988u;

    // 0x1d66988: 0x80b1abc  j           func_2C6AF0
    ctx->pc = 0x1D66988u;
    ctx->pc = 0x2C6AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6AF0u, 0x1D66988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D66990u;
}
