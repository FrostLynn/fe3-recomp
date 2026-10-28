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

// Function: sub_01DB1948
// Address: 0x1db1948 - 0x1db1950
void sub_01DB1948_0x1db1948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1948_0x1db1948");
#endif

    ctx->pc = 0x1db1948u;

    // 0x1db1948: 0x80b2ac8  j           func_2CAB20
    ctx->pc = 0x1DB1948u;
    ctx->pc = 0x2CAB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAB20u, 0x1DB1948u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1950u;
}
