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

// Function: sub_01C00B30
// Address: 0x1c00b30 - 0x1c00b40
void sub_01C00B30_0x1c00b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00B30_0x1c00b30");
#endif

    ctx->pc = 0x1c00b30u;

    // 0x1c00b30: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C00B30u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C00B30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C00B38u;
    // 0x1c00b38: 0x0  nop
    ctx->pc = 0x1c00b38u;
    // NOP
    // 0x1c00b3c: 0x0  nop
    ctx->pc = 0x1c00b3cu;
    // NOP
    ctx->pc = 0x1c00b40u;
}
