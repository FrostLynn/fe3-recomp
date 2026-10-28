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

// Function: sub_01D27A00
// Address: 0x1d27a00 - 0x1d27b28
void sub_01D27A00_0x1d27a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27A00_0x1d27a00");
#endif

    switch (ctx->pc) {
        case 0x1d27a28u: goto label_1d27a28;
        case 0x1d27a3cu: goto label_1d27a3c;
        case 0x1d27a40u: goto label_1d27a40;
        case 0x1d27a60u: goto label_1d27a60;
        case 0x1d27a70u: goto label_1d27a70;
        case 0x1d27aa4u: goto label_1d27aa4;
        case 0x1d27adcu: goto label_1d27adc;
        case 0x1d27ae8u: goto label_1d27ae8;
        case 0x1d27af8u: goto label_1d27af8;
        case 0x1d27b10u: goto label_1d27b10;
        default: break;
    }

    ctx->pc = 0x1d27a00u;

    // 0x1d27a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d27a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d27a04: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d27a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d27a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27a0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d27a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d27a10: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d27a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a14: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d27a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d27a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d27a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a1c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d27a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d27a20: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27A20u;
    SET_GPR_U32(ctx, 31, 0x1D27A28u);
    ctx->pc = 0x1D27A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27A20u;
    // 0x1d27a24: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27A20u, 0x1D27A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27A28u;
label_1d27a28:
    // 0x1d27a28: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d27a28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d27a2c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D27A2Cu;
    {
        const bool branch_taken_0x1d27a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A2Cu;
        // 0x1d27a30: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27a2c) {
            ctx->pc = 0x1D27A78u;
            goto label_1d27a78;
        }
    }
    ctx->pc = 0x1D27A34u;
    // 0x1d27a34: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D27A34u;
    {
        const bool branch_taken_0x1d27a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d27a34) {
            ctx->pc = 0x1D27A58u;
            goto label_1d27a58;
        }
    }
    ctx->pc = 0x1D27A3Cu;
label_1d27a3c:
    // 0x1d27a3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d27a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d27a40:
    // 0x1d27a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27a44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d27a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27a48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d27a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d27a4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d27a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d27a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A50u;
        // 0x1d27a54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27A58u;
label_1d27a58:
    // 0x1d27a58: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D27A58u;
    SET_GPR_U32(ctx, 31, 0x1D27A60u);
    ctx->pc = 0x1D27A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27A58u;
    // 0x1d27a5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D27A58u, 0x1D27A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27A60u;
label_1d27a60:
    // 0x1d27a60: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D27A60u;
    {
        const bool branch_taken_0x1d27a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D27A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A60u;
        // 0x1d27a64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27a60) {
            ctx->pc = 0x1D27A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27a3c;
        }
    }
    ctx->pc = 0x1D27A68u;
    // 0x1d27a68: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D27A68u;
    SET_GPR_U32(ctx, 31, 0x1D27A70u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D27A68u, 0x1D27A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27A70u;
label_1d27a70:
    // 0x1d27a70: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D27A70u;
    {
        const bool branch_taken_0x1d27a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A70u;
        // 0x1d27a74: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27a70) {
            ctx->pc = 0x1D27A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27a40;
        }
    }
    ctx->pc = 0x1D27A78u;
label_1d27a78:
    // 0x1d27a78: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d27a78u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d27a7c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D27A7Cu;
    {
        const bool branch_taken_0x1d27a7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D27A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A7Cu;
        // 0x1d27a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27a7c) {
            ctx->pc = 0x1D27A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27a40;
        }
    }
    ctx->pc = 0x1D27A84u;
    // 0x1d27a84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d27a84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d27a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d27a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d27a90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d27a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27a98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d27a98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27a9c: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D27A9Cu;
    SET_GPR_U32(ctx, 31, 0x1D27AA4u);
    ctx->pc = 0x1D27AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27A9Cu;
    // 0x1d27aa0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D27A9Cu, 0x1D27AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27AA4u;
label_1d27aa4:
    // 0x1d27aa4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d27aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27aa8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D27AA8u;
    {
        const bool branch_taken_0x1d27aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27AA8u;
        // 0x1d27aac: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27aa8) {
            ctx->pc = 0x1D27A3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d27a3c;
        }
    }
    ctx->pc = 0x1D27AB0u;
    // 0x1d27ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d27ab4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d27ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d27ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27abc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d27abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d27ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d27ac4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d27ac4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d27ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27acc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d27accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27ad0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d27ad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ad4: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D27AD4u;
    SET_GPR_U32(ctx, 31, 0x1D27ADCu);
    ctx->pc = 0x1D27AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27AD4u;
    // 0x1d27ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D27AD4u, 0x1D27ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27ADCu;
label_1d27adc:
    // 0x1d27adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d27adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27ae0: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D27AE0u;
    SET_GPR_U32(ctx, 31, 0x1D27AE8u);
    ctx->pc = 0x1D27AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27AE0u;
    // 0x1d27ae4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D27AE0u, 0x1D27AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27AE8u;
label_1d27ae8:
    // 0x1d27ae8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d27ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d27aec: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d27aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d27af0: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27AF0u;
    SET_GPR_U32(ctx, 31, 0x1D27AF8u);
    ctx->pc = 0x1D27AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27AF0u;
    // 0x1d27af4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27AF0u, 0x1D27AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27AF8u;
label_1d27af8:
    // 0x1d27af8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d27af8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27afc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d27afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d27b00: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d27b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d27b04: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d27b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d27b08: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27B08u;
    SET_GPR_U32(ctx, 31, 0x1D27B10u);
    ctx->pc = 0x1D27B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27B08u;
    // 0x1d27b0c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27B08u, 0x1D27B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27B10u;
label_1d27b10:
    // 0x1d27b10: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d27b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d27b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d27b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27b18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d27b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27B1Cu;
        // 0x1d27b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27B24u;
    // 0x1d27b24: 0x0  nop
    ctx->pc = 0x1d27b24u;
    // NOP
    ctx->pc = 0x1d27b28u;
}
