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

// Function: sub_01C5F840
// Address: 0x1c5f840 - 0x1c5f848
void sub_01C5F840_0x1c5f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F840_0x1c5f840");
#endif

    ctx->pc = 0x1c5f840u;

    // 0x1c5f840: 0x80b1d6a  j           func_2C75A8
    ctx->pc = 0x1C5F840u;
    ctx->pc = 0x2C75A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C75A8u, 0x1C5F840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5F848u;
}
