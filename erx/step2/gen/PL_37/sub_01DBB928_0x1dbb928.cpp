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

// Function: sub_01DBB928
// Address: 0x1dbb928 - 0x1dbb938
void sub_01DBB928_0x1dbb928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBB928_0x1dbb928");
#endif

    ctx->pc = 0x1dbb928u;

    // 0x1dbb928: 0x80d97d8  j           func_365F60
    ctx->pc = 0x1DBB928u;
    ctx->pc = 0x365F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365F60u, 0x1DBB928u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DBB930u;
    // 0x1dbb930: 0x0  nop
    ctx->pc = 0x1dbb930u;
    // NOP
    // 0x1dbb934: 0x0  nop
    ctx->pc = 0x1dbb934u;
    // NOP
    ctx->pc = 0x1dbb938u;
}
