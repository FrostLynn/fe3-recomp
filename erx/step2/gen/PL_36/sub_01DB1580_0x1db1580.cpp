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

// Function: sub_01DB1580
// Address: 0x1db1580 - 0x1db1588
void sub_01DB1580_0x1db1580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1580_0x1db1580");
#endif

    ctx->pc = 0x1db1580u;

    // 0x1db1580: 0x80b1e8a  j           func_2C7A28
    ctx->pc = 0x1DB1580u;
    ctx->pc = 0x2C7A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7A28u, 0x1DB1580u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1588u;
}
