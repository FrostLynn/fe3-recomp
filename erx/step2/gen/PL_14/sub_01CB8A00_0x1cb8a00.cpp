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

// Function: sub_01CB8A00
// Address: 0x1cb8a00 - 0x1cb8b10
void sub_01CB8A00_0x1cb8a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8A00_0x1cb8a00");
#endif

    switch (ctx->pc) {
        case 0x1cb8a20u: goto label_1cb8a20;
        case 0x1cb8a34u: goto label_1cb8a34;
        case 0x1cb8a38u: goto label_1cb8a38;
        case 0x1cb8a54u: goto label_1cb8a54;
        case 0x1cb8a64u: goto label_1cb8a64;
        case 0x1cb8ab0u: goto label_1cb8ab0;
        case 0x1cb8aecu: goto label_1cb8aec;
        case 0x1cb8af8u: goto label_1cb8af8;
        default: break;
    }

    ctx->pc = 0x1cb8a00u;

    // 0x1cb8a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8a04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8a08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb8a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb8a0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb8a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb8a10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cb8a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8a14: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb8a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb8a18: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8A18u;
    SET_GPR_U32(ctx, 31, 0x1CB8A20u);
    ctx->pc = 0x1CB8A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8A18u;
    // 0x1cb8a1c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8A18u, 0x1CB8A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8A20u;
label_1cb8a20:
    // 0x1cb8a20: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cb8a20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cb8a24: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CB8A24u;
    {
        const bool branch_taken_0x1cb8a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A24u;
        // 0x1cb8a28: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a24) {
            ctx->pc = 0x1CB8A70u;
            goto label_1cb8a70;
        }
    }
    ctx->pc = 0x1CB8A2Cu;
    // 0x1cb8a2c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB8A2Cu;
    {
        const bool branch_taken_0x1cb8a2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cb8a2c) {
            ctx->pc = 0x1CB8A4Cu;
            goto label_1cb8a4c;
        }
    }
    ctx->pc = 0x1CB8A34u;
label_1cb8a34:
    // 0x1cb8a34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb8a34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8a38:
    // 0x1cb8a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8a3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8a3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8a40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb8a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb8a44: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8A44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A44u;
        // 0x1cb8a48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8A44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8A4Cu;
label_1cb8a4c:
    // 0x1cb8a4c: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB8A4Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8A54u);
    ctx->pc = 0x1CB8A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8A4Cu;
    // 0x1cb8a50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB8A4Cu, 0x1CB8A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8A54u;
label_1cb8a54:
    // 0x1cb8a54: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CB8A54u;
    {
        const bool branch_taken_0x1cb8a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CB8A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A54u;
        // 0x1cb8a58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a54) {
            ctx->pc = 0x1CB8A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8a34;
        }
    }
    ctx->pc = 0x1CB8A5Cu;
    // 0x1cb8a5c: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8A5Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8A64u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8A5Cu, 0x1CB8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8A64u;
label_1cb8a64:
    // 0x1cb8a64: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CB8A64u;
    {
        const bool branch_taken_0x1cb8a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A64u;
        // 0x1cb8a68: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a64) {
            ctx->pc = 0x1CB8A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8a38;
        }
    }
    ctx->pc = 0x1CB8A6Cu;
    // 0x1cb8a6c: 0x0  nop
    ctx->pc = 0x1cb8a6cu;
    // NOP
label_1cb8a70:
    // 0x1cb8a70: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cb8a70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cb8a74: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CB8A74u;
    {
        const bool branch_taken_0x1cb8a74 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8A74u;
        // 0x1cb8a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8a74) {
            ctx->pc = 0x1CB8A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8a38;
        }
    }
    ctx->pc = 0x1CB8A7Cu;
    // 0x1cb8a7c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cb8a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cb8a80: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cb8a80u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8a84: 0x25cebc80  addiu       $t6, $t6, -0x4380
    ctx->pc = 0x1cb8a84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294950016));
    // 0x1cb8a88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb8a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8a8c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cb8a8cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cb8a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8a94: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb8a94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb8a98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8a9c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cb8a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb8aa0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8aa4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb8aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8aa8: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8AA8u;
    SET_GPR_U32(ctx, 31, 0x1CB8AB0u);
    ctx->pc = 0x1CB8AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8AA8u;
    // 0x1cb8aac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8AA8u, 0x1CB8AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8AB0u;
label_1cb8ab0:
    // 0x1cb8ab0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8ab4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CB8AB4u;
    {
        const bool branch_taken_0x1cb8ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8AB4u;
        // 0x1cb8ab8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8ab4) {
            ctx->pc = 0x1CB8A34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb8a34;
        }
    }
    ctx->pc = 0x1CB8ABCu;
    // 0x1cb8abc: 0x0  nop
    ctx->pc = 0x1cb8abcu;
    // NOP
    // 0x1cb8ac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8ac4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb8ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb8ac8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8acc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb8accu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8ad0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb8ad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8ad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb8ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8adc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb8adcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8ae0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb8ae0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8ae4: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB8AE4u;
    SET_GPR_U32(ctx, 31, 0x1CB8AECu);
    ctx->pc = 0x1CB8AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8AE4u;
    // 0x1cb8ae8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB8AE4u, 0x1CB8AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8AECu;
label_1cb8aec:
    // 0x1cb8aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8af0: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8AF0u;
    SET_GPR_U32(ctx, 31, 0x1CB8AF8u);
    ctx->pc = 0x1CB8AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8AF0u;
    // 0x1cb8af4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8AF0u, 0x1CB8AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8AF8u;
label_1cb8af8:
    // 0x1cb8af8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cb8af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cb8afc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8b00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8b00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8B04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B04u;
        // 0x1cb8b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8B04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8B0Cu;
    // 0x1cb8b0c: 0x0  nop
    ctx->pc = 0x1cb8b0cu;
    // NOP
    ctx->pc = 0x1cb8b10u;
}
