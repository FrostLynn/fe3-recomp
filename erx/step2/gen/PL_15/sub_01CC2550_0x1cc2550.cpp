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

// Function: sub_01CC2550
// Address: 0x1cc2550 - 0x1cc2558
void sub_01CC2550_0x1cc2550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC2550_0x1cc2550");
#endif

    ctx->pc = 0x1cc2550u;

    // 0x1cc2550: 0x80b0eae  j           func_2C3AB8
    ctx->pc = 0x1CC2550u;
    ctx->pc = 0x2C3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3AB8u, 0x1CC2550u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CC2558u;
}
