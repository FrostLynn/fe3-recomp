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

// Function: sub_01D5D550
// Address: 0x1d5d550 - 0x1d5d558
void sub_01D5D550_0x1d5d550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D550_0x1d5d550");
#endif

    ctx->pc = 0x1d5d550u;

    // 0x1d5d550: 0x80b25e2  j           func_2C9788
    ctx->pc = 0x1D5D550u;
    ctx->pc = 0x2C9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9788u, 0x1D5D550u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D558u;
}
