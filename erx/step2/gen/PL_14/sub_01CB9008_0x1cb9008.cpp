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

// Function: sub_01CB9008
// Address: 0x1cb9008 - 0x1cb9090
void sub_01CB9008_0x1cb9008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9008_0x1cb9008");
#endif

    switch (ctx->pc) {
        case 0x1cb902cu: goto label_1cb902c;
        case 0x1cb9058u: goto label_1cb9058;
        default: break;
    }

    ctx->pc = 0x1cb9008u;

    // 0x1cb9008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb9008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb900c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb900cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb9010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb9010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb9014: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1cb9014u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1cb9018: 0x15e00018  bnez        $t7, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB9018u;
    {
        const bool branch_taken_0x1cb9018 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9018u;
        // 0x1cb901c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9018) {
            ctx->pc = 0x1CB907Cu;
            goto label_1cb907c;
        }
    }
    ctx->pc = 0x1CB9020u;
    // 0x1cb9020: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1cb9020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cb9024: 0xc72d9e8  jal         func_1CB67A0
    ctx->pc = 0x1CB9024u;
    SET_GPR_U32(ctx, 31, 0x1CB902Cu);
    ctx->pc = 0x1CB9028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9024u;
    // 0x1cb9028: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67A0u, 0x1CB9024u, 0x1CB902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB902Cu;
label_1cb902c:
    // 0x1cb902c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb902cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9030: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb9030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9034: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb9034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb9038: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb9038u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb903c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb903cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9040: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb9040u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9044: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cb9044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cb9048: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB9048u;
    {
        const bool branch_taken_0x1cb9048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB904Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9048u;
        // 0x1cb904c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9048) {
            ctx->pc = 0x1CB907Cu;
            goto label_1cb907c;
        }
    }
    ctx->pc = 0x1CB9050u;
    // 0x1cb9050: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB9050u;
    SET_GPR_U32(ctx, 31, 0x1CB9058u);
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB9050u, 0x1CB9058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9058u;
label_1cb9058:
    // 0x1cb9058: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb9058u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb905c: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cb905cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb9060: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cb9060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cb9064: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cb9064u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cb9068: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cb9068u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb906c: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB906Cu;
    {
        const bool branch_taken_0x1cb906c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB9070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB906Cu;
        // 0x1cb9070: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb906c) {
            ctx->pc = 0x1CB9080u;
            goto label_1cb9080;
        }
    }
    ctx->pc = 0x1CB9074u;
    // 0x1cb9074: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cb9074u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb9078: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cb9078u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cb907c:
    // 0x1cb907c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb907cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb9080:
    // 0x1cb9080: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb9080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb9084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb9088: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9088u;
        // 0x1cb908c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB9090u;
}
