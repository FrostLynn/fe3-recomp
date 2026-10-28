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

// Function: sub_01CA2F40
// Address: 0x1ca2f40 - 0x1ca2f48
void sub_01CA2F40_0x1ca2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2F40_0x1ca2f40");
#endif

    ctx->pc = 0x1ca2f40u;

    // 0x1ca2f40: 0x80b24e8  j           func_2C93A0
    ctx->pc = 0x1CA2F40u;
    ctx->pc = 0x2C93A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93A0u, 0x1CA2F40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2F48u;
}
