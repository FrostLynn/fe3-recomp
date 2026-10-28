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

// Function: sub_01C83B00
// Address: 0x1c83b00 - 0x1c83b18
void sub_01C83B00_0x1c83b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C83B00_0x1c83b00");
#endif

    ctx->pc = 0x1c83b00u;

    // 0x1c83b00: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c83b00u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c83b04: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1c83b04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c83b08: 0x25ef4ab0  addiu       $t7, $t7, 0x4AB0
    ctx->pc = 0x1c83b08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 19120));
    // 0x1c83b0c: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x1c83b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x1c83b10: 0x3e00008  jr          $ra
    ctx->pc = 0x1C83B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C83B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C83B10u;
        // 0x1c83b14: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C83B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C83B18u;
}
