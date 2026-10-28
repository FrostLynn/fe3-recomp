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

// Function: sub_01C119E0
// Address: 0x1c119e0 - 0x1c11b18
void sub_01C119E0_0x1c119e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C119E0_0x1c119e0");
#endif

    switch (ctx->pc) {
        case 0x1c11a00u: goto label_1c11a00;
        case 0x1c11a14u: goto label_1c11a14;
        case 0x1c11a18u: goto label_1c11a18;
        case 0x1c11a34u: goto label_1c11a34;
        case 0x1c11a44u: goto label_1c11a44;
        case 0x1c11a90u: goto label_1c11a90;
        case 0x1c11accu: goto label_1c11acc;
        case 0x1c11ad8u: goto label_1c11ad8;
        case 0x1c11ae8u: goto label_1c11ae8;
        case 0x1c11b00u: goto label_1c11b00;
        default: break;
    }

    ctx->pc = 0x1c119e0u;

    // 0x1c119e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c119e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c119e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c119e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c119e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c119e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c119ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c119ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c119f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c119f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c119f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c119f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c119f8: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C119F8u;
    SET_GPR_U32(ctx, 31, 0x1C11A00u);
    ctx->pc = 0x1C119FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C119F8u;
    // 0x1c119fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C119F8u, 0x1C11A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11A00u;
label_1c11a00:
    // 0x1c11a00: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c11a00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c11a04: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C11A04u;
    {
        const bool branch_taken_0x1c11a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A04u;
        // 0x1c11a08: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a04) {
            ctx->pc = 0x1C11A50u;
            goto label_1c11a50;
        }
    }
    ctx->pc = 0x1C11A0Cu;
    // 0x1c11a0c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C11A0Cu;
    {
        const bool branch_taken_0x1c11a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c11a0c) {
            ctx->pc = 0x1C11A2Cu;
            goto label_1c11a2c;
        }
    }
    ctx->pc = 0x1C11A14u;
label_1c11a14:
    // 0x1c11a14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c11a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c11a18:
    // 0x1c11a18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11a18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11a1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c11a1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11a20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c11a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c11a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A24u;
        // 0x1c11a28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11A2Cu;
label_1c11a2c:
    // 0x1c11a2c: 0xc703dd2  jal         func_1C0F748
    ctx->pc = 0x1C11A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C11A34u);
    ctx->pc = 0x1C11A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11A2Cu;
    // 0x1c11a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F748u, 0x1C11A2Cu, 0x1C11A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11A34u;
label_1c11a34:
    // 0x1c11a34: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C11A34u;
    {
        const bool branch_taken_0x1c11a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C11A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A34u;
        // 0x1c11a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a34) {
            ctx->pc = 0x1C11A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11a14;
        }
    }
    ctx->pc = 0x1C11A3Cu;
    // 0x1c11a3c: 0xc703dd4  jal         func_1C0F750
    ctx->pc = 0x1C11A3Cu;
    SET_GPR_U32(ctx, 31, 0x1C11A44u);
    ctx->pc = 0x1C0F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F750u, 0x1C11A3Cu, 0x1C11A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11A44u;
label_1c11a44:
    // 0x1c11a44: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C11A44u;
    {
        const bool branch_taken_0x1c11a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A44u;
        // 0x1c11a48: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a44) {
            ctx->pc = 0x1C11A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11a18;
        }
    }
    ctx->pc = 0x1C11A4Cu;
    // 0x1c11a4c: 0x0  nop
    ctx->pc = 0x1c11a4cu;
    // NOP
label_1c11a50:
    // 0x1c11a50: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c11a50u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c11a54: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C11A54u;
    {
        const bool branch_taken_0x1c11a54 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A54u;
        // 0x1c11a58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a54) {
            ctx->pc = 0x1C11A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11a18;
        }
    }
    ctx->pc = 0x1C11A5Cu;
    // 0x1c11a5c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c11a5cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c11a60: 0x3c0e01c2  lui         $t6, 0x1C2
    ctx->pc = 0x1c11a60u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
    // 0x1c11a64: 0x25ce9330  addiu       $t6, $t6, -0x6CD0
    ctx->pc = 0x1c11a64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939440));
    // 0x1c11a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c11a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11a6c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c11a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c11a70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c11a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11a74: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c11a74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c11a78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11a78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11a7c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c11a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c11a80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11a80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11a84: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c11a84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11a88: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11A88u;
    SET_GPR_U32(ctx, 31, 0x1C11A90u);
    ctx->pc = 0x1C11A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11A88u;
    // 0x1c11a8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11A88u, 0x1C11A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11A90u;
label_1c11a90:
    // 0x1c11a90: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c11a90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11a94: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C11A94u;
    {
        const bool branch_taken_0x1c11a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11A94u;
        // 0x1c11a98: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11a94) {
            ctx->pc = 0x1C11A14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c11a14;
        }
    }
    ctx->pc = 0x1C11A9Cu;
    // 0x1c11a9c: 0x0  nop
    ctx->pc = 0x1c11a9cu;
    // NOP
    // 0x1c11aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11aa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c11aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c11aa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11aac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c11aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c11ab4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c11ab4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11ab8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c11ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11abc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c11abcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11ac0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c11ac0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11ac4: 0xc703de2  jal         func_1C0F788
    ctx->pc = 0x1C11AC4u;
    SET_GPR_U32(ctx, 31, 0x1C11ACCu);
    ctx->pc = 0x1C11AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11AC4u;
    // 0x1c11ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F788u, 0x1C11AC4u, 0x1C11ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11ACCu;
label_1c11acc:
    // 0x1c11acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c11accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c11ad0: 0xc703dda  jal         func_1C0F768
    ctx->pc = 0x1C11AD0u;
    SET_GPR_U32(ctx, 31, 0x1C11AD8u);
    ctx->pc = 0x1C11AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11AD0u;
    // 0x1c11ad4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F768u, 0x1C11AD0u, 0x1C11AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11AD8u;
label_1c11ad8:
    // 0x1c11ad8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c11adc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c11adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c11ae0: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11AE0u;
    SET_GPR_U32(ctx, 31, 0x1C11AE8u);
    ctx->pc = 0x1C11AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11AE0u;
    // 0x1c11ae4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11AE0u, 0x1C11AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11AE8u;
label_1c11ae8:
    // 0x1c11ae8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c11ae8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c11aec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c11aecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c11af0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c11af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c11af4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c11af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c11af8: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11AF8u;
    SET_GPR_U32(ctx, 31, 0x1C11B00u);
    ctx->pc = 0x1C11AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11AF8u;
    // 0x1c11afc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11AF8u, 0x1C11B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11B00u;
label_1c11b00:
    // 0x1c11b00: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c11b00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c11b04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11b08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c11b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11B0Cu;
        // 0x1c11b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11B14u;
    // 0x1c11b14: 0x0  nop
    ctx->pc = 0x1c11b14u;
    // NOP
    ctx->pc = 0x1c11b18u;
}
