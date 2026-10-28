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

// Function: sub_01CA2F28
// Address: 0x1ca2f28 - 0x1ca2f30
void sub_01CA2F28_0x1ca2f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2F28_0x1ca2f28");
#endif

    ctx->pc = 0x1ca2f28u;

    // 0x1ca2f28: 0x80b24a6  j           func_2C9298
    ctx->pc = 0x1CA2F28u;
    ctx->pc = 0x2C9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9298u, 0x1CA2F28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2F30u;
}
