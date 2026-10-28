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

// Function: sub_01D70308
// Address: 0x1d70308 - 0x1d70310
void sub_01D70308_0x1d70308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70308_0x1d70308");
#endif

    ctx->pc = 0x1d70308u;

    // 0x1d70308: 0x80b1d80  j           func_2C7600
    ctx->pc = 0x1D70308u;
    ctx->pc = 0x2C7600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7600u, 0x1D70308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70310u;
}
