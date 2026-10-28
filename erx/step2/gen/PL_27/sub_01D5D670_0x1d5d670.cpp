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

// Function: sub_01D5D670
// Address: 0x1d5d670 - 0x1d5d678
void sub_01D5D670_0x1d5d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5D670_0x1d5d670");
#endif

    ctx->pc = 0x1d5d670u;

    // 0x1d5d670: 0x80b0f9a  j           func_2C3E68
    ctx->pc = 0x1D5D670u;
    ctx->pc = 0x2C3E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E68u, 0x1D5D670u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D5D678u;
}
