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

// Function: sub_01D70A78
// Address: 0x1d70a78 - 0x1d70a80
void sub_01D70A78_0x1d70a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70A78_0x1d70a78");
#endif

    ctx->pc = 0x1d70a78u;

    // 0x1d70a78: 0x80b313e  j           func_2CC4F8
    ctx->pc = 0x1D70A78u;
    ctx->pc = 0x2CC4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4F8u, 0x1D70A78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D70A80u;
}
