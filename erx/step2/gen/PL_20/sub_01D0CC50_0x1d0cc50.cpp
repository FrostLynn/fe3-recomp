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

// Function: sub_01D0CC50
// Address: 0x1d0cc50 - 0x1d0cd18
void sub_01D0CC50_0x1d0cc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0CC50_0x1d0cc50");
#endif

    switch (ctx->pc) {
        case 0x1d0cc6cu: goto label_1d0cc6c;
        case 0x1d0cc7cu: goto label_1d0cc7c;
        case 0x1d0cc88u: goto label_1d0cc88;
        case 0x1d0cc98u: goto label_1d0cc98;
        case 0x1d0ccb0u: goto label_1d0ccb0;
        case 0x1d0ccdcu: goto label_1d0ccdc;
        default: break;
    }

    ctx->pc = 0x1d0cc50u;

    // 0x1d0cc50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0cc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0cc54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0cc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0cc58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0cc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0cc5c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d0cc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d0cc60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0cc60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cc64: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CC64u;
    SET_GPR_U32(ctx, 31, 0x1D0CC6Cu);
    ctx->pc = 0x1D0CC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC64u;
    // 0x1d0cc68: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CC64u, 0x1D0CC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC6Cu;
label_1d0cc6c:
    // 0x1d0cc6c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d0cc6cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0cc70: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d0cc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d0cc74: 0xc74320c  jal         func_1D0C830
    ctx->pc = 0x1D0CC74u;
    SET_GPR_U32(ctx, 31, 0x1D0CC7Cu);
    ctx->pc = 0x1D0CC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC74u;
    // 0x1d0cc78: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C830u, 0x1D0CC74u, 0x1D0CC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC7Cu;
label_1d0cc7c:
    // 0x1d0cc7c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d0cc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d0cc80: 0xc742f56  jal         func_1D0BD58
    ctx->pc = 0x1D0CC80u;
    SET_GPR_U32(ctx, 31, 0x1D0CC88u);
    ctx->pc = 0x1D0CC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC80u;
    // 0x1d0cc84: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD58u, 0x1D0CC80u, 0x1D0CC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC88u;
label_1d0cc88:
    // 0x1d0cc88: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d0cc88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d0cc8c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d0cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d0cc90: 0xc74320c  jal         func_1D0C830
    ctx->pc = 0x1D0CC90u;
    SET_GPR_U32(ctx, 31, 0x1D0CC98u);
    ctx->pc = 0x1D0CC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CC90u;
    // 0x1d0cc94: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C830u, 0x1D0CC90u, 0x1D0CC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CC98u;
label_1d0cc98:
    // 0x1d0cc98: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d0cc98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d0cc9c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D0CC9Cu;
    {
        const bool branch_taken_0x1d0cc9c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0cc9c) {
            ctx->pc = 0x1D0CCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0CC9Cu;
            // 0x1d0cca0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0CD04u;
            goto label_1d0cd04;
        }
    }
    ctx->pc = 0x1D0CCA4u;
    // 0x1d0cca4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d0cca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cca8: 0xc742f68  jal         func_1D0BDA0
    ctx->pc = 0x1D0CCA8u;
    SET_GPR_U32(ctx, 31, 0x1D0CCB0u);
    ctx->pc = 0x1D0CCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0CCA8u;
    // 0x1d0ccac: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BDA0u, 0x1D0CCA8u, 0x1D0CCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CCB0u;
label_1d0ccb0:
    // 0x1d0ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ccb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d0ccb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ccb8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0ccb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0ccbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d0ccbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ccc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0ccc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0ccc4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0ccc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0ccc8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d0ccc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d0cccc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0CCCCu;
    {
        const bool branch_taken_0x1d0cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CCCCu;
        // 0x1d0ccd0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0cccc) {
            ctx->pc = 0x1D0CD00u;
            goto label_1d0cd00;
        }
    }
    ctx->pc = 0x1D0CCD4u;
    // 0x1d0ccd4: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0CCD4u;
    SET_GPR_U32(ctx, 31, 0x1D0CCDCu);
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0CCD4u, 0x1D0CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0CCDCu;
label_1d0ccdc:
    // 0x1d0ccdc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d0ccdcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0cce0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d0cce0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d0cce4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d0cce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d0cce8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d0cce8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d0ccec: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d0ccecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0ccf0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D0CCF0u;
    {
        const bool branch_taken_0x1d0ccf0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D0CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CCF0u;
        // 0x1d0ccf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0ccf0) {
            ctx->pc = 0x1D0CD04u;
            goto label_1d0cd04;
        }
    }
    ctx->pc = 0x1D0CCF8u;
    // 0x1d0ccf8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d0ccf8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d0ccfc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d0ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d0cd00:
    // 0x1d0cd00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0cd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0cd04:
    // 0x1d0cd04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d0cd04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0cd08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0cd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0cd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0CD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0CD0Cu;
        // 0x1d0cd10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0CD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0CD14u;
    // 0x1d0cd14: 0x0  nop
    ctx->pc = 0x1d0cd14u;
    // NOP
    ctx->pc = 0x1d0cd18u;
}
