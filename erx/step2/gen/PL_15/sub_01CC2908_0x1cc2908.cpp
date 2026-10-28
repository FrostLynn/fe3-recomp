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

// Function: sub_01CC2908
// Address: 0x1cc2908 - 0x1cc2910
void sub_01CC2908_0x1cc2908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2908_0x1cc2908");
#endif

    ctx->pc = 0x1cc2908u;

    // 0x1cc2908: 0x80b1150  j           func_2C4540
    ctx->pc = 0x1CC2908u;
    ctx->pc = 0x2C4540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4540u, 0x1CC2908u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2910u;
}
