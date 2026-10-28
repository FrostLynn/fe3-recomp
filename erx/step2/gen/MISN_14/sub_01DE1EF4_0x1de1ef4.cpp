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

// Function: sub_01DE1EF4
// Address: 0x1de1ef4 - 0x1de1f04
void sub_01DE1EF4_0x1de1ef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1EF4_0x1de1ef4");
#endif

    ctx->pc = 0x1de1ef4u;

    // 0x1de1ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1EFCu;
    // 0x1de1efc: 0x0  nop
    ctx->pc = 0x1de1efcu;
    // NOP
    // 0x1de1f00: 0x0  nop
    ctx->pc = 0x1de1f00u;
    // NOP
    ctx->pc = 0x1de1f04u;
}
