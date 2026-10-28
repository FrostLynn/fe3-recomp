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

// Function: sub_01C993D8
// Address: 0x1c993d8 - 0x1c993e0
void sub_01C993D8_0x1c993d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C993D8_0x1c993d8");
#endif

    ctx->pc = 0x1c993d8u;

    // 0x1c993d8: 0x80b274c  j           func_2C9D30
    ctx->pc = 0x1C993D8u;
    ctx->pc = 0x2C9D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D30u, 0x1C993D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C993E0u;
}
