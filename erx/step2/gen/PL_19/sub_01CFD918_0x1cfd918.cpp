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

// Function: sub_01CFD918
// Address: 0x1cfd918 - 0x1cfd920
void sub_01CFD918_0x1cfd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD918_0x1cfd918");
#endif

    ctx->pc = 0x1cfd918u;

    // 0x1cfd918: 0x80b1fbc  j           func_2C7EF0
    ctx->pc = 0x1CFD918u;
    ctx->pc = 0x2C7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7EF0u, 0x1CFD918u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD920u;
}
