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

// Function: sub_01DEA4EC
// Address: 0x1dea4ec - 0x1dea4fc
void sub_01DEA4EC_0x1dea4ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA4EC_0x1dea4ec");
#endif

    ctx->pc = 0x1dea4ecu;

    // 0x1dea4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEA4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEA4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEA4F4u;
    // 0x1dea4f4: 0x0  nop
    ctx->pc = 0x1dea4f4u;
    // NOP
    // 0x1dea4f8: 0x0  nop
    ctx->pc = 0x1dea4f8u;
    // NOP
    ctx->pc = 0x1dea4fcu;
}
