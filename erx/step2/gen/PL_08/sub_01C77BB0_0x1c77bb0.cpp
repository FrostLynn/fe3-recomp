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

// Function: sub_01C77BB0
// Address: 0x1c77bb0 - 0x1c77ce8
void sub_01C77BB0_0x1c77bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77BB0_0x1c77bb0");
#endif

    switch (ctx->pc) {
        case 0x1c77bd0u: goto label_1c77bd0;
        case 0x1c77be4u: goto label_1c77be4;
        case 0x1c77be8u: goto label_1c77be8;
        case 0x1c77c04u: goto label_1c77c04;
        case 0x1c77c14u: goto label_1c77c14;
        case 0x1c77c60u: goto label_1c77c60;
        case 0x1c77c9cu: goto label_1c77c9c;
        case 0x1c77ca8u: goto label_1c77ca8;
        case 0x1c77cb8u: goto label_1c77cb8;
        case 0x1c77cd0u: goto label_1c77cd0;
        default: break;
    }

    ctx->pc = 0x1c77bb0u;

    // 0x1c77bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c77bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c77bb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77bb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c77bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c77bbc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c77bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c77bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c77bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77bc4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c77bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c77bc8: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77BC8u;
    SET_GPR_U32(ctx, 31, 0x1C77BD0u);
    ctx->pc = 0x1C77BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77BC8u;
    // 0x1c77bcc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77BC8u, 0x1C77BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77BD0u;
label_1c77bd0:
    // 0x1c77bd0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c77bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c77bd4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C77BD4u;
    {
        const bool branch_taken_0x1c77bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77BD4u;
        // 0x1c77bd8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77bd4) {
            ctx->pc = 0x1C77C20u;
            goto label_1c77c20;
        }
    }
    ctx->pc = 0x1C77BDCu;
    // 0x1c77bdc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C77BDCu;
    {
        const bool branch_taken_0x1c77bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c77bdc) {
            ctx->pc = 0x1C77BFCu;
            goto label_1c77bfc;
        }
    }
    ctx->pc = 0x1C77BE4u;
label_1c77be4:
    // 0x1c77be4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c77be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c77be8:
    // 0x1c77be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c77becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c77bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c77bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77BF4u;
        // 0x1c77bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77BFCu;
label_1c77bfc:
    // 0x1c77bfc: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C77BFCu;
    SET_GPR_U32(ctx, 31, 0x1C77C04u);
    ctx->pc = 0x1C77C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77BFCu;
    // 0x1c77c00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C77BFCu, 0x1C77C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77C04u;
label_1c77c04:
    // 0x1c77c04: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C77C04u;
    {
        const bool branch_taken_0x1c77c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C77C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77C04u;
        // 0x1c77c08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77c04) {
            ctx->pc = 0x1C77BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77be4;
        }
    }
    ctx->pc = 0x1C77C0Cu;
    // 0x1c77c0c: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C77C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C77C14u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C77C0Cu, 0x1C77C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77C14u;
label_1c77c14:
    // 0x1c77c14: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C77C14u;
    {
        const bool branch_taken_0x1c77c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77C14u;
        // 0x1c77c18: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77c14) {
            ctx->pc = 0x1C77BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77be8;
        }
    }
    ctx->pc = 0x1C77C1Cu;
    // 0x1c77c1c: 0x0  nop
    ctx->pc = 0x1c77c1cu;
    // NOP
label_1c77c20:
    // 0x1c77c20: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c77c20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c77c24: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C77C24u;
    {
        const bool branch_taken_0x1c77c24 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C77C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77C24u;
        // 0x1c77c28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77c24) {
            ctx->pc = 0x1C77BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77be8;
        }
    }
    ctx->pc = 0x1C77C2Cu;
    // 0x1c77c2c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c77c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c77c30: 0x3c0e01c8  lui         $t6, 0x1C8
    ctx->pc = 0x1c77c30u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)456 << 16));
    // 0x1c77c34: 0x25cea6b0  addiu       $t6, $t6, -0x5950
    ctx->pc = 0x1c77c34u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944432));
    // 0x1c77c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c77c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c3c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c77c3cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c77c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c77c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c44: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c77c44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c77c48: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c77c48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c4c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c77c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c77c50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77c50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77c58: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77C58u;
    SET_GPR_U32(ctx, 31, 0x1C77C60u);
    ctx->pc = 0x1C77C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77C58u;
    // 0x1c77c5c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77C58u, 0x1C77C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77C60u;
label_1c77c60:
    // 0x1c77c60: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77c60u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77c64: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C77C64u;
    {
        const bool branch_taken_0x1c77c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77C64u;
        // 0x1c77c68: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c77c64) {
            ctx->pc = 0x1C77BE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c77be4;
        }
    }
    ctx->pc = 0x1C77C6Cu;
    // 0x1c77c6c: 0x0  nop
    ctx->pc = 0x1c77c6cu;
    // NOP
    // 0x1c77c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77c74: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c77c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c77c78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77c7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c77c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c77c84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c77c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77c8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77c90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77c90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77c94: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C77C94u;
    SET_GPR_U32(ctx, 31, 0x1C77C9Cu);
    ctx->pc = 0x1C77C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77C94u;
    // 0x1c77c98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C77C94u, 0x1C77C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77C9Cu;
label_1c77c9c:
    // 0x1c77c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77ca0: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C77CA0u;
    SET_GPR_U32(ctx, 31, 0x1C77CA8u);
    ctx->pc = 0x1C77CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77CA0u;
    // 0x1c77ca4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C77CA0u, 0x1C77CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77CA8u;
label_1c77ca8:
    // 0x1c77ca8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c77ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c77cac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c77cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c77cb0: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77CB0u;
    SET_GPR_U32(ctx, 31, 0x1C77CB8u);
    ctx->pc = 0x1C77CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77CB0u;
    // 0x1c77cb4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77CB0u, 0x1C77CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77CB8u;
label_1c77cb8:
    // 0x1c77cb8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c77cb8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77cbc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c77cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c77cc0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c77cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c77cc4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c77cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c77cc8: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C77CC8u;
    SET_GPR_U32(ctx, 31, 0x1C77CD0u);
    ctx->pc = 0x1C77CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77CC8u;
    // 0x1c77ccc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C77CC8u, 0x1C77CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77CD0u;
label_1c77cd0:
    // 0x1c77cd0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c77cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c77cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77cd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C77CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C77CDCu;
        // 0x1c77ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C77CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77CE4u;
    // 0x1c77ce4: 0x0  nop
    ctx->pc = 0x1c77ce4u;
    // NOP
    ctx->pc = 0x1c77ce8u;
}
