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

// Function: sub_01CA2AC0
// Address: 0x1ca2ac0 - 0x1ca2ac8
void sub_01CA2AC0_0x1ca2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2AC0_0x1ca2ac0");
#endif

    ctx->pc = 0x1ca2ac0u;

    // 0x1ca2ac0: 0x80b16ca  j           func_2C5B28
    ctx->pc = 0x1CA2AC0u;
    ctx->pc = 0x2C5B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5B28u, 0x1CA2AC0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2AC8u;
}
