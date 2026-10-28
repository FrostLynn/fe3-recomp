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

// Function: sub_01CFD428
// Address: 0x1cfd428 - 0x1cfd430
void sub_01CFD428_0x1cfd428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD428_0x1cfd428");
#endif

    ctx->pc = 0x1cfd428u;

    // 0x1cfd428: 0x80b2b58  j           func_2CAD60
    ctx->pc = 0x1CFD428u;
    ctx->pc = 0x2CAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAD60u, 0x1CFD428u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD430u;
}
