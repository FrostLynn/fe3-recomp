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

// Function: sub_01CDD328
// Address: 0x1cdd328 - 0x1cdd350
void sub_01CDD328_0x1cdd328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD328_0x1cdd328");
#endif

    ctx->pc = 0x1cdd328u;

    // 0x1cdd328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd32c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1cdd32cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdd330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd334: 0x8c8d0024  lw          $t5, 0x24($a0)
    ctx->pc = 0x1cdd334u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1cdd338: 0x11ae0003  beq         $t5, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDD338u;
    {
        const bool branch_taken_0x1cdd338 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 14));
        ctx->pc = 0x1CDD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD338u;
        // 0x1cdd33c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd338) {
            ctx->pc = 0x1CDD348u;
            goto label_1cdd348;
        }
    }
    ctx->pc = 0x1CDD340u;
    // 0x1cdd340: 0x8736ca4  j           func_1CDB290
    ctx->pc = 0x1CDD340u;
    ctx->pc = 0x1CDD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD340u;
    // 0x1cdd344: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB290u;
    sub_01CDB290_0x1cdb290(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD348u;
label_1cdd348:
    // 0x1cdd348: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD348u;
        // 0x1cdd34c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD350u;
}
