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

// Function: sub_01D45E38
// Address: 0x1d45e38 - 0x1d45e40
void sub_01D45E38_0x1d45e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D45E38_0x1d45e38");
#endif

    ctx->pc = 0x1d45e38u;

    // 0x1d45e38: 0x80b0e96  j           func_2C3A58
    ctx->pc = 0x1D45E38u;
    ctx->pc = 0x2C3A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3A58u, 0x1D45E38u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D45E40u;
}
