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

// Function: sub_01CCD420
// Address: 0x1ccd420 - 0x1ccd430
void sub_01CCD420_0x1ccd420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCD420_0x1ccd420");
#endif

    ctx->pc = 0x1ccd420u;

    // 0x1ccd420: 0x80d9758  j           func_365D60
    ctx->pc = 0x1CCD420u;
    ctx->pc = 0x365D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365D60u, 0x1CCD420u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1CCD428u;
    // 0x1ccd428: 0x0  nop
    ctx->pc = 0x1ccd428u;
    // NOP
    // 0x1ccd42c: 0x0  nop
    ctx->pc = 0x1ccd42cu;
    // NOP
    ctx->pc = 0x1ccd430u;
}
