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

// Function: sub_01CDA728
// Address: 0x1cda728 - 0x1cda730
void sub_01CDA728_0x1cda728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA728_0x1cda728");
#endif

    ctx->pc = 0x1cda728u;

    // 0x1cda728: 0x80b1164  j           func_2C4590
    ctx->pc = 0x1CDA728u;
    ctx->pc = 0x2C4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4590u, 0x1CDA728u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA730u;
}
