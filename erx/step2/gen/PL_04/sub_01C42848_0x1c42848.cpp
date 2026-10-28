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

// Function: sub_01C42848
// Address: 0x1c42848 - 0x1c42850
void sub_01C42848_0x1c42848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42848_0x1c42848");
#endif

    ctx->pc = 0x1c42848u;

    // 0x1c42848: 0x80b0d70  j           func_2C35C0
    ctx->pc = 0x1C42848u;
    ctx->pc = 0x2C35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C35C0u, 0x1C42848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42850u;
}
