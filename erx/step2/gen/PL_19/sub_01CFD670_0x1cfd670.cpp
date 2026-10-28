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

// Function: sub_01CFD670
// Address: 0x1cfd670 - 0x1cfd678
void sub_01CFD670_0x1cfd670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD670_0x1cfd670");
#endif

    ctx->pc = 0x1cfd670u;

    // 0x1cfd670: 0x80b0fc2  j           func_2C3F08
    ctx->pc = 0x1CFD670u;
    ctx->pc = 0x2C3F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3F08u, 0x1CFD670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD678u;
}
