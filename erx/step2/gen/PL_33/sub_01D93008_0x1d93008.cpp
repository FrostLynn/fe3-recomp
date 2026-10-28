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

// Function: sub_01D93008
// Address: 0x1d93008 - 0x1d93010
void sub_01D93008_0x1d93008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93008_0x1d93008");
#endif

    ctx->pc = 0x1d93008u;

    // 0x1d93008: 0x80b246c  j           func_2C91B0
    ctx->pc = 0x1D93008u;
    ctx->pc = 0x2C91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C91B0u, 0x1D93008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D93010u;
}
