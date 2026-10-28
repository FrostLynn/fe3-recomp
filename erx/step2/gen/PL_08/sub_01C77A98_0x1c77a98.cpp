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

// Function: sub_01C77A98
// Address: 0x1c77a98 - 0x1c77ba8
void sub_01C77A98_0x1c77a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77A98_0x1c77a98");
#endif

    switch (ctx->pc) {
        case 0x1c77ab8u: goto label_1c77ab8;
        case 0x1c77accu: goto label_1c77acc;
        case 0x1c77ad0u: goto label_1c77ad0;
        case 0x1c77aecu: goto label_1c77aec;
        case 0x1c77afcu: goto label_1c77afc;
        case 0x1c77b48u: goto label_1c77b48;
        case 0x1c77b84u: goto label_1c77b84;
        case 0x1c77b90u: goto label_1c77b90;
        default: break;
    }

    ctx->pc = 0x1c77a98u;

    // 0x1c77a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c77a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c77aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77aa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c77aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77aac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c77aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c77ab0: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77AB0u;
    SET_GPR_U32(ctx, 31, 0x1C77AB8u);
    ctx->pc = 0x1C77AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77AB0u;
    // 0x1c77ab4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77AB0u, 0x1C77AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77AB8u;
label_1c77ab8:
    // 0x1c77ab8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c77ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c77abc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C77ABCu;
    {
        const bool branch_taken_0x1c77abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77ABCu;
        // 0x1c77ac0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77abc) {
            ctx->pc = 0x1C77B08u;
            goto label_1c77b08;
        }
    }
    ctx->pc = 0x1C77AC4u;
    // 0x1c77ac4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C77AC4u;
    {
        const bool branch_taken_0x1c77ac4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c77ac4) {
            ctx->pc = 0x1C77AE4u;
            goto label_1c77ae4;
        }
    }
    ctx->pc = 0x1C77ACCu;
label_1c77acc:
    // 0x1c77acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c77accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c77ad0:
    // 0x1c77ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77ad4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77ad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77adc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77ADCu;
        // 0x1c77ae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77AE4u;
label_1c77ae4:
    // 0x1c77ae4: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C77AE4u;
    SET_GPR_U32(ctx, 31, 0x1C77AECu);
    ctx->pc = 0x1C77AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77AE4u;
    // 0x1c77ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C77AE4u, 0x1C77AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77AECu;
label_1c77aec:
    // 0x1c77aec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C77AECu;
    {
        const bool branch_taken_0x1c77aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C77AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77AECu;
        // 0x1c77af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77aec) {
            ctx->pc = 0x1C77ACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77acc;
        }
    }
    ctx->pc = 0x1C77AF4u;
    // 0x1c77af4: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77AF4u;
    SET_GPR_U32(ctx, 31, 0x1C77AFCu);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77AF4u, 0x1C77AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77AFCu;
label_1c77afc:
    // 0x1c77afc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C77AFCu;
    {
        const bool branch_taken_0x1c77afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77AFCu;
        // 0x1c77b00: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77afc) {
            ctx->pc = 0x1C77AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77ad0;
        }
    }
    ctx->pc = 0x1C77B04u;
    // 0x1c77b04: 0x0  nop
    ctx->pc = 0x1c77b04u;
    // NOP
label_1c77b08:
    // 0x1c77b08: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c77b08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c77b0c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C77B0Cu;
    {
        const bool branch_taken_0x1c77b0c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B0Cu;
        // 0x1c77b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77b0c) {
            ctx->pc = 0x1C77AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77ad0;
        }
    }
    ctx->pc = 0x1C77B14u;
    // 0x1c77b14: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c77b14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c77b18: 0x3c0e01c8  lui         $t6, 0x1C8
    ctx->pc = 0x1c77b18u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)456 << 16));
    // 0x1c77b1c: 0x25cea6a0  addiu       $t6, $t6, -0x5960
    ctx->pc = 0x1c77b1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944416));
    // 0x1c77b20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c77b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b24: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c77b24u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c77b28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c77b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b2c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c77b2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c77b30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c77b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b34: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c77b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c77b38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b3c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77b3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77b40: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77B40u;
    SET_GPR_U32(ctx, 31, 0x1C77B48u);
    ctx->pc = 0x1C77B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77B40u;
    // 0x1c77b44: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77B40u, 0x1C77B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77B48u;
label_1c77b48:
    // 0x1c77b48: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77b48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77b4c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C77B4Cu;
    {
        const bool branch_taken_0x1c77b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B4Cu;
        // 0x1c77b50: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77b4c) {
            ctx->pc = 0x1C77ACCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77acc;
        }
    }
    ctx->pc = 0x1C77B54u;
    // 0x1c77b54: 0x0  nop
    ctx->pc = 0x1c77b54u;
    // NOP
    // 0x1c77b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77b5c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c77b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c77b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77b64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c77b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c77b6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b74: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77b74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77b78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77b78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b7c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77B7Cu;
    SET_GPR_U32(ctx, 31, 0x1C77B84u);
    ctx->pc = 0x1C77B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77B7Cu;
    // 0x1c77b80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77B7Cu, 0x1C77B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77B84u;
label_1c77b84:
    // 0x1c77b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77b88: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C77B88u;
    SET_GPR_U32(ctx, 31, 0x1C77B90u);
    ctx->pc = 0x1C77B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77B88u;
    // 0x1c77b8c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C77B88u, 0x1C77B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77B90u;
label_1c77b90:
    // 0x1c77b90: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c77b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c77b94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77B9Cu;
        // 0x1c77ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77BA4u;
    // 0x1c77ba4: 0x0  nop
    ctx->pc = 0x1c77ba4u;
    // NOP
    ctx->pc = 0x1c77ba8u;
}
