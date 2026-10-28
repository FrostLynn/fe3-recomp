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

// Function: sub_01C0F930
// Address: 0x1c0f930 - 0x1c0f938
void sub_01C0F930_0x1c0f930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0F930_0x1c0f930");
#endif

    ctx->pc = 0x1c0f930u;

    // 0x1c0f930: 0x80b18a4  j           func_2C6290
    ctx->pc = 0x1C0F930u;
    ctx->pc = 0x2C6290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6290u, 0x1C0F930u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0F938u;
}
