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

// Function: sub_01D77B18
// Address: 0x1d77b18 - 0x1d77b28
void sub_01D77B18_0x1d77b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D77B18_0x1d77b18");
#endif

    ctx->pc = 0x1d77b18u;

    // 0x1d77b18: 0x80d97b0  j           func_365EC0
    ctx->pc = 0x1D77B18u;
    ctx->pc = 0x365EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365EC0u, 0x1D77B18u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D77B20u;
    // 0x1d77b20: 0x0  nop
    ctx->pc = 0x1d77b20u;
    // NOP
    // 0x1d77b24: 0x0  nop
    ctx->pc = 0x1d77b24u;
    // NOP
    ctx->pc = 0x1d77b28u;
}
