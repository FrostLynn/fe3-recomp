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

// Function: sub_01D8B0E4
// Address: 0x1d8b0e4 - 0x1d8b0f4
void sub_01D8B0E4_0x1d8b0e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8B0E4_0x1d8b0e4");
#endif

    ctx->pc = 0x1d8b0e4u;

    // 0x1d8b0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8B0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8B0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8B0ECu;
    // 0x1d8b0ec: 0x0  nop
    ctx->pc = 0x1d8b0ecu;
    // NOP
    // 0x1d8b0f0: 0x0  nop
    ctx->pc = 0x1d8b0f0u;
    // NOP
    ctx->pc = 0x1d8b0f4u;
}
