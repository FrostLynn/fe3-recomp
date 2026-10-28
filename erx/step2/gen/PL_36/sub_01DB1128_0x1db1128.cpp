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

// Function: sub_01DB1128
// Address: 0x1db1128 - 0x1db1130
void sub_01DB1128_0x1db1128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1128_0x1db1128");
#endif

    ctx->pc = 0x1db1128u;

    // 0x1db1128: 0x80b18a4  j           func_2C6290
    ctx->pc = 0x1DB1128u;
    ctx->pc = 0x2C6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6290u, 0x1DB1128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1130u;
}
