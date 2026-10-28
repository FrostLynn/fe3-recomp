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

// Function: sub_01D3BEF8
// Address: 0x1d3bef8 - 0x1d3bf00
void sub_01D3BEF8_0x1d3bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3BEF8_0x1d3bef8");
#endif

    ctx->pc = 0x1d3bef8u;

    // 0x1d3bef8: 0x80b192e  j           func_2C64B8
    ctx->pc = 0x1D3BEF8u;
    ctx->pc = 0x2C64B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64B8u, 0x1D3BEF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3BF00u;
}
