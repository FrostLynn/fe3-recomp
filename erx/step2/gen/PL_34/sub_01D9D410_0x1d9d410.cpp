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

// Function: sub_01D9D410
// Address: 0x1d9d410 - 0x1d9d420
void sub_01D9D410_0x1d9d410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D410_0x1d9d410");
#endif

    ctx->pc = 0x1d9d410u;

    // 0x1d9d410: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1D9D410u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1D9D410u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D9D418u;
    // 0x1d9d418: 0x0  nop
    ctx->pc = 0x1d9d418u;
    // NOP
    // 0x1d9d41c: 0x0  nop
    ctx->pc = 0x1d9d41cu;
    // NOP
    ctx->pc = 0x1d9d420u;
}
