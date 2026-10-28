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

// Function: sub_01D5F374
// Address: 0x1d5f374 - 0x1d5f384
void sub_01D5F374_0x1d5f374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F374_0x1d5f374");
#endif

    ctx->pc = 0x1d5f374u;

    // 0x1d5f374: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F37Cu;
    // 0x1d5f37c: 0x0  nop
    ctx->pc = 0x1d5f37cu;
    // NOP
    // 0x1d5f380: 0x0  nop
    ctx->pc = 0x1d5f380u;
    // NOP
    ctx->pc = 0x1d5f384u;
}
