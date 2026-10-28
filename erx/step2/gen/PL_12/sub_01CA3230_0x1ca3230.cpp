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

// Function: sub_01CA3230
// Address: 0x1ca3230 - 0x1ca3240
void sub_01CA3230_0x1ca3230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3230_0x1ca3230");
#endif

    ctx->pc = 0x1ca3230u;

    // 0x1ca3230: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1CA3230u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1CA3230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CA3238u;
    // 0x1ca3238: 0x0  nop
    ctx->pc = 0x1ca3238u;
    // NOP
    // 0x1ca323c: 0x0  nop
    ctx->pc = 0x1ca323cu;
    // NOP
    ctx->pc = 0x1ca3240u;
}
