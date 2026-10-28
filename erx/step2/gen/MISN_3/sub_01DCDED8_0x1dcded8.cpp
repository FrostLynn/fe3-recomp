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

// Function: sub_01DCDED8
// Address: 0x1dcded8 - 0x1dcdef0
void sub_01DCDED8_0x1dcded8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCDED8_0x1dcded8");
#endif

    ctx->pc = 0x1dcded8u;

    // 0x1dcded8: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dcded8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcdedc: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1dcdedcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dcdee0: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dcdee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dcdee4: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1dcdee4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcdee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCDEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCDEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCDEE8u;
        // 0x1dcdeec: 0xadae0cd8  sw          $t6, 0xCD8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCDEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCDEF0u;
}
