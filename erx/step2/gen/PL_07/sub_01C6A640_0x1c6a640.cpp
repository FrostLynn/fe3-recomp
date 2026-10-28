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

// Function: sub_01C6A640
// Address: 0x1c6a640 - 0x1c6a648
void sub_01C6A640_0x1c6a640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A640_0x1c6a640");
#endif

    ctx->pc = 0x1c6a640u;

    // 0x1c6a640: 0x80b24d2  j           func_2C9348
    ctx->pc = 0x1C6A640u;
    ctx->pc = 0x2C9348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9348u, 0x1C6A640u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A648u;
}
