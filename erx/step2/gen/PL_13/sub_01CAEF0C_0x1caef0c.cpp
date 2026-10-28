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

// Function: sub_01CAEF0C
// Address: 0x1caef0c - 0x1caef1c
void sub_01CAEF0C_0x1caef0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAEF0C_0x1caef0c");
#endif

    ctx->pc = 0x1caef0cu;

    // 0x1caef0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEF14u;
    // 0x1caef14: 0x0  nop
    ctx->pc = 0x1caef14u;
    // NOP
    // 0x1caef18: 0x0  nop
    ctx->pc = 0x1caef18u;
    // NOP
    ctx->pc = 0x1caef1cu;
}
