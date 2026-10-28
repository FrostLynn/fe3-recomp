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

// Function: sub_01D9EC08
// Address: 0x1d9ec08 - 0x1d9ed40
void sub_01D9EC08_0x1d9ec08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EC08_0x1d9ec08");
#endif

    switch (ctx->pc) {
        case 0x1d9ec28u: goto label_1d9ec28;
        case 0x1d9ec3cu: goto label_1d9ec3c;
        case 0x1d9ec40u: goto label_1d9ec40;
        case 0x1d9ec5cu: goto label_1d9ec5c;
        case 0x1d9ec6cu: goto label_1d9ec6c;
        case 0x1d9ecb8u: goto label_1d9ecb8;
        case 0x1d9ecf4u: goto label_1d9ecf4;
        case 0x1d9ed00u: goto label_1d9ed00;
        case 0x1d9ed10u: goto label_1d9ed10;
        case 0x1d9ed28u: goto label_1d9ed28;
        default: break;
    }

    ctx->pc = 0x1d9ec08u;

    // 0x1d9ec08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9ec08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9ec0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ec10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9ec14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9ec14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9ec18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9ec18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ec1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9ec1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9ec20: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9EC20u;
    SET_GPR_U32(ctx, 31, 0x1D9EC28u);
    ctx->pc = 0x1D9EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EC20u;
    // 0x1d9ec24: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9EC20u, 0x1D9EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EC28u;
label_1d9ec28:
    // 0x1d9ec28: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d9ec28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9ec2c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D9EC2Cu;
    {
        const bool branch_taken_0x1d9ec2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC2Cu;
        // 0x1d9ec30: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ec2c) {
            ctx->pc = 0x1D9EC78u;
            goto label_1d9ec78;
        }
    }
    ctx->pc = 0x1D9EC34u;
    // 0x1d9ec34: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D9EC34u;
    {
        const bool branch_taken_0x1d9ec34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d9ec34) {
            ctx->pc = 0x1D9EC54u;
            goto label_1d9ec54;
        }
    }
    ctx->pc = 0x1D9EC3Cu;
label_1d9ec3c:
    // 0x1d9ec3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9ec3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9ec40:
    // 0x1d9ec40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ec40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ec44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9ec44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ec48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9ec48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9ec4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC4Cu;
        // 0x1d9ec50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EC54u;
label_1d9ec54:
    // 0x1d9ec54: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9EC54u;
    SET_GPR_U32(ctx, 31, 0x1D9EC5Cu);
    ctx->pc = 0x1D9EC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EC54u;
    // 0x1d9ec58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9EC54u, 0x1D9EC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EC5Cu;
label_1d9ec5c:
    // 0x1d9ec5c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D9EC5Cu;
    {
        const bool branch_taken_0x1d9ec5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D9EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC5Cu;
        // 0x1d9ec60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ec5c) {
            ctx->pc = 0x1D9EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ec3c;
        }
    }
    ctx->pc = 0x1D9EC64u;
    // 0x1d9ec64: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9EC64u;
    SET_GPR_U32(ctx, 31, 0x1D9EC6Cu);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9EC64u, 0x1D9EC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EC6Cu;
label_1d9ec6c:
    // 0x1d9ec6c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D9EC6Cu;
    {
        const bool branch_taken_0x1d9ec6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC6Cu;
        // 0x1d9ec70: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ec6c) {
            ctx->pc = 0x1D9EC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ec40;
        }
    }
    ctx->pc = 0x1D9EC74u;
    // 0x1d9ec74: 0x0  nop
    ctx->pc = 0x1d9ec74u;
    // NOP
label_1d9ec78:
    // 0x1d9ec78: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d9ec78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d9ec7c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D9EC7Cu;
    {
        const bool branch_taken_0x1d9ec7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC7Cu;
        // 0x1d9ec80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ec7c) {
            ctx->pc = 0x1D9EC40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ec40;
        }
    }
    ctx->pc = 0x1D9EC84u;
    // 0x1d9ec84: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d9ec84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d9ec88: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d9ec88u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d9ec8c: 0x25ce08f0  addiu       $t6, $t6, 0x8F0
    ctx->pc = 0x1d9ec8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2288));
    // 0x1d9ec90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9ec90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ec94: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d9ec94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d9ec98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9ec98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ec9c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9ec9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9eca0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9eca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eca4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d9eca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9eca8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9eca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ecac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9ecacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ecb0: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9ECB0u;
    SET_GPR_U32(ctx, 31, 0x1D9ECB8u);
    ctx->pc = 0x1D9ECB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ECB0u;
    // 0x1d9ecb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9ECB0u, 0x1D9ECB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ECB8u;
label_1d9ecb8:
    // 0x1d9ecb8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9ecb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ecbc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D9ECBCu;
    {
        const bool branch_taken_0x1d9ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ECBCu;
        // 0x1d9ecc0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ecbc) {
            ctx->pc = 0x1D9EC3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9ec3c;
        }
    }
    ctx->pc = 0x1D9ECC4u;
    // 0x1d9ecc4: 0x0  nop
    ctx->pc = 0x1d9ecc4u;
    // NOP
    // 0x1d9ecc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9ecc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9eccc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9ecccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9ecd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9ecd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9ecd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9ecd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ecd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9ecd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9ecdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9ecdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ece0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9ece0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ece4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9ece4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ece8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9ece8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ecec: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9ECECu;
    SET_GPR_U32(ctx, 31, 0x1D9ECF4u);
    ctx->pc = 0x1D9ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ECECu;
    // 0x1d9ecf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9ECECu, 0x1D9ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ECF4u;
label_1d9ecf4:
    // 0x1d9ecf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9ecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ecf8: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9ECF8u;
    SET_GPR_U32(ctx, 31, 0x1D9ED00u);
    ctx->pc = 0x1D9ECFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ECF8u;
    // 0x1d9ecfc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9ECF8u, 0x1D9ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ED00u;
label_1d9ed00:
    // 0x1d9ed00: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9ed00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9ed04: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9ed04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9ed08: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9ED08u;
    SET_GPR_U32(ctx, 31, 0x1D9ED10u);
    ctx->pc = 0x1D9ED0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ED08u;
    // 0x1d9ed0c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9ED08u, 0x1D9ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ED10u;
label_1d9ed10:
    // 0x1d9ed10: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9ed10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9ed14: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d9ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d9ed18: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d9ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d9ed1c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9ed20: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9ED20u;
    SET_GPR_U32(ctx, 31, 0x1D9ED28u);
    ctx->pc = 0x1D9ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9ED20u;
    // 0x1d9ed24: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9ED20u, 0x1D9ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9ED28u;
label_1d9ed28:
    // 0x1d9ed28: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d9ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d9ed2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9ed2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ed30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9ed30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9ed34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9ED34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9ED34u;
        // 0x1d9ed38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9ED34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9ED3Cu;
    // 0x1d9ed3c: 0x0  nop
    ctx->pc = 0x1d9ed3cu;
    // NOP
    ctx->pc = 0x1d9ed40u;
}
