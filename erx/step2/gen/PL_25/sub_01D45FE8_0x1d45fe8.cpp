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

// Function: sub_01D45FE8
// Address: 0x1d45fe8 - 0x1d45ff0
void sub_01D45FE8_0x1d45fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D45FE8_0x1d45fe8");
#endif

    ctx->pc = 0x1d45fe8u;

    // 0x1d45fe8: 0x80b192e  j           func_2C64B8
    ctx->pc = 0x1D45FE8u;
    ctx->pc = 0x2C64B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64B8u, 0x1D45FE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D45FF0u;
}
