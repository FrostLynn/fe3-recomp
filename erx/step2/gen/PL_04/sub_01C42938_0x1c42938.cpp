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

// Function: sub_01C42938
// Address: 0x1c42938 - 0x1c42940
void sub_01C42938_0x1c42938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42938_0x1c42938");
#endif

    ctx->pc = 0x1c42938u;

    // 0x1c42938: 0x80b1178  j           func_2C45E0
    ctx->pc = 0x1C42938u;
    ctx->pc = 0x2C45E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C45E0u, 0x1C42938u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42940u;
}
