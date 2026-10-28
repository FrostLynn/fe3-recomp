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

// Function: sub_01CFD290
// Address: 0x1cfd290 - 0x1cfd298
void sub_01CFD290_0x1cfd290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD290_0x1cfd290");
#endif

    ctx->pc = 0x1cfd290u;

    // 0x1cfd290: 0x80b2c36  j           func_2CB0D8
    ctx->pc = 0x1CFD290u;
    ctx->pc = 0x2CB0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB0D8u, 0x1CFD290u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD298u;
}
