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

// Function: sub_01D5E9E8
// Address: 0x1d5e9e8 - 0x1d5eae8
void sub_01D5E9E8_0x1d5e9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5E9E8_0x1d5e9e8");
#endif

    switch (ctx->pc) {
        case 0x1d5ea04u: goto label_1d5ea04;
        case 0x1d5ea0cu: goto label_1d5ea0c;
        case 0x1d5ea20u: goto label_1d5ea20;
        case 0x1d5ea24u: goto label_1d5ea24;
        case 0x1d5ea60u: goto label_1d5ea60;
        case 0x1d5ea8cu: goto label_1d5ea8c;
        case 0x1d5ea98u: goto label_1d5ea98;
        case 0x1d5eaa4u: goto label_1d5eaa4;
        case 0x1d5eab8u: goto label_1d5eab8;
        case 0x1d5eac8u: goto label_1d5eac8;
        default: break;
    }

    ctx->pc = 0x1d5e9e8u;

    // 0x1d5e9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e9ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5e9ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5e9f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e9f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5e9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e9f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e9fc: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5E9FCu;
    SET_GPR_U32(ctx, 31, 0x1D5EA04u);
    ctx->pc = 0x1D5EA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E9FCu;
    // 0x1d5ea00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5E9FCu, 0x1D5EA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA04u;
label_1d5ea04:
    // 0x1d5ea04: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5EA04u;
    SET_GPR_U32(ctx, 31, 0x1D5EA0Cu);
    ctx->pc = 0x1D5EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA04u;
    // 0x1d5ea08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5EA04u, 0x1D5EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA0Cu;
label_1d5ea0c:
    // 0x1d5ea0c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5ea0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ea10: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5EA10u;
    {
        const bool branch_taken_0x1d5ea10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA10u;
        // 0x1d5ea14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ea10) {
            ctx->pc = 0x1D5EA34u;
            goto label_1d5ea34;
        }
    }
    ctx->pc = 0x1D5EA18u;
    // 0x1d5ea18: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5EA18u;
    SET_GPR_U32(ctx, 31, 0x1D5EA20u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5EA18u, 0x1D5EA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA20u;
label_1d5ea20:
    // 0x1d5ea20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5ea24:
    // 0x1d5ea24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ea24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ea28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5ea28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ea2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA2Cu;
        // 0x1d5ea30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EA34u;
label_1d5ea34:
    // 0x1d5ea34: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5EA34u;
    {
        const bool branch_taken_0x1d5ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EA34u;
        // 0x1d5ea38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ea34) {
            ctx->pc = 0x1D5EA24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ea24;
        }
    }
    ctx->pc = 0x1D5EA3Cu;
    // 0x1d5ea3c: 0x0  nop
    ctx->pc = 0x1d5ea3cu;
    // NOP
    // 0x1d5ea40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5ea40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5ea44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ea44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ea48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5ea4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5ea4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5ea50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5ea50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea54: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5ea58: 0xc757358  jal         func_1D5CD60
    ctx->pc = 0x1D5EA58u;
    SET_GPR_U32(ctx, 31, 0x1D5EA60u);
    ctx->pc = 0x1D5EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA58u;
    // 0x1d5ea5c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD60u, 0x1D5EA58u, 0x1D5EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA60u;
label_1d5ea60:
    // 0x1d5ea60: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5ea60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5ea64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5ea64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ea68: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5ea68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea6c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5ea6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5ea70: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5ea70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5ea74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5ea78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5ea7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ea7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5ea80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea84: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5EA84u;
    SET_GPR_U32(ctx, 31, 0x1D5EA8Cu);
    ctx->pc = 0x1D5EA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA84u;
    // 0x1d5ea88: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5EA84u, 0x1D5EA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA8Cu;
label_1d5ea8c:
    // 0x1d5ea8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ea8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ea90: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5EA90u;
    SET_GPR_U32(ctx, 31, 0x1D5EA98u);
    ctx->pc = 0x1D5EA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA90u;
    // 0x1d5ea94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5EA90u, 0x1D5EA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA98u;
label_1d5ea98:
    // 0x1d5ea98: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5ea9c: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EA9Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EAA4u);
    ctx->pc = 0x1D5EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA9Cu;
    // 0x1d5eaa0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EA9Cu, 0x1D5EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EAA4u;
label_1d5eaa4:
    // 0x1d5eaa4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d5eaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d5eaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eaac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5eaacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5eab0: 0xc75735c  jal         func_1D5CD70
    ctx->pc = 0x1D5EAB0u;
    SET_GPR_U32(ctx, 31, 0x1D5EAB8u);
    ctx->pc = 0x1D5EAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EAB0u;
    // 0x1d5eab4: 0x240500f8  addiu       $a1, $zero, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD70u, 0x1D5EAB0u, 0x1D5EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EAB8u;
label_1d5eab8:
    // 0x1d5eab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5eab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5eabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eac0: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5EAC0u;
    SET_GPR_U32(ctx, 31, 0x1D5EAC8u);
    ctx->pc = 0x1D5EAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EAC0u;
    // 0x1d5eac4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5EAC0u, 0x1D5EAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EAC8u;
label_1d5eac8:
    // 0x1d5eac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5eac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eacc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5eaccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ead0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ead0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ead4: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x1d5ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1d5ead8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5ead8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5eadc: 0x875735e  j           func_1D5CD78
    ctx->pc = 0x1D5EADCu;
    ctx->pc = 0x1D5EAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EADCu;
    // 0x1d5eae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD78u;
    sub_01D5CD78_0x1d5cd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5EAE4u;
    // 0x1d5eae4: 0x0  nop
    ctx->pc = 0x1d5eae4u;
    // NOP
    ctx->pc = 0x1d5eae8u;
}
