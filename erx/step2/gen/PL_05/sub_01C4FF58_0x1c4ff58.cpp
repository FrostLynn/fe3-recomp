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

// Function: sub_01C4FF58
// Address: 0x1c4ff58 - 0x1c4ff60
void sub_01C4FF58_0x1c4ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C4FF58_0x1c4ff58");
#endif

    ctx->pc = 0x1c4ff58u;

    // 0x1c4ff58: 0x80b1542  j           func_2C5508
    ctx->pc = 0x1C4FF58u;
    ctx->pc = 0x2C5508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5508u, 0x1C4FF58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C4FF60u;
}
