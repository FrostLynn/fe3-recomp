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

// Function: sub_01C9AE78
// Address: 0x1c9ae78 - 0x1c9af88
void sub_01C9AE78_0x1c9ae78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AE78_0x1c9ae78");
#endif

    switch (ctx->pc) {
        case 0x1c9ae98u: goto label_1c9ae98;
        case 0x1c9aeacu: goto label_1c9aeac;
        case 0x1c9aeb0u: goto label_1c9aeb0;
        case 0x1c9aeccu: goto label_1c9aecc;
        case 0x1c9aedcu: goto label_1c9aedc;
        case 0x1c9af28u: goto label_1c9af28;
        case 0x1c9af64u: goto label_1c9af64;
        case 0x1c9af70u: goto label_1c9af70;
        default: break;
    }

    ctx->pc = 0x1c9ae78u;

    // 0x1c9ae78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9ae78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9ae7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9ae7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9ae80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9ae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9ae84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9ae84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9ae88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9ae88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9ae8c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9ae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9ae90: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9AE90u;
    SET_GPR_U32(ctx, 31, 0x1C9AE98u);
    ctx->pc = 0x1C9AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AE90u;
    // 0x1c9ae94: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9AE90u, 0x1C9AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AE98u;
label_1c9ae98:
    // 0x1c9ae98: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c9ae98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c9ae9c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C9AE9Cu;
    {
        const bool branch_taken_0x1c9ae9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AE9Cu;
        // 0x1c9aea0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ae9c) {
            ctx->pc = 0x1C9AEE8u;
            goto label_1c9aee8;
        }
    }
    ctx->pc = 0x1C9AEA4u;
    // 0x1c9aea4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C9AEA4u;
    {
        const bool branch_taken_0x1c9aea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c9aea4) {
            ctx->pc = 0x1C9AEC4u;
            goto label_1c9aec4;
        }
    }
    ctx->pc = 0x1C9AEACu;
label_1c9aeac:
    // 0x1c9aeac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9aeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9aeb0:
    // 0x1c9aeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9aeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9aeb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9aeb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9aeb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9aebc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AEBCu;
        // 0x1c9aec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AEC4u;
label_1c9aec4:
    // 0x1c9aec4: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9AEC4u;
    SET_GPR_U32(ctx, 31, 0x1C9AECCu);
    ctx->pc = 0x1C9AEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AEC4u;
    // 0x1c9aec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9AEC4u, 0x1C9AECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AECCu;
label_1c9aecc:
    // 0x1c9aecc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C9AECCu;
    {
        const bool branch_taken_0x1c9aecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C9AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AECCu;
        // 0x1c9aed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aecc) {
            ctx->pc = 0x1C9AEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9aeac;
        }
    }
    ctx->pc = 0x1C9AED4u;
    // 0x1c9aed4: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9AED4u;
    SET_GPR_U32(ctx, 31, 0x1C9AEDCu);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9AED4u, 0x1C9AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AEDCu;
label_1c9aedc:
    // 0x1c9aedc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C9AEDCu;
    {
        const bool branch_taken_0x1c9aedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AEDCu;
        // 0x1c9aee0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aedc) {
            ctx->pc = 0x1C9AEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9aeb0;
        }
    }
    ctx->pc = 0x1C9AEE4u;
    // 0x1c9aee4: 0x0  nop
    ctx->pc = 0x1c9aee4u;
    // NOP
label_1c9aee8:
    // 0x1c9aee8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c9aee8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c9aeec: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C9AEECu;
    {
        const bool branch_taken_0x1c9aeec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AEECu;
        // 0x1c9aef0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9aeec) {
            ctx->pc = 0x1C9AEB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9aeb0;
        }
    }
    ctx->pc = 0x1C9AEF4u;
    // 0x1c9aef4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c9aef4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c9aef8: 0x3c0e01ca  lui         $t6, 0x1CA
    ctx->pc = 0x1c9aef8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
    // 0x1c9aefc: 0x25cec8a0  addiu       $t6, $t6, -0x3760
    ctx->pc = 0x1c9aefcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953120));
    // 0x1c9af00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9af00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af04: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c9af04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c9af08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9af08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af0c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c9af0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c9af10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9af10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af14: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c9af14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c9af18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9af18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9af1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9af20: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9AF20u;
    SET_GPR_U32(ctx, 31, 0x1C9AF28u);
    ctx->pc = 0x1C9AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AF20u;
    // 0x1c9af24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9AF20u, 0x1C9AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF28u;
label_1c9af28:
    // 0x1c9af28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9af28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9af2c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C9AF2Cu;
    {
        const bool branch_taken_0x1c9af2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9AF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AF2Cu;
        // 0x1c9af30: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9af2c) {
            ctx->pc = 0x1C9AEACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9aeac;
        }
    }
    ctx->pc = 0x1C9AF34u;
    // 0x1c9af34: 0x0  nop
    ctx->pc = 0x1c9af34u;
    // NOP
    // 0x1c9af38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9af38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9af3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9af3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9af40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9af40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9af44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9af44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9af4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9af4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9af50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9af54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9af58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9af58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af5c: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9AF5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9AF64u);
    ctx->pc = 0x1C9AF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AF5Cu;
    // 0x1c9af60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9AF5Cu, 0x1C9AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF64u;
label_1c9af64:
    // 0x1c9af64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9af64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9af68: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9AF68u;
    SET_GPR_U32(ctx, 31, 0x1C9AF70u);
    ctx->pc = 0x1C9AF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AF68u;
    // 0x1c9af6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9AF68u, 0x1C9AF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AF70u;
label_1c9af70:
    // 0x1c9af70: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9af70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9af74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9af74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9af78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9af78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9af7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AF7Cu;
        // 0x1c9af80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AF7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AF84u;
    // 0x1c9af84: 0x0  nop
    ctx->pc = 0x1c9af84u;
    // NOP
    ctx->pc = 0x1c9af88u;
}
