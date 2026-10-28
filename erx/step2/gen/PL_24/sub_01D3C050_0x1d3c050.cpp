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

// Function: sub_01D3C050
// Address: 0x1d3c050 - 0x1d3c058
void sub_01D3C050_0x1d3c050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C050_0x1d3c050");
#endif

    ctx->pc = 0x1d3c050u;

    // 0x1d3c050: 0x80b0fb0  j           func_2C3EC0
    ctx->pc = 0x1D3C050u;
    ctx->pc = 0x2C3EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3EC0u, 0x1D3C050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C058u;
}
