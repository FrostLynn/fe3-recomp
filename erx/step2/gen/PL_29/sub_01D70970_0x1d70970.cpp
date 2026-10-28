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

// Function: sub_01D70970
// Address: 0x1d70970 - 0x1d70978
void sub_01D70970_0x1d70970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70970_0x1d70970");
#endif

    ctx->pc = 0x1d70970u;

    // 0x1d70970: 0x80b0f9a  j           func_2C3E68
    ctx->pc = 0x1D70970u;
    ctx->pc = 0x2C3E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E68u, 0x1D70970u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70978u;
}
