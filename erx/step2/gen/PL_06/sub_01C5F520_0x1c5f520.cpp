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

// Function: sub_01C5F520
// Address: 0x1c5f520 - 0x1c5f530
void sub_01C5F520_0x1c5f520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C5F520_0x1c5f520");
#endif

    ctx->pc = 0x1c5f520u;

    // 0x1c5f520: 0x80d9758  j           func_365D60
    ctx->pc = 0x1C5F520u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1C5F520u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C5F528u;
    // 0x1c5f528: 0x0  nop
    ctx->pc = 0x1c5f528u;
    // NOP
    // 0x1c5f52c: 0x0  nop
    ctx->pc = 0x1c5f52cu;
    // NOP
    ctx->pc = 0x1c5f530u;
}
