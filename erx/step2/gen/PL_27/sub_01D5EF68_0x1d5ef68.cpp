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

// Function: sub_01D5EF68
// Address: 0x1d5ef68 - 0x1d5f078
void sub_01D5EF68_0x1d5ef68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5EF68_0x1d5ef68");
#endif

    switch (ctx->pc) {
        case 0x1d5ef88u: goto label_1d5ef88;
        case 0x1d5ef9cu: goto label_1d5ef9c;
        case 0x1d5efa0u: goto label_1d5efa0;
        case 0x1d5efbcu: goto label_1d5efbc;
        case 0x1d5efccu: goto label_1d5efcc;
        case 0x1d5f018u: goto label_1d5f018;
        case 0x1d5f054u: goto label_1d5f054;
        case 0x1d5f060u: goto label_1d5f060;
        default: break;
    }

    ctx->pc = 0x1d5ef68u;

    // 0x1d5ef68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5ef68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5ef6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5ef70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5ef74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5ef74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5ef78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d5ef78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ef7c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5ef7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d5ef80: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EF80u;
    SET_GPR_U32(ctx, 31, 0x1D5EF88u);
    ctx->pc = 0x1D5EF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EF80u;
    // 0x1d5ef84: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EF80u, 0x1D5EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EF88u;
label_1d5ef88:
    // 0x1d5ef88: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d5ef88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5ef8c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5EF8Cu;
    {
        const bool branch_taken_0x1d5ef8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EF8Cu;
        // 0x1d5ef90: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ef8c) {
            ctx->pc = 0x1D5EFD8u;
            goto label_1d5efd8;
        }
    }
    ctx->pc = 0x1D5EF94u;
    // 0x1d5ef94: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5EF94u;
    {
        const bool branch_taken_0x1d5ef94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d5ef94) {
            ctx->pc = 0x1D5EFB4u;
            goto label_1d5efb4;
        }
    }
    ctx->pc = 0x1D5EF9Cu;
label_1d5ef9c:
    // 0x1d5ef9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5ef9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5efa0:
    // 0x1d5efa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5efa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5efa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5efa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5efa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5efa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5efac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFACu;
        // 0x1d5efb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EFB4u;
label_1d5efb4:
    // 0x1d5efb4: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5EFB4u;
    SET_GPR_U32(ctx, 31, 0x1D5EFBCu);
    ctx->pc = 0x1D5EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EFB4u;
    // 0x1d5efb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5EFB4u, 0x1D5EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EFBCu;
label_1d5efbc:
    // 0x1d5efbc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5EFBCu;
    {
        const bool branch_taken_0x1d5efbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D5EFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFBCu;
        // 0x1d5efc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5efbc) {
            ctx->pc = 0x1D5EF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ef9c;
        }
    }
    ctx->pc = 0x1D5EFC4u;
    // 0x1d5efc4: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5EFC4u;
    SET_GPR_U32(ctx, 31, 0x1D5EFCCu);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5EFC4u, 0x1D5EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EFCCu;
label_1d5efcc:
    // 0x1d5efcc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D5EFCCu;
    {
        const bool branch_taken_0x1d5efcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFCCu;
        // 0x1d5efd0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5efcc) {
            ctx->pc = 0x1D5EFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5efa0;
        }
    }
    ctx->pc = 0x1D5EFD4u;
    // 0x1d5efd4: 0x0  nop
    ctx->pc = 0x1d5efd4u;
    // NOP
label_1d5efd8:
    // 0x1d5efd8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d5efd8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d5efdc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D5EFDCu;
    {
        const bool branch_taken_0x1d5efdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EFDCu;
        // 0x1d5efe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5efdc) {
            ctx->pc = 0x1D5EFA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5efa0;
        }
    }
    ctx->pc = 0x1D5EFE4u;
    // 0x1d5efe4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d5efe4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d5efe8: 0x3c0e01d6  lui         $t6, 0x1D6
    ctx->pc = 0x1d5efe8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)470 << 16));
    // 0x1d5efec: 0x25ce0988  addiu       $t6, $t6, 0x988
    ctx->pc = 0x1d5efecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2440));
    // 0x1d5eff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5eff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eff4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5eff4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d5eff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5eff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5effc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d5effcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d5f000: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5f000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f004: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d5f004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d5f008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5f008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f00c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5f00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f010: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5F010u;
    SET_GPR_U32(ctx, 31, 0x1D5F018u);
    ctx->pc = 0x1D5F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F010u;
    // 0x1d5f014: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5F010u, 0x1D5F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F018u;
label_1d5f018:
    // 0x1d5f018: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5f018u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f01c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D5F01Cu;
    {
        const bool branch_taken_0x1d5f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F01Cu;
        // 0x1d5f020: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f01c) {
            ctx->pc = 0x1D5EF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5ef9c;
        }
    }
    ctx->pc = 0x1D5F024u;
    // 0x1d5f024: 0x0  nop
    ctx->pc = 0x1d5f024u;
    // NOP
    // 0x1d5f028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f02c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5f02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5f030: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5f034: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5f034u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5f03c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5f03cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f040: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5f040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f044: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5f044u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5f048: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5f048u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f04c: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5F04Cu;
    SET_GPR_U32(ctx, 31, 0x1D5F054u);
    ctx->pc = 0x1D5F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F04Cu;
    // 0x1d5f050: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5F04Cu, 0x1D5F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F054u;
label_1d5f054:
    // 0x1d5f054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5f058: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5F058u;
    SET_GPR_U32(ctx, 31, 0x1D5F060u);
    ctx->pc = 0x1D5F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F058u;
    // 0x1d5f05c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5F058u, 0x1D5F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F060u;
label_1d5f060:
    // 0x1d5f060: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5f060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5f064: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5f064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5f068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5f068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f06c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5F06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F06Cu;
        // 0x1d5f070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5F06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5F074u;
    // 0x1d5f074: 0x0  nop
    ctx->pc = 0x1d5f074u;
    // NOP
    ctx->pc = 0x1d5f078u;
}
