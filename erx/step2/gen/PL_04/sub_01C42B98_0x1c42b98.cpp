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

// Function: sub_01C42B98
// Address: 0x1c42b98 - 0x1c42ba0
void sub_01C42B98_0x1c42b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C42B98_0x1c42b98");
#endif

    ctx->pc = 0x1c42b98u;

    // 0x1c42b98: 0x80b2212  j           func_2C8848
    ctx->pc = 0x1C42B98u;
    ctx->pc = 0x2C8848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8848u, 0x1C42B98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C42BA0u;
}
