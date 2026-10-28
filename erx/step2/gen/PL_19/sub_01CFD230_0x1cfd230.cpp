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

// Function: sub_01CFD230
// Address: 0x1cfd230 - 0x1cfd240
void sub_01CFD230_0x1cfd230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFD230_0x1cfd230");
#endif

    ctx->pc = 0x1cfd230u;

    // 0x1cfd230: 0x80d9758  j           func_365D60
    ctx->pc = 0x1CFD230u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1CFD230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CFD238u;
    // 0x1cfd238: 0x0  nop
    ctx->pc = 0x1cfd238u;
    // NOP
    // 0x1cfd23c: 0x0  nop
    ctx->pc = 0x1cfd23cu;
    // NOP
    ctx->pc = 0x1cfd240u;
}
