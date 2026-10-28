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

// Function: sub_01D9CE80
// Address: 0x1d9ce80 - 0x1d9ce88
void sub_01D9CE80_0x1d9ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9CE80_0x1d9ce80");
#endif

    ctx->pc = 0x1d9ce80u;

    // 0x1d9ce80: 0x80b1220  j           func_2C4880
    ctx->pc = 0x1D9CE80u;
    ctx->pc = 0x2C4880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4880u, 0x1D9CE80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9CE88u;
}
