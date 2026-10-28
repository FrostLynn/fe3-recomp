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

// Function: sub_01C0FA38
// Address: 0x1c0fa38 - 0x1c0fa40
void sub_01C0FA38_0x1c0fa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0FA38_0x1c0fa38");
#endif

    ctx->pc = 0x1c0fa38u;

    // 0x1c0fa38: 0x80b1cfa  j           func_2C73E8
    ctx->pc = 0x1C0FA38u;
    ctx->pc = 0x2C73E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C73E8u, 0x1C0FA38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0FA40u;
}
