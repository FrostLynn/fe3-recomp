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

// Function: sub_01C0F848
// Address: 0x1c0f848 - 0x1c0f850
void sub_01C0F848_0x1c0f848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C0F848_0x1c0f848");
#endif

    ctx->pc = 0x1c0f848u;

    // 0x1c0f848: 0x80b0dd6  j           func_2C3758
    ctx->pc = 0x1C0F848u;
    ctx->pc = 0x2C3758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3758u, 0x1C0F848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C0F850u;
}
