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

// Function: sub_01DD5CD0
// Address: 0x1dd5cd0 - 0x1dd5ce0
void sub_01DD5CD0_0x1dd5cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5CD0_0x1dd5cd0");
#endif

    ctx->pc = 0x1dd5cd0u;

    // 0x1dd5cd0: 0xaf848018  sw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 4));
    // 0x1dd5cd4: 0x3c0201dd  lui         $v0, 0x1DD
    ctx->pc = 0x1dd5cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)477 << 16));
    // 0x1dd5cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5CD8u;
        // 0x1dd5cdc: 0x24426150  addiu       $v0, $v0, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5CE0u;
}
