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

// Function: sub_01CC2428
// Address: 0x1cc2428 - 0x1cc2438
void sub_01CC2428_0x1cc2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2428_0x1cc2428");
#endif

    ctx->pc = 0x1cc2428u;

    // 0x1cc2428: 0x80d9758  j           func_365D60
    ctx->pc = 0x1CC2428u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1CC2428u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2430u;
    // 0x1cc2430: 0x0  nop
    ctx->pc = 0x1cc2430u;
    // NOP
    // 0x1cc2434: 0x0  nop
    ctx->pc = 0x1cc2434u;
    // NOP
    ctx->pc = 0x1cc2438u;
}
