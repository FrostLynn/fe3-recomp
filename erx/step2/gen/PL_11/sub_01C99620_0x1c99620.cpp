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

// Function: sub_01C99620
// Address: 0x1c99620 - 0x1c99630
void sub_01C99620_0x1c99620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C99620_0x1c99620");
#endif

    ctx->pc = 0x1c99620u;

    // 0x1c99620: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1C99620u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1C99620u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1C99628u;
    // 0x1c99628: 0x0  nop
    ctx->pc = 0x1c99628u;
    // NOP
    // 0x1c9962c: 0x0  nop
    ctx->pc = 0x1c9962cu;
    // NOP
    ctx->pc = 0x1c99630u;
}
