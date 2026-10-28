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

// Function: sub_01C50030
// Address: 0x1c50030 - 0x1c50038
void sub_01C50030_0x1c50030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50030_0x1c50030");
#endif

    ctx->pc = 0x1c50030u;

    // 0x1c50030: 0x80b200e  j           func_2C8038
    ctx->pc = 0x1C50030u;
    ctx->pc = 0x2C8038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8038u, 0x1C50030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C50038u;
}
