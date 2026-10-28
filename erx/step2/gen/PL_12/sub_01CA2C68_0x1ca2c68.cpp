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

// Function: sub_01CA2C68
// Address: 0x1ca2c68 - 0x1ca2c70
void sub_01CA2C68_0x1ca2c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2C68_0x1ca2c68");
#endif

    ctx->pc = 0x1ca2c68u;

    // 0x1ca2c68: 0x80b11fc  j           func_2C47F0
    ctx->pc = 0x1CA2C68u;
    ctx->pc = 0x2C47F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C47F0u, 0x1CA2C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2C70u;
}
