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

// Function: sub_01D0C830
// Address: 0x1d0c830 - 0x1d0c840
void sub_01D0C830_0x1d0c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C830_0x1d0c830");
#endif

    ctx->pc = 0x1d0c830u;

    // 0x1d0c830: 0x8083be6  j           func_20EF98
    ctx->pc = 0x1D0C830u;
    ctx->pc = 0x20EF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF98u, 0x1D0C830u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1D0C838u;
    // 0x1d0c838: 0x0  nop
    ctx->pc = 0x1d0c838u;
    // NOP
    // 0x1d0c83c: 0x0  nop
    ctx->pc = 0x1d0c83cu;
    // NOP
    ctx->pc = 0x1d0c840u;
}
