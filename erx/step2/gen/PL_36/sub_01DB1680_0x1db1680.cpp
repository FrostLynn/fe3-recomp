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

// Function: sub_01DB1680
// Address: 0x1db1680 - 0x1db1688
void sub_01DB1680_0x1db1680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1680_0x1db1680");
#endif

    ctx->pc = 0x1db1680u;

    // 0x1db1680: 0x80b2242  j           func_2C8908
    ctx->pc = 0x1DB1680u;
    ctx->pc = 0x2C8908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8908u, 0x1DB1680u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1688u;
}
