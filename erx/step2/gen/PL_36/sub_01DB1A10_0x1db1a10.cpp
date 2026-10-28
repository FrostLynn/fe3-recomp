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

// Function: sub_01DB1A10
// Address: 0x1db1a10 - 0x1db1a20
void sub_01DB1A10_0x1db1a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1A10_0x1db1a10");
#endif

    ctx->pc = 0x1db1a10u;

    // 0x1db1a10: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1DB1A10u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1DB1A10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1DB1A18u;
    // 0x1db1a18: 0x0  nop
    ctx->pc = 0x1db1a18u;
    // NOP
    // 0x1db1a1c: 0x0  nop
    ctx->pc = 0x1db1a1cu;
    // NOP
    ctx->pc = 0x1db1a20u;
}
