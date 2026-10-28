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

// Function: sub_01D70278
// Address: 0x1d70278 - 0x1d70280
void sub_01D70278_0x1d70278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70278_0x1d70278");
#endif

    ctx->pc = 0x1d70278u;

    // 0x1d70278: 0x80b19dc  j           func_2C6770
    ctx->pc = 0x1D70278u;
    ctx->pc = 0x2C6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6770u, 0x1D70278u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70280u;
}
