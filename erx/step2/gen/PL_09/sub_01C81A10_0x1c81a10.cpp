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

// Function: sub_01C81A10
// Address: 0x1c81a10 - 0x1c81a20
void sub_01C81A10_0x1c81a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81A10_0x1c81a10");
#endif

    ctx->pc = 0x1c81a10u;

    // 0x1c81a10: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C81A10u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C81A10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C81A18u;
    // 0x1c81a18: 0x0  nop
    ctx->pc = 0x1c81a18u;
    // NOP
    // 0x1c81a1c: 0x0  nop
    ctx->pc = 0x1c81a1cu;
    // NOP
    ctx->pc = 0x1c81a20u;
}
