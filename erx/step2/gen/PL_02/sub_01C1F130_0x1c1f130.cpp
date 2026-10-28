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

// Function: sub_01C1F130
// Address: 0x1c1f130 - 0x1c1f140
void sub_01C1F130_0x1c1f130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C1F130_0x1c1f130");
#endif

    ctx->pc = 0x1c1f130u;

    // 0x1c1f130: 0x80d97d8  j           func_365F60
    ctx->pc = 0x1C1F130u;
    ctx->pc = 0x365F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F60u, 0x1C1F130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C1F138u;
    // 0x1c1f138: 0x0  nop
    ctx->pc = 0x1c1f138u;
    // NOP
    // 0x1c1f13c: 0x0  nop
    ctx->pc = 0x1c1f13cu;
    // NOP
    ctx->pc = 0x1c1f140u;
}
