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

// Function: sub_01D1AF28
// Address: 0x1d1af28 - 0x1d1b010
void sub_01D1AF28_0x1d1af28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1AF28_0x1d1af28");
#endif

    switch (ctx->pc) {
        case 0x1d1af3cu: goto label_1d1af3c;
        case 0x1d1af50u: goto label_1d1af50;
        case 0x1d1af54u: goto label_1d1af54;
        case 0x1d1af70u: goto label_1d1af70;
        case 0x1d1af7cu: goto label_1d1af7c;
        case 0x1d1afbcu: goto label_1d1afbc;
        case 0x1d1afe8u: goto label_1d1afe8;
        case 0x1d1aff4u: goto label_1d1aff4;
        case 0x1d1b000u: goto label_1d1b000;
        default: break;
    }

    ctx->pc = 0x1d1af28u;

    // 0x1d1af28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1af28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1af2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1af2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1af30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1af30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1af34: 0xc746416  jal         func_1D19058
    ctx->pc = 0x1D1AF34u;
    SET_GPR_U32(ctx, 31, 0x1D1AF3Cu);
    ctx->pc = 0x1D1AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AF34u;
    // 0x1d1af38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19058u, 0x1D1AF34u, 0x1D1AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AF3Cu;
label_1d1af3c:
    // 0x1d1af3c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d1af3cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1af40: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1AF40u;
    {
        const bool branch_taken_0x1d1af40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D1AF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AF40u;
        // 0x1d1af44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1af40) {
            ctx->pc = 0x1D1AF64u;
            goto label_1d1af64;
        }
    }
    ctx->pc = 0x1D1AF48u;
    // 0x1d1af48: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1AF48u;
    SET_GPR_U32(ctx, 31, 0x1D1AF50u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1AF48u, 0x1D1AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AF50u;
label_1d1af50:
    // 0x1d1af50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1af54:
    // 0x1d1af54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1af54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1af58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1af58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1af5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1AF5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1AF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AF5Cu;
        // 0x1d1af60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1AF5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1AF64u;
label_1d1af64:
    // 0x1d1af64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1af64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1af68: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1AF68u;
    SET_GPR_U32(ctx, 31, 0x1D1AF70u);
    ctx->pc = 0x1D1AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AF68u;
    // 0x1d1af6c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1AF68u, 0x1D1AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AF70u;
label_1d1af70:
    // 0x1d1af70: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d1af70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d1af74: 0xc746428  jal         func_1D190A0
    ctx->pc = 0x1D1AF74u;
    SET_GPR_U32(ctx, 31, 0x1D1AF7Cu);
    ctx->pc = 0x1D1AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AF74u;
    // 0x1d1af78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190A0u, 0x1D1AF74u, 0x1D1AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AF7Cu;
label_1d1af7c:
    // 0x1d1af7c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D1AF7Cu;
    {
        const bool branch_taken_0x1d1af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1AF7Cu;
        // 0x1d1af80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1af7c) {
            ctx->pc = 0x1D1AF54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1af54;
        }
    }
    ctx->pc = 0x1D1AF84u;
    // 0x1d1af84: 0x0  nop
    ctx->pc = 0x1d1af84u;
    // NOP
    // 0x1d1af88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1af88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1af8c: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1af8cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1af90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d1af90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d1af94: 0x25ee6ae8  addiu       $t6, $t7, 0x6AE8
    ctx->pc = 0x1d1af94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 27368));
    // 0x1d1af98: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d1af98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d1af9c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d1af9cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D26AECu));
    // 0x1d1afa0: 0x8ded6ae8  lw          $t5, 0x6AE8($t7)
    ctx->pc = 0x1d1afa0u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D26AE8u));
    // 0x1d1afa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1afa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1afa8: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d1afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d1afac: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d1afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d1afb0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d1afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d1afb4: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1AFB4u;
    SET_GPR_U32(ctx, 31, 0x1D1AFBCu);
    ctx->pc = 0x1D1AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AFB4u;
    // 0x1d1afb8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1AFB4u, 0x1D1AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AFBCu;
label_1d1afbc:
    // 0x1d1afbc: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d1afbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d1afc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d1afc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1afc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d1afc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1afc8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d1afc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d1afcc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d1afccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d1afd0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d1afd0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1afd4: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d1afd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d1afd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1afdc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d1afdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1afe0: 0xc746426  jal         func_1D19098
    ctx->pc = 0x1D1AFE0u;
    SET_GPR_U32(ctx, 31, 0x1D1AFE8u);
    ctx->pc = 0x1D1AFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AFE0u;
    // 0x1d1afe4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19098u, 0x1D1AFE0u, 0x1D1AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AFE8u;
label_1d1afe8:
    // 0x1d1afe8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d1afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d1afec: 0xc74641a  jal         func_1D19068
    ctx->pc = 0x1D1AFECu;
    SET_GPR_U32(ctx, 31, 0x1D1AFF4u);
    ctx->pc = 0x1D1AFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AFECu;
    // 0x1d1aff0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19068u, 0x1D1AFECu, 0x1D1AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1AFF4u;
label_1d1aff4:
    // 0x1d1aff4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d1aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1aff8: 0xc74642a  jal         func_1D190A8
    ctx->pc = 0x1D1AFF8u;
    SET_GPR_U32(ctx, 31, 0x1D1B000u);
    ctx->pc = 0x1D1AFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AFF8u;
    // 0x1d1affc: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D190A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D190A8u, 0x1D1AFF8u, 0x1D1B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B000u;
label_1d1b000:
    // 0x1d1b000: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d1b000u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1b004: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d1b004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d1b008: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B008u;
        // 0x1d1b00c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B010u;
}
