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

// Function: sub_01C11B40
// Address: 0x1c11b40 - 0x1c11c50
void sub_01C11B40_0x1c11b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11B40_0x1c11b40");
#endif

    switch (ctx->pc) {
        case 0x1c11b60u: goto label_1c11b60;
        case 0x1c11b74u: goto label_1c11b74;
        case 0x1c11b78u: goto label_1c11b78;
        case 0x1c11b94u: goto label_1c11b94;
        case 0x1c11ba4u: goto label_1c11ba4;
        case 0x1c11bf0u: goto label_1c11bf0;
        case 0x1c11c2cu: goto label_1c11c2c;
        case 0x1c11c38u: goto label_1c11c38;
        default: break;
    }

    ctx->pc = 0x1c11b40u;

    // 0x1c11b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c11b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c11b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11b48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c11b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c11b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c11b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c11b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c11b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11b54: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c11b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c11b58: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11B58u;
    SET_GPR_U32(ctx, 31, 0x1C11B60u);
    ctx->pc = 0x1C11B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B58u;
    // 0x1c11b5c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11B58u, 0x1C11B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11B60u;
label_1c11b60:
    // 0x1c11b60: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c11b60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c11b64: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C11B64u;
    {
        const bool branch_taken_0x1c11b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B64u;
        // 0x1c11b68: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11b64) {
            ctx->pc = 0x1C11BB0u;
            goto label_1c11bb0;
        }
    }
    ctx->pc = 0x1C11B6Cu;
    // 0x1c11b6c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C11B6Cu;
    {
        const bool branch_taken_0x1c11b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c11b6c) {
            ctx->pc = 0x1C11B8Cu;
            goto label_1c11b8c;
        }
    }
    ctx->pc = 0x1C11B74u;
label_1c11b74:
    // 0x1c11b74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c11b74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c11b78:
    // 0x1c11b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c11b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11b80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c11b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B84u;
        // 0x1c11b88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11B8Cu;
label_1c11b8c:
    // 0x1c11b8c: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C11B8Cu;
    SET_GPR_U32(ctx, 31, 0x1C11B94u);
    ctx->pc = 0x1C11B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11B8Cu;
    // 0x1c11b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C11B8Cu, 0x1C11B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11B94u;
label_1c11b94:
    // 0x1c11b94: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C11B94u;
    {
        const bool branch_taken_0x1c11b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C11B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B94u;
        // 0x1c11b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11b94) {
            ctx->pc = 0x1C11B74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11b74;
        }
    }
    ctx->pc = 0x1C11B9Cu;
    // 0x1c11b9c: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C11B9Cu;
    SET_GPR_U32(ctx, 31, 0x1C11BA4u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C11B9Cu, 0x1C11BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11BA4u;
label_1c11ba4:
    // 0x1c11ba4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C11BA4u;
    {
        const bool branch_taken_0x1c11ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11BA4u;
        // 0x1c11ba8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11ba4) {
            ctx->pc = 0x1C11B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11b78;
        }
    }
    ctx->pc = 0x1C11BACu;
    // 0x1c11bac: 0x0  nop
    ctx->pc = 0x1c11bacu;
    // NOP
label_1c11bb0:
    // 0x1c11bb0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c11bb0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c11bb4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C11BB4u;
    {
        const bool branch_taken_0x1c11bb4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11BB4u;
        // 0x1c11bb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11bb4) {
            ctx->pc = 0x1C11B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11b78;
        }
    }
    ctx->pc = 0x1C11BBCu;
    // 0x1c11bbc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c11bbcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c11bc0: 0x3c0e01c2  lui         $t6, 0x1C2
    ctx->pc = 0x1c11bc0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
    // 0x1c11bc4: 0x25ce9340  addiu       $t6, $t6, -0x6CC0
    ctx->pc = 0x1c11bc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939456));
    // 0x1c11bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11bcc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c11bccu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c11bd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11bd4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c11bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c11bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11bdc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c11bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c11be0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11be0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11be4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c11be4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11be8: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11BE8u;
    SET_GPR_U32(ctx, 31, 0x1C11BF0u);
    ctx->pc = 0x1C11BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11BE8u;
    // 0x1c11bec: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11BE8u, 0x1C11BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11BF0u;
label_1c11bf0:
    // 0x1c11bf0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c11bf0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11bf4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C11BF4u;
    {
        const bool branch_taken_0x1c11bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11BF4u;
        // 0x1c11bf8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11bf4) {
            ctx->pc = 0x1C11B74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11b74;
        }
    }
    ctx->pc = 0x1C11BFCu;
    // 0x1c11bfc: 0x0  nop
    ctx->pc = 0x1c11bfcu;
    // NOP
    // 0x1c11c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11c04: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c11c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c11c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11c0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c11c14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c11c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c11c1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11c20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11c20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c24: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11C24u;
    SET_GPR_U32(ctx, 31, 0x1C11C2Cu);
    ctx->pc = 0x1C11C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C24u;
    // 0x1c11c28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11C24u, 0x1C11C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C2Cu;
label_1c11c2c:
    // 0x1c11c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11c30: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C11C30u;
    SET_GPR_U32(ctx, 31, 0x1C11C38u);
    ctx->pc = 0x1C11C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11C30u;
    // 0x1c11c34: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C11C30u, 0x1C11C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11C38u;
label_1c11c38:
    // 0x1c11c38: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c11c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c11c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c11c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11c40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11c40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11c44: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11C44u;
        // 0x1c11c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11C4Cu;
    // 0x1c11c4c: 0x0  nop
    ctx->pc = 0x1c11c4cu;
    // NOP
    ctx->pc = 0x1c11c50u;
}
