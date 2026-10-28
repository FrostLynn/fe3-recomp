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

// Function: sub_01C98D28
// Address: 0x1c98d28 - 0x1c98d30
void sub_01C98D28_0x1c98d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C98D28_0x1c98d28");
#endif

    ctx->pc = 0x1c98d28u;

    // 0x1c98d28: 0x80b18a4  j           func_2C6290
    ctx->pc = 0x1C98D28u;
    ctx->pc = 0x2C6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6290u, 0x1C98D28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C98D30u;
}
