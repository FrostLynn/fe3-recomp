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

// Function: sub_01C51A78
// Address: 0x1c51a78 - 0x1c51b88
void sub_01C51A78_0x1c51a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51A78_0x1c51a78");
#endif

    switch (ctx->pc) {
        case 0x1c51a98u: goto label_1c51a98;
        case 0x1c51aacu: goto label_1c51aac;
        case 0x1c51ab0u: goto label_1c51ab0;
        case 0x1c51accu: goto label_1c51acc;
        case 0x1c51adcu: goto label_1c51adc;
        case 0x1c51b28u: goto label_1c51b28;
        case 0x1c51b64u: goto label_1c51b64;
        case 0x1c51b70u: goto label_1c51b70;
        default: break;
    }

    ctx->pc = 0x1c51a78u;

    // 0x1c51a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c51a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c51a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c51a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c51a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c51a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c51a88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c51a88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51a8c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c51a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c51a90: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C51A90u;
    SET_GPR_U32(ctx, 31, 0x1C51A98u);
    ctx->pc = 0x1C51A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51A90u;
    // 0x1c51a94: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C51A90u, 0x1C51A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51A98u;
label_1c51a98:
    // 0x1c51a98: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c51a98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c51a9c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C51A9Cu;
    {
        const bool branch_taken_0x1c51a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51A9Cu;
        // 0x1c51aa0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51a9c) {
            ctx->pc = 0x1C51AE8u;
            goto label_1c51ae8;
        }
    }
    ctx->pc = 0x1C51AA4u;
    // 0x1c51aa4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C51AA4u;
    {
        const bool branch_taken_0x1c51aa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c51aa4) {
            ctx->pc = 0x1C51AC4u;
            goto label_1c51ac4;
        }
    }
    ctx->pc = 0x1C51AACu;
label_1c51aac:
    // 0x1c51aac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c51aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c51ab0:
    // 0x1c51ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51ab4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c51ab4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51ab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c51ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c51abc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51ABCu;
        // 0x1c51ac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51AC4u;
label_1c51ac4:
    // 0x1c51ac4: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C51AC4u;
    SET_GPR_U32(ctx, 31, 0x1C51ACCu);
    ctx->pc = 0x1C51AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51AC4u;
    // 0x1c51ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C51AC4u, 0x1C51ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51ACCu;
label_1c51acc:
    // 0x1c51acc: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C51ACCu;
    {
        const bool branch_taken_0x1c51acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C51AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51ACCu;
        // 0x1c51ad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51acc) {
            ctx->pc = 0x1C51AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51aac;
        }
    }
    ctx->pc = 0x1C51AD4u;
    // 0x1c51ad4: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C51AD4u;
    SET_GPR_U32(ctx, 31, 0x1C51ADCu);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C51AD4u, 0x1C51ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51ADCu;
label_1c51adc:
    // 0x1c51adc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C51ADCu;
    {
        const bool branch_taken_0x1c51adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51ADCu;
        // 0x1c51ae0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51adc) {
            ctx->pc = 0x1C51AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51ab0;
        }
    }
    ctx->pc = 0x1C51AE4u;
    // 0x1c51ae4: 0x0  nop
    ctx->pc = 0x1c51ae4u;
    // NOP
label_1c51ae8:
    // 0x1c51ae8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c51ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c51aec: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C51AECu;
    {
        const bool branch_taken_0x1c51aec = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C51AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51AECu;
        // 0x1c51af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51aec) {
            ctx->pc = 0x1C51AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51ab0;
        }
    }
    ctx->pc = 0x1C51AF4u;
    // 0x1c51af4: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c51af4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c51af8: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c51af8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c51afc: 0x25ce99f0  addiu       $t6, $t6, -0x6610
    ctx->pc = 0x1c51afcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941168));
    // 0x1c51b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c51b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b04: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c51b04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c51b08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c51b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b0c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c51b0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c51b10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c51b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b14: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c51b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c51b18: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b1c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51b20: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51B20u;
    SET_GPR_U32(ctx, 31, 0x1C51B28u);
    ctx->pc = 0x1C51B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51B20u;
    // 0x1c51b24: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51B20u, 0x1C51B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B28u;
label_1c51b28:
    // 0x1c51b28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c51b28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51b2c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C51B2Cu;
    {
        const bool branch_taken_0x1c51b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C51B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51B2Cu;
        // 0x1c51b30: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c51b2c) {
            ctx->pc = 0x1C51AACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c51aac;
        }
    }
    ctx->pc = 0x1C51B34u;
    // 0x1c51b34: 0x0  nop
    ctx->pc = 0x1c51b34u;
    // NOP
    // 0x1c51b38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51b3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c51b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c51b40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c51b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c51b44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c51b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c51b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c51b4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c51b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c51b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c51b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c51b58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c51b58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b5c: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C51B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C51B64u);
    ctx->pc = 0x1C51B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51B5Cu;
    // 0x1c51b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C51B5Cu, 0x1C51B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B64u;
label_1c51b64:
    // 0x1c51b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c51b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c51b68: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C51B68u;
    SET_GPR_U32(ctx, 31, 0x1C51B70u);
    ctx->pc = 0x1C51B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51B68u;
    // 0x1c51b6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C51B68u, 0x1C51B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C51B70u;
label_1c51b70:
    // 0x1c51b70: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c51b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c51b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c51b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c51b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c51b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C51B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C51B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C51B7Cu;
        // 0x1c51b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C51B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C51B84u;
    // 0x1c51b84: 0x0  nop
    ctx->pc = 0x1c51b84u;
    // NOP
    ctx->pc = 0x1c51b88u;
}
