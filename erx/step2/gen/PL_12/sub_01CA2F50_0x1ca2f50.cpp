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

// Function: sub_01CA2F50
// Address: 0x1ca2f50 - 0x1ca2f58
void sub_01CA2F50_0x1ca2f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2F50_0x1ca2f50");
#endif

    ctx->pc = 0x1ca2f50u;

    // 0x1ca2f50: 0x80b24fe  j           func_2C93F8
    ctx->pc = 0x1CA2F50u;
    ctx->pc = 0x2C93F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C93F8u, 0x1CA2F50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2F58u;
}
