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

// Function: sub_01DB1080
// Address: 0x1db1080 - 0x1db1088
void sub_01DB1080_0x1db1080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1080_0x1db1080");
#endif

    ctx->pc = 0x1db1080u;

    // 0x1db1080: 0x80b0ee8  j           func_2C3BA0
    ctx->pc = 0x1DB1080u;
    ctx->pc = 0x2C3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BA0u, 0x1DB1080u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1088u;
}
