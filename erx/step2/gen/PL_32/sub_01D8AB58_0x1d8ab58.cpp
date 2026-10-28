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

// Function: sub_01D8AB58
// Address: 0x1d8ab58 - 0x1d8ac90
void sub_01D8AB58_0x1d8ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AB58_0x1d8ab58");
#endif

    switch (ctx->pc) {
        case 0x1d8ab78u: goto label_1d8ab78;
        case 0x1d8ab8cu: goto label_1d8ab8c;
        case 0x1d8ab90u: goto label_1d8ab90;
        case 0x1d8abacu: goto label_1d8abac;
        case 0x1d8abbcu: goto label_1d8abbc;
        case 0x1d8ac08u: goto label_1d8ac08;
        case 0x1d8ac44u: goto label_1d8ac44;
        case 0x1d8ac50u: goto label_1d8ac50;
        case 0x1d8ac60u: goto label_1d8ac60;
        case 0x1d8ac78u: goto label_1d8ac78;
        default: break;
    }

    ctx->pc = 0x1d8ab58u;

    // 0x1d8ab58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8ab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8ab5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ab5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ab60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8ab60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8ab64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8ab68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8ab68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ab6c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8ab6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8ab70: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AB70u;
    SET_GPR_U32(ctx, 31, 0x1D8AB78u);
    ctx->pc = 0x1D8AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AB70u;
    // 0x1d8ab74: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AB70u, 0x1D8AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AB78u;
label_1d8ab78:
    // 0x1d8ab78: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d8ab78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8ab7c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8AB7Cu;
    {
        const bool branch_taken_0x1d8ab7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB7Cu;
        // 0x1d8ab80: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ab7c) {
            ctx->pc = 0x1D8ABC8u;
            goto label_1d8abc8;
        }
    }
    ctx->pc = 0x1D8AB84u;
    // 0x1d8ab84: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8AB84u;
    {
        const bool branch_taken_0x1d8ab84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d8ab84) {
            ctx->pc = 0x1D8ABA4u;
            goto label_1d8aba4;
        }
    }
    ctx->pc = 0x1D8AB8Cu;
label_1d8ab8c:
    // 0x1d8ab8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8ab8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8ab90:
    // 0x1d8ab90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ab90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ab94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8ab94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ab98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8ab98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8ab9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AB9Cu;
        // 0x1d8aba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8ABA4u;
label_1d8aba4:
    // 0x1d8aba4: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8ABA4u;
    SET_GPR_U32(ctx, 31, 0x1D8ABACu);
    ctx->pc = 0x1D8ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8ABA4u;
    // 0x1d8aba8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8ABA4u, 0x1D8ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ABACu;
label_1d8abac:
    // 0x1d8abac: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D8ABACu;
    {
        const bool branch_taken_0x1d8abac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D8ABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ABACu;
        // 0x1d8abb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8abac) {
            ctx->pc = 0x1D8AB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8ab8c;
        }
    }
    ctx->pc = 0x1D8ABB4u;
    // 0x1d8abb4: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D8ABB4u;
    SET_GPR_U32(ctx, 31, 0x1D8ABBCu);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D8ABB4u, 0x1D8ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8ABBCu;
label_1d8abbc:
    // 0x1d8abbc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D8ABBCu;
    {
        const bool branch_taken_0x1d8abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ABBCu;
        // 0x1d8abc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8abbc) {
            ctx->pc = 0x1D8AB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8ab90;
        }
    }
    ctx->pc = 0x1D8ABC4u;
    // 0x1d8abc4: 0x0  nop
    ctx->pc = 0x1d8abc4u;
    // NOP
label_1d8abc8:
    // 0x1d8abc8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d8abc8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d8abcc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8ABCCu;
    {
        const bool branch_taken_0x1d8abcc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8ABCCu;
        // 0x1d8abd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8abcc) {
            ctx->pc = 0x1D8AB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8ab90;
        }
    }
    ctx->pc = 0x1D8ABD4u;
    // 0x1d8abd4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d8abd4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d8abd8: 0x3c0e01d9  lui         $t6, 0x1D9
    ctx->pc = 0x1d8abd8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
    // 0x1d8abdc: 0x25cec8b0  addiu       $t6, $t6, -0x3750
    ctx->pc = 0x1d8abdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953136));
    // 0x1d8abe0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8abe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8abe4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8abe4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8abe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8abe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8abec: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d8abecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d8abf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8abf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8abf4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d8abf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8abf8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8abf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8abfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8abfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ac00: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8AC00u;
    SET_GPR_U32(ctx, 31, 0x1D8AC08u);
    ctx->pc = 0x1D8AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC00u;
    // 0x1d8ac04: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8AC00u, 0x1D8AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC08u;
label_1d8ac08:
    // 0x1d8ac08: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8ac08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ac0c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D8AC0Cu;
    {
        const bool branch_taken_0x1d8ac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AC0Cu;
        // 0x1d8ac10: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8ac0c) {
            ctx->pc = 0x1D8AB8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8ab8c;
        }
    }
    ctx->pc = 0x1D8AC14u;
    // 0x1d8ac14: 0x0  nop
    ctx->pc = 0x1d8ac14u;
    // NOP
    // 0x1d8ac18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ac18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ac1c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8ac1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8ac20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ac24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8ac24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ac28: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8ac28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8ac2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8ac2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ac30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8ac30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ac34: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8ac34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ac38: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8ac38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ac3c: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8AC3Cu;
    SET_GPR_U32(ctx, 31, 0x1D8AC44u);
    ctx->pc = 0x1D8AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC3Cu;
    // 0x1d8ac40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8AC3Cu, 0x1D8AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC44u;
label_1d8ac44:
    // 0x1d8ac44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8ac44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ac48: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D8AC48u;
    SET_GPR_U32(ctx, 31, 0x1D8AC50u);
    ctx->pc = 0x1D8AC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC48u;
    // 0x1d8ac4c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D8AC48u, 0x1D8AC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC50u;
label_1d8ac50:
    // 0x1d8ac50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8ac50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8ac54: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d8ac54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8ac58: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AC58u;
    SET_GPR_U32(ctx, 31, 0x1D8AC60u);
    ctx->pc = 0x1D8AC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC58u;
    // 0x1d8ac5c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AC58u, 0x1D8AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC60u;
label_1d8ac60:
    // 0x1d8ac60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8ac60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ac64: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8ac64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8ac68: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d8ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d8ac6c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8ac6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8ac70: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AC70u;
    SET_GPR_U32(ctx, 31, 0x1D8AC78u);
    ctx->pc = 0x1D8AC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AC70u;
    // 0x1d8ac74: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AC70u, 0x1D8AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AC78u;
label_1d8ac78:
    // 0x1d8ac78: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8ac78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8ac7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ac7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ac80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8ac80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ac84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AC84u;
        // 0x1d8ac88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AC8Cu;
    // 0x1d8ac8c: 0x0  nop
    ctx->pc = 0x1d8ac8cu;
    // NOP
    ctx->pc = 0x1d8ac90u;
}
