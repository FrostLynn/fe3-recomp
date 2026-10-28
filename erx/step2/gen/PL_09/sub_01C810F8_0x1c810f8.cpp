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

// Function: sub_01C810F8
// Address: 0x1c810f8 - 0x1c81100
void sub_01C810F8_0x1c810f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C810F8_0x1c810f8");
#endif

    ctx->pc = 0x1c810f8u;

    // 0x1c810f8: 0x80b0c8e  j           func_2C3238
    ctx->pc = 0x1C810F8u;
    ctx->pc = 0x2C3238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3238u, 0x1C810F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81100u;
}
