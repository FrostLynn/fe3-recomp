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

// Function: sub_01D3C208
// Address: 0x1d3c208 - 0x1d3c210
void sub_01D3C208_0x1d3c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C208_0x1d3c208");
#endif

    ctx->pc = 0x1d3c208u;

    // 0x1d3c208: 0x80b14aa  j           func_2C52A8
    ctx->pc = 0x1D3C208u;
    ctx->pc = 0x2C52A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52A8u, 0x1D3C208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D3C210u;
}
