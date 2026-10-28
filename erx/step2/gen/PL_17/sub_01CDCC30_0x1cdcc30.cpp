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

// Function: sub_01CDCC30
// Address: 0x1cdcc30 - 0x1cdcc68
void sub_01CDCC30_0x1cdcc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCC30_0x1cdcc30");
#endif

    switch (ctx->pc) {
        case 0x1cdcc44u: goto label_1cdcc44;
        default: break;
    }

    ctx->pc = 0x1cdcc30u;

    // 0x1cdcc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcc34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdcc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdcc38: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdcc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdcc3c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDCC44u);
    ctx->pc = 0x1CDCC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC3Cu;
    // 0x1cdcc40: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCC3Cu, 0x1CDCC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC44u;
label_1cdcc44:
    // 0x1cdcc44: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1cdcc44u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1cdcc48: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CDCC48u;
    {
        const bool branch_taken_0x1cdcc48 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC48u;
        // 0x1cdcc4c: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcc48) {
            ctx->pc = 0x1CDCC5Cu;
            goto label_1cdcc5c;
        }
    }
    ctx->pc = 0x1CDCC50u;
    // 0x1cdcc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdcc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcc54: 0x87368ae  j           func_1CDA2B8
    ctx->pc = 0x1CDCC54u;
    ctx->pc = 0x1CDCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC54u;
    // 0x1cdcc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2B8u;
    sub_01CDA2B8_0x1cda2b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCC5Cu;
label_1cdcc5c:
    // 0x1cdcc5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdcc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC60u;
        // 0x1cdcc64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDCC68u;
}
