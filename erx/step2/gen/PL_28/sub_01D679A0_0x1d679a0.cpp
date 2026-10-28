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

// Function: sub_01D679A0
// Address: 0x1d679a0 - 0x1d67ad8
void sub_01D679A0_0x1d679a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D679A0_0x1d679a0");
#endif

    switch (ctx->pc) {
        case 0x1d679c0u: goto label_1d679c0;
        case 0x1d679d4u: goto label_1d679d4;
        case 0x1d679d8u: goto label_1d679d8;
        case 0x1d679f4u: goto label_1d679f4;
        case 0x1d67a04u: goto label_1d67a04;
        case 0x1d67a50u: goto label_1d67a50;
        case 0x1d67a8cu: goto label_1d67a8c;
        case 0x1d67a98u: goto label_1d67a98;
        case 0x1d67aa8u: goto label_1d67aa8;
        case 0x1d67ac0u: goto label_1d67ac0;
        default: break;
    }

    ctx->pc = 0x1d679a0u;

    // 0x1d679a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d679a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d679a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d679a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d679a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d679a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d679ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d679acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d679b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d679b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d679b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d679b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d679b8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D679B8u;
    SET_GPR_U32(ctx, 31, 0x1D679C0u);
    ctx->pc = 0x1D679BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D679B8u;
    // 0x1d679bc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D679B8u, 0x1D679C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D679C0u;
label_1d679c0:
    // 0x1d679c0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d679c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d679c4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D679C4u;
    {
        const bool branch_taken_0x1d679c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D679C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D679C4u;
        // 0x1d679c8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d679c4) {
            ctx->pc = 0x1D67A10u;
            goto label_1d67a10;
        }
    }
    ctx->pc = 0x1D679CCu;
    // 0x1d679cc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D679CCu;
    {
        const bool branch_taken_0x1d679cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d679cc) {
            ctx->pc = 0x1D679ECu;
            goto label_1d679ec;
        }
    }
    ctx->pc = 0x1D679D4u;
label_1d679d4:
    // 0x1d679d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d679d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d679d8:
    // 0x1d679d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d679d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d679dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d679dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d679e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d679e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d679e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D679E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D679E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D679E4u;
        // 0x1d679e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D679E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D679ECu;
label_1d679ec:
    // 0x1d679ec: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D679ECu;
    SET_GPR_U32(ctx, 31, 0x1D679F4u);
    ctx->pc = 0x1D679F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D679ECu;
    // 0x1d679f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D679ECu, 0x1D679F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D679F4u;
label_1d679f4:
    // 0x1d679f4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D679F4u;
    {
        const bool branch_taken_0x1d679f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D679F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D679F4u;
        // 0x1d679f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d679f4) {
            ctx->pc = 0x1D679D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d679d4;
        }
    }
    ctx->pc = 0x1D679FCu;
    // 0x1d679fc: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D679FCu;
    SET_GPR_U32(ctx, 31, 0x1D67A04u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D679FCu, 0x1D67A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67A04u;
label_1d67a04:
    // 0x1d67a04: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D67A04u;
    {
        const bool branch_taken_0x1d67a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67A04u;
        // 0x1d67a08: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67a04) {
            ctx->pc = 0x1D679D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d679d8;
        }
    }
    ctx->pc = 0x1D67A0Cu;
    // 0x1d67a0c: 0x0  nop
    ctx->pc = 0x1d67a0cu;
    // NOP
label_1d67a10:
    // 0x1d67a10: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d67a10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d67a14: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D67A14u;
    {
        const bool branch_taken_0x1d67a14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D67A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67A14u;
        // 0x1d67a18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67a14) {
            ctx->pc = 0x1D679D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d679d8;
        }
    }
    ctx->pc = 0x1D67A1Cu;
    // 0x1d67a1c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d67a1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d67a20: 0x3c0e01d7  lui         $t6, 0x1D7
    ctx->pc = 0x1d67a20u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
    // 0x1d67a24: 0x25ce8b20  addiu       $t6, $t6, -0x74E0
    ctx->pc = 0x1d67a24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294937376));
    // 0x1d67a28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d67a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a2c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d67a2cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d67a30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a34: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d67a34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d67a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d67a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a3c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d67a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d67a40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67a40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a44: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67a44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67a48: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67A48u;
    SET_GPR_U32(ctx, 31, 0x1D67A50u);
    ctx->pc = 0x1D67A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67A48u;
    // 0x1d67a4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67A48u, 0x1D67A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67A50u;
label_1d67a50:
    // 0x1d67a50: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d67a50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67a54: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D67A54u;
    {
        const bool branch_taken_0x1d67a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67A54u;
        // 0x1d67a58: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67a54) {
            ctx->pc = 0x1D679D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d679d4;
        }
    }
    ctx->pc = 0x1D67A5Cu;
    // 0x1d67a5c: 0x0  nop
    ctx->pc = 0x1d67a5cu;
    // NOP
    // 0x1d67a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67a64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d67a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67a6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d67a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67a74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67a74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a7c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67a80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67a80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a84: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67A84u;
    SET_GPR_U32(ctx, 31, 0x1D67A8Cu);
    ctx->pc = 0x1D67A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67A84u;
    // 0x1d67a88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67A84u, 0x1D67A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67A8Cu;
label_1d67a8c:
    // 0x1d67a8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67a90: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D67A90u;
    SET_GPR_U32(ctx, 31, 0x1D67A98u);
    ctx->pc = 0x1D67A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67A90u;
    // 0x1d67a94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D67A90u, 0x1D67A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67A98u;
label_1d67a98:
    // 0x1d67a98: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d67a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d67a9c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d67a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d67aa0: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67AA0u;
    SET_GPR_U32(ctx, 31, 0x1D67AA8u);
    ctx->pc = 0x1D67AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67AA0u;
    // 0x1d67aa4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67AA0u, 0x1D67AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67AA8u;
label_1d67aa8:
    // 0x1d67aa8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d67aa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67aac: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d67aacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d67ab0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d67ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d67ab4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d67ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d67ab8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67AB8u;
    SET_GPR_U32(ctx, 31, 0x1D67AC0u);
    ctx->pc = 0x1D67ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67AB8u;
    // 0x1d67abc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67AB8u, 0x1D67AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67AC0u;
label_1d67ac0:
    // 0x1d67ac0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d67ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d67ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67ac8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D67AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67ACCu;
        // 0x1d67ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67AD4u;
    // 0x1d67ad4: 0x0  nop
    ctx->pc = 0x1d67ad4u;
    // NOP
    ctx->pc = 0x1d67ad8u;
}
