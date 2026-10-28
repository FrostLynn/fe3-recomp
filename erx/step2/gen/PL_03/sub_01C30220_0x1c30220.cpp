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

// Function: sub_01C30220
// Address: 0x1c30220 - 0x1c30230
void sub_01C30220_0x1c30220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C30220_0x1c30220");
#endif

    ctx->pc = 0x1c30220u;

    // 0x1c30220: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C30220u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C30220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C30228u;
    // 0x1c30228: 0x0  nop
    ctx->pc = 0x1c30228u;
    // NOP
    // 0x1c3022c: 0x0  nop
    ctx->pc = 0x1c3022cu;
    // NOP
    ctx->pc = 0x1c30230u;
}
