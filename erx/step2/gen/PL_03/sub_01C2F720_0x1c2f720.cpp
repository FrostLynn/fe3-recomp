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

// Function: sub_01C2F720
// Address: 0x1c2f720 - 0x1c2f730
void sub_01C2F720_0x1c2f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F720_0x1c2f720");
#endif

    ctx->pc = 0x1c2f720u;

    // 0x1c2f720: 0x80d9758  j           func_365D60
    ctx->pc = 0x1C2F720u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1C2F720u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F728u;
    // 0x1c2f728: 0x0  nop
    ctx->pc = 0x1c2f728u;
    // NOP
    // 0x1c2f72c: 0x0  nop
    ctx->pc = 0x1c2f72cu;
    // NOP
    ctx->pc = 0x1c2f730u;
}
