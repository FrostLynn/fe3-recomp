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

// Function: sub_01CB8B18
// Address: 0x1cb8b18 - 0x1cb8c50
void sub_01CB8B18_0x1cb8b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8B18_0x1cb8b18");
#endif

    switch (ctx->pc) {
        case 0x1cb8b38u: goto label_1cb8b38;
        case 0x1cb8b4cu: goto label_1cb8b4c;
        case 0x1cb8b50u: goto label_1cb8b50;
        case 0x1cb8b6cu: goto label_1cb8b6c;
        case 0x1cb8b7cu: goto label_1cb8b7c;
        case 0x1cb8bc8u: goto label_1cb8bc8;
        case 0x1cb8c04u: goto label_1cb8c04;
        case 0x1cb8c10u: goto label_1cb8c10;
        case 0x1cb8c20u: goto label_1cb8c20;
        case 0x1cb8c38u: goto label_1cb8c38;
        default: break;
    }

    ctx->pc = 0x1cb8b18u;

    // 0x1cb8b18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb8b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb8b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb8b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb8b28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb8b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8b2c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb8b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb8b30: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8B30u;
    SET_GPR_U32(ctx, 31, 0x1CB8B38u);
    ctx->pc = 0x1CB8B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8B30u;
    // 0x1cb8b34: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8B30u, 0x1CB8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B38u;
label_1cb8b38:
    // 0x1cb8b38: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cb8b38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cb8b3c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB8B3Cu;
    {
        const bool branch_taken_0x1cb8b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B3Cu;
        // 0x1cb8b40: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8b3c) {
            ctx->pc = 0x1CB8B88u;
            goto label_1cb8b88;
        }
    }
    ctx->pc = 0x1CB8B44u;
    // 0x1cb8b44: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB8B44u;
    {
        const bool branch_taken_0x1cb8b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cb8b44) {
            ctx->pc = 0x1CB8B64u;
            goto label_1cb8b64;
        }
    }
    ctx->pc = 0x1CB8B4Cu;
label_1cb8b4c:
    // 0x1cb8b4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb8b4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8b50:
    // 0x1cb8b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8b54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8b54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8b58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb8b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb8b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B5Cu;
        // 0x1cb8b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8B64u;
label_1cb8b64:
    // 0x1cb8b64: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB8B64u;
    SET_GPR_U32(ctx, 31, 0x1CB8B6Cu);
    ctx->pc = 0x1CB8B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8B64u;
    // 0x1cb8b68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB8B64u, 0x1CB8B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B6Cu;
label_1cb8b6c:
    // 0x1cb8b6c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB8B6Cu;
    {
        const bool branch_taken_0x1cb8b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CB8B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B6Cu;
        // 0x1cb8b70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8b6c) {
            ctx->pc = 0x1CB8B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8b4c;
        }
    }
    ctx->pc = 0x1CB8B74u;
    // 0x1cb8b74: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8B74u;
    SET_GPR_U32(ctx, 31, 0x1CB8B7Cu);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8B74u, 0x1CB8B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B7Cu;
label_1cb8b7c:
    // 0x1cb8b7c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB8B7Cu;
    {
        const bool branch_taken_0x1cb8b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B7Cu;
        // 0x1cb8b80: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8b7c) {
            ctx->pc = 0x1CB8B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8b50;
        }
    }
    ctx->pc = 0x1CB8B84u;
    // 0x1cb8b84: 0x0  nop
    ctx->pc = 0x1cb8b84u;
    // NOP
label_1cb8b88:
    // 0x1cb8b88: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cb8b88u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cb8b8c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CB8B8Cu;
    {
        const bool branch_taken_0x1cb8b8c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B8Cu;
        // 0x1cb8b90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8b8c) {
            ctx->pc = 0x1CB8B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8b50;
        }
    }
    ctx->pc = 0x1CB8B94u;
    // 0x1cb8b94: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cb8b94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb8b98: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cb8b98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8b9c: 0x25cebc90  addiu       $t6, $t6, -0x4370
    ctx->pc = 0x1cb8b9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950032));
    // 0x1cb8ba0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb8ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8ba4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cb8ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cb8ba8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8bac: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb8bacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb8bb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8bb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8bb4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cb8bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb8bb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8bb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8bbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb8bbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8bc0: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8BC0u;
    SET_GPR_U32(ctx, 31, 0x1CB8BC8u);
    ctx->pc = 0x1CB8BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8BC0u;
    // 0x1cb8bc4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8BC0u, 0x1CB8BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8BC8u;
label_1cb8bc8:
    // 0x1cb8bc8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8bc8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8bcc: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CB8BCCu;
    {
        const bool branch_taken_0x1cb8bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8BCCu;
        // 0x1cb8bd0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8bcc) {
            ctx->pc = 0x1CB8B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8b4c;
        }
    }
    ctx->pc = 0x1CB8BD4u;
    // 0x1cb8bd4: 0x0  nop
    ctx->pc = 0x1cb8bd4u;
    // NOP
    // 0x1cb8bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8bdc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb8bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb8be0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb8bec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb8bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8bf4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb8bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8bf8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb8bf8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8bfc: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8BFCu;
    SET_GPR_U32(ctx, 31, 0x1CB8C04u);
    ctx->pc = 0x1CB8C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8BFCu;
    // 0x1cb8c00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8BFCu, 0x1CB8C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C04u;
label_1cb8c04:
    // 0x1cb8c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8c08: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8C08u;
    SET_GPR_U32(ctx, 31, 0x1CB8C10u);
    ctx->pc = 0x1CB8C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8C08u;
    // 0x1cb8c0c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8C08u, 0x1CB8C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C10u;
label_1cb8c10:
    // 0x1cb8c10: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb8c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb8c14: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb8c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb8c18: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8C18u;
    SET_GPR_U32(ctx, 31, 0x1CB8C20u);
    ctx->pc = 0x1CB8C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8C18u;
    // 0x1cb8c1c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8C18u, 0x1CB8C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C20u;
label_1cb8c20:
    // 0x1cb8c20: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8c20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8c24: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cb8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cb8c28: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cb8c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cb8c2c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb8c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb8c30: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8C30u;
    SET_GPR_U32(ctx, 31, 0x1CB8C38u);
    ctx->pc = 0x1CB8C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8C30u;
    // 0x1cb8c34: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8C30u, 0x1CB8C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8C38u;
label_1cb8c38:
    // 0x1cb8c38: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cb8c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cb8c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8c40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8c44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8C44u;
        // 0x1cb8c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8C4Cu;
    // 0x1cb8c4c: 0x0  nop
    ctx->pc = 0x1cb8c4cu;
    // NOP
    ctx->pc = 0x1cb8c50u;
}
