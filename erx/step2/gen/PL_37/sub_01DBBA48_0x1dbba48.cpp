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

// Function: sub_01DBBA48
// Address: 0x1dbba48 - 0x1dbba50
void sub_01DBBA48_0x1dbba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBBA48_0x1dbba48");
#endif

    ctx->pc = 0x1dbba48u;

    // 0x1dbba48: 0x80b18d2  j           func_2C6348
    ctx->pc = 0x1DBBA48u;
    ctx->pc = 0x2C6348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6348u, 0x1DBBA48u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBBA50u;
}
