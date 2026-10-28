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

// Function: sub_01DE1970
// Address: 0x1de1970 - 0x1de1978
void sub_01DE1970_0x1de1970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1970_0x1de1970");
#endif

    ctx->pc = 0x1de1970u;

    // 0x1de1970: 0x808a13e  j           func_2284F8
    ctx->pc = 0x1DE1970u;
    ctx->pc = 0x2284F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2284F8u, 0x1DE1970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DE1978u;
}
