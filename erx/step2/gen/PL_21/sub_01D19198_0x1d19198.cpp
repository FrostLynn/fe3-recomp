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

// Function: sub_01D19198
// Address: 0x1d19198 - 0x1d191a0
void sub_01D19198_0x1d19198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19198_0x1d19198");
#endif

    ctx->pc = 0x1d19198u;

    // 0x1d19198: 0x80b0ee8  j           func_2C3BA0
    ctx->pc = 0x1D19198u;
    ctx->pc = 0x2C3BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BA0u, 0x1D19198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D191A0u;
}
