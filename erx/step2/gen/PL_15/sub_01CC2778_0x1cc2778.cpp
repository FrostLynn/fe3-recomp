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

// Function: sub_01CC2778
// Address: 0x1cc2778 - 0x1cc2780
void sub_01CC2778_0x1cc2778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2778_0x1cc2778");
#endif

    ctx->pc = 0x1cc2778u;

    // 0x1cc2778: 0x80b1622  j           func_2C5888
    ctx->pc = 0x1CC2778u;
    ctx->pc = 0x2C5888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5888u, 0x1CC2778u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2780u;
}
