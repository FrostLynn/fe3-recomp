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

// Function: sub_01CC2E40
// Address: 0x1cc2e40 - 0x1cc2e48
void sub_01CC2E40_0x1cc2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2E40_0x1cc2e40");
#endif

    ctx->pc = 0x1cc2e40u;

    // 0x1cc2e40: 0x80b29b2  j           func_2CA6C8
    ctx->pc = 0x1CC2E40u;
    ctx->pc = 0x2CA6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA6C8u, 0x1CC2E40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2E48u;
}
