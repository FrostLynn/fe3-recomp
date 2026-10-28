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

// Function: sub_01DC4560
// Address: 0x1dc4560 - 0x1dc4570
void sub_01DC4560_0x1dc4560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4560_0x1dc4560");
#endif

    ctx->pc = 0x1dc4560u;

    // 0x1dc4560: 0x80a9dd6  j           func_2A7758
    ctx->pc = 0x1DC4560u;
    ctx->pc = 0x2A7758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7758u, 0x1DC4560u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DC4568u;
    // 0x1dc4568: 0x0  nop
    ctx->pc = 0x1dc4568u;
    // NOP
    // 0x1dc456c: 0x0  nop
    ctx->pc = 0x1dc456cu;
    // NOP
    ctx->pc = 0x1dc4570u;
}
