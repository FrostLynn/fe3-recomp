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

// Function: sub_01C1FAE8
// Address: 0x1c1fae8 - 0x1c1faf0
void sub_01C1FAE8_0x1c1fae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1FAE8_0x1c1fae8");
#endif

    ctx->pc = 0x1c1fae8u;

    // 0x1c1fae8: 0x80b0f9e  j           func_2C3E78
    ctx->pc = 0x1C1FAE8u;
    ctx->pc = 0x2C3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E78u, 0x1C1FAE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1FAF0u;
}
