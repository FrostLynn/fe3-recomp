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

// Function: sub_01C2F988
// Address: 0x1c2f988 - 0x1c2f990
void sub_01C2F988_0x1c2f988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C2F988_0x1c2f988");
#endif

    ctx->pc = 0x1c2f988u;

    // 0x1c2f988: 0x80b1c44  j           func_2C7110
    ctx->pc = 0x1C2F988u;
    ctx->pc = 0x2C7110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7110u, 0x1C2F988u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C2F990u;
}
