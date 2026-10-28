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

// Function: sub_01C81550
// Address: 0x1c81550 - 0x1c81558
void sub_01C81550_0x1c81550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81550_0x1c81550");
#endif

    ctx->pc = 0x1c81550u;

    // 0x1c81550: 0x80b1558  j           func_2C5560
    ctx->pc = 0x1C81550u;
    ctx->pc = 0x2C5560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5560u, 0x1C81550u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81558u;
}
