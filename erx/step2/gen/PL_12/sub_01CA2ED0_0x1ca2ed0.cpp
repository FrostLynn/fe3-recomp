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

// Function: sub_01CA2ED0
// Address: 0x1ca2ed0 - 0x1ca2ed8
void sub_01CA2ED0_0x1ca2ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2ED0_0x1ca2ed0");
#endif

    ctx->pc = 0x1ca2ed0u;

    // 0x1ca2ed0: 0x80b2326  j           func_2C8C98
    ctx->pc = 0x1CA2ED0u;
    ctx->pc = 0x2C8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8C98u, 0x1CA2ED0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2ED8u;
}
