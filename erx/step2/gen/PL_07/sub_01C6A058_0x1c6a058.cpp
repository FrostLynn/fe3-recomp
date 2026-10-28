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

// Function: sub_01C6A058
// Address: 0x1c6a058 - 0x1c6a060
void sub_01C6A058_0x1c6a058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6A058_0x1c6a058");
#endif

    ctx->pc = 0x1c6a058u;

    // 0x1c6a058: 0x80b1b18  j           func_2C6C60
    ctx->pc = 0x1C6A058u;
    ctx->pc = 0x2C6C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6C60u, 0x1C6A058u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C6A060u;
}
