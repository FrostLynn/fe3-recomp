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

// Function: sub_01CDA720
// Address: 0x1cda720 - 0x1cda728
void sub_01CDA720_0x1cda720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDA720_0x1cda720");
#endif

    ctx->pc = 0x1cda720u;

    // 0x1cda720: 0x80b1162  j           func_2C4588
    ctx->pc = 0x1CDA720u;
    ctx->pc = 0x2C4588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4588u, 0x1CDA720u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CDA728u;
}
