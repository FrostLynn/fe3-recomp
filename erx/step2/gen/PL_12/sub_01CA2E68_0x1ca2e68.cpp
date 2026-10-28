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

// Function: sub_01CA2E68
// Address: 0x1ca2e68 - 0x1ca2e70
void sub_01CA2E68_0x1ca2e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA2E68_0x1ca2e68");
#endif

    ctx->pc = 0x1ca2e68u;

    // 0x1ca2e68: 0x80b2120  j           func_2C8480
    ctx->pc = 0x1CA2E68u;
    ctx->pc = 0x2C8480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8480u, 0x1CA2E68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA2E70u;
}
