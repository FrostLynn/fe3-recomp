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

// Function: sub_01D47F80
// Address: 0x1d47f80 - 0x1d48090
void sub_01D47F80_0x1d47f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47F80_0x1d47f80");
#endif

    switch (ctx->pc) {
        case 0x1d47fa0u: goto label_1d47fa0;
        case 0x1d47fb4u: goto label_1d47fb4;
        case 0x1d47fb8u: goto label_1d47fb8;
        case 0x1d47fd4u: goto label_1d47fd4;
        case 0x1d47fe4u: goto label_1d47fe4;
        case 0x1d48030u: goto label_1d48030;
        case 0x1d4806cu: goto label_1d4806c;
        case 0x1d48078u: goto label_1d48078;
        default: break;
    }

    ctx->pc = 0x1d47f80u;

    // 0x1d47f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d47f84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47f88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d47f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d47f8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d47f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d47f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d47f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f94: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d47f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d47f98: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47F98u;
    SET_GPR_U32(ctx, 31, 0x1D47FA0u);
    ctx->pc = 0x1D47F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F98u;
    // 0x1d47f9c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47F98u, 0x1D47FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47FA0u;
label_1d47fa0:
    // 0x1d47fa0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d47fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d47fa4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D47FA4u;
    {
        const bool branch_taken_0x1d47fa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47FA4u;
        // 0x1d47fa8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47fa4) {
            ctx->pc = 0x1D47FF0u;
            goto label_1d47ff0;
        }
    }
    ctx->pc = 0x1D47FACu;
    // 0x1d47fac: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D47FACu;
    {
        const bool branch_taken_0x1d47fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d47fac) {
            ctx->pc = 0x1D47FCCu;
            goto label_1d47fcc;
        }
    }
    ctx->pc = 0x1D47FB4u;
label_1d47fb4:
    // 0x1d47fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d47fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d47fb8:
    // 0x1d47fb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47fbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d47fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47fc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d47fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47FC4u;
        // 0x1d47fc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47FCCu;
label_1d47fcc:
    // 0x1d47fcc: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D47FCCu;
    SET_GPR_U32(ctx, 31, 0x1D47FD4u);
    ctx->pc = 0x1D47FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47FCCu;
    // 0x1d47fd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D47FCCu, 0x1D47FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47FD4u;
label_1d47fd4:
    // 0x1d47fd4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D47FD4u;
    {
        const bool branch_taken_0x1d47fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D47FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47FD4u;
        // 0x1d47fd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47fd4) {
            ctx->pc = 0x1D47FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47fb4;
        }
    }
    ctx->pc = 0x1D47FDCu;
    // 0x1d47fdc: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D47FDCu;
    SET_GPR_U32(ctx, 31, 0x1D47FE4u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D47FDCu, 0x1D47FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47FE4u;
label_1d47fe4:
    // 0x1d47fe4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D47FE4u;
    {
        const bool branch_taken_0x1d47fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47FE4u;
        // 0x1d47fe8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47fe4) {
            ctx->pc = 0x1D47FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47fb8;
        }
    }
    ctx->pc = 0x1D47FECu;
    // 0x1d47fec: 0x0  nop
    ctx->pc = 0x1d47fecu;
    // NOP
label_1d47ff0:
    // 0x1d47ff0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d47ff0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d47ff4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D47FF4u;
    {
        const bool branch_taken_0x1d47ff4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47FF4u;
        // 0x1d47ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ff4) {
            ctx->pc = 0x1D47FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47fb8;
        }
    }
    ctx->pc = 0x1D47FFCu;
    // 0x1d47ffc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d47ffcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d48000: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d48000u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d48004: 0x25ceaee0  addiu       $t6, $t6, -0x5120
    ctx->pc = 0x1d48004u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294946528));
    // 0x1d48008: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d48008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4800c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d4800cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d48010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48014: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d48014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d48018: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d48018u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4801c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d4801cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d48020: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d48020u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48024: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d48024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d48028: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D48028u;
    SET_GPR_U32(ctx, 31, 0x1D48030u);
    ctx->pc = 0x1D4802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48028u;
    // 0x1d4802c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D48028u, 0x1D48030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48030u;
label_1d48030:
    // 0x1d48030: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d48030u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d48034: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D48034u;
    {
        const bool branch_taken_0x1d48034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D48038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48034u;
        // 0x1d48038: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48034) {
            ctx->pc = 0x1D47FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47fb4;
        }
    }
    ctx->pc = 0x1D4803Cu;
    // 0x1d4803c: 0x0  nop
    ctx->pc = 0x1d4803cu;
    // NOP
    // 0x1d48040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d48044: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d48044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d48048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d48048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4804c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d4804cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d48050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d48054: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d48054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48058: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d48058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4805c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d4805cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d48060: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d48060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48064: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D48064u;
    SET_GPR_U32(ctx, 31, 0x1D4806Cu);
    ctx->pc = 0x1D48068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48064u;
    // 0x1d48068: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D48064u, 0x1D4806Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4806Cu;
label_1d4806c:
    // 0x1d4806c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4806cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48070: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D48070u;
    SET_GPR_U32(ctx, 31, 0x1D48078u);
    ctx->pc = 0x1D48074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48070u;
    // 0x1d48074: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D48070u, 0x1D48078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48078u;
label_1d48078:
    // 0x1d48078: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d48078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d4807c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d4807cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d48080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d48080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48084: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48084u;
        // 0x1d48088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4808Cu;
    // 0x1d4808c: 0x0  nop
    ctx->pc = 0x1d4808cu;
    // NOP
    ctx->pc = 0x1d48090u;
}
