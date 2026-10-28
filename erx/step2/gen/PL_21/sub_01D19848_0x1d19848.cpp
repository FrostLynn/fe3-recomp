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

// Function: sub_01D19848
// Address: 0x1d19848 - 0x1d19850
void sub_01D19848_0x1d19848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D19848_0x1d19848");
#endif

    ctx->pc = 0x1d19848u;

    // 0x1d19848: 0x80b24d0  j           func_2C9340
    ctx->pc = 0x1D19848u;
    ctx->pc = 0x2C9340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9340u, 0x1D19848u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D19850u;
}
