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

// Function: sub_01D513B0
// Address: 0x1d513b0 - 0x1d513b8
void sub_01D513B0_0x1d513b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D513B0_0x1d513b0");
#endif

    ctx->pc = 0x1d513b0u;

    // 0x1d513b0: 0x80b1038  j           func_2C40E0
    ctx->pc = 0x1D513B0u;
    ctx->pc = 0x2C40E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40E0u, 0x1D513B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D513B8u;
}
