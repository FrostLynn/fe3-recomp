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

// Function: sub_01C619E8
// Address: 0x1c619e8 - 0x1c61b20
void sub_01C619E8_0x1c619e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C619E8_0x1c619e8");
#endif

    switch (ctx->pc) {
        case 0x1c61a08u: goto label_1c61a08;
        case 0x1c61a1cu: goto label_1c61a1c;
        case 0x1c61a20u: goto label_1c61a20;
        case 0x1c61a3cu: goto label_1c61a3c;
        case 0x1c61a4cu: goto label_1c61a4c;
        case 0x1c61a98u: goto label_1c61a98;
        case 0x1c61ad4u: goto label_1c61ad4;
        case 0x1c61ae0u: goto label_1c61ae0;
        case 0x1c61af0u: goto label_1c61af0;
        case 0x1c61b08u: goto label_1c61b08;
        default: break;
    }

    ctx->pc = 0x1c619e8u;

    // 0x1c619e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c619e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c619ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c619ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c619f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c619f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c619f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c619f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c619f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c619f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c619fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c619fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c61a00: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61A00u;
    SET_GPR_U32(ctx, 31, 0x1C61A08u);
    ctx->pc = 0x1C61A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61A00u;
    // 0x1c61a04: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61A00u, 0x1C61A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61A08u;
label_1c61a08:
    // 0x1c61a08: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c61a08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c61a0c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C61A0Cu;
    {
        const bool branch_taken_0x1c61a0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A0Cu;
        // 0x1c61a10: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a0c) {
            ctx->pc = 0x1C61A58u;
            goto label_1c61a58;
        }
    }
    ctx->pc = 0x1C61A14u;
    // 0x1c61a14: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C61A14u;
    {
        const bool branch_taken_0x1c61a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c61a14) {
            ctx->pc = 0x1C61A34u;
            goto label_1c61a34;
        }
    }
    ctx->pc = 0x1C61A1Cu;
label_1c61a1c:
    // 0x1c61a1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c61a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c61a20:
    // 0x1c61a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61a24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c61a24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61a28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c61a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c61a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A2Cu;
        // 0x1c61a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61A34u;
label_1c61a34:
    // 0x1c61a34: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C61A34u;
    SET_GPR_U32(ctx, 31, 0x1C61A3Cu);
    ctx->pc = 0x1C61A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61A34u;
    // 0x1c61a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C61A34u, 0x1C61A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61A3Cu;
label_1c61a3c:
    // 0x1c61a3c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C61A3Cu;
    {
        const bool branch_taken_0x1c61a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C61A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A3Cu;
        // 0x1c61a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a3c) {
            ctx->pc = 0x1C61A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61a1c;
        }
    }
    ctx->pc = 0x1C61A44u;
    // 0x1c61a44: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C61A44u;
    SET_GPR_U32(ctx, 31, 0x1C61A4Cu);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C61A44u, 0x1C61A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61A4Cu;
label_1c61a4c:
    // 0x1c61a4c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C61A4Cu;
    {
        const bool branch_taken_0x1c61a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A4Cu;
        // 0x1c61a50: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a4c) {
            ctx->pc = 0x1C61A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61a20;
        }
    }
    ctx->pc = 0x1C61A54u;
    // 0x1c61a54: 0x0  nop
    ctx->pc = 0x1c61a54u;
    // NOP
label_1c61a58:
    // 0x1c61a58: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c61a58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c61a5c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C61A5Cu;
    {
        const bool branch_taken_0x1c61a5c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C61A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A5Cu;
        // 0x1c61a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a5c) {
            ctx->pc = 0x1C61A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61a20;
        }
    }
    ctx->pc = 0x1C61A64u;
    // 0x1c61a64: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c61a64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c61a68: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c61a68u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c61a6c: 0x25ce44b0  addiu       $t6, $t6, 0x44B0
    ctx->pc = 0x1c61a6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 17584));
    // 0x1c61a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c61a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61a74: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c61a74u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c61a78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61a7c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c61a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c61a80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c61a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61a84: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c61a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c61a88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61a8c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61a8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61a90: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61A90u;
    SET_GPR_U32(ctx, 31, 0x1C61A98u);
    ctx->pc = 0x1C61A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61A90u;
    // 0x1c61a94: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61A90u, 0x1C61A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61A98u;
label_1c61a98:
    // 0x1c61a98: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61a98u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61a9c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C61A9Cu;
    {
        const bool branch_taken_0x1c61a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61A9Cu;
        // 0x1c61aa0: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61a9c) {
            ctx->pc = 0x1C61A1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61a1c;
        }
    }
    ctx->pc = 0x1C61AA4u;
    // 0x1c61aa4: 0x0  nop
    ctx->pc = 0x1c61aa4u;
    // NOP
    // 0x1c61aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61aac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c61aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c61ab0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61ab4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c61ab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61ab8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c61abc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c61abcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61ac0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c61ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61ac4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61ac4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61ac8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c61ac8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61acc: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C61ACCu;
    SET_GPR_U32(ctx, 31, 0x1C61AD4u);
    ctx->pc = 0x1C61AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61ACCu;
    // 0x1c61ad0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C61ACCu, 0x1C61AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61AD4u;
label_1c61ad4:
    // 0x1c61ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61ad8: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C61AD8u;
    SET_GPR_U32(ctx, 31, 0x1C61AE0u);
    ctx->pc = 0x1C61ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61AD8u;
    // 0x1c61adc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C61AD8u, 0x1C61AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61AE0u;
label_1c61ae0:
    // 0x1c61ae0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c61ae4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c61ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c61ae8: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61AE8u;
    SET_GPR_U32(ctx, 31, 0x1C61AF0u);
    ctx->pc = 0x1C61AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61AE8u;
    // 0x1c61aec: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61AE8u, 0x1C61AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61AF0u;
label_1c61af0:
    // 0x1c61af0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61af0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61af4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c61af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c61af8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c61af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c61afc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c61b00: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61B00u;
    SET_GPR_U32(ctx, 31, 0x1C61B08u);
    ctx->pc = 0x1C61B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61B00u;
    // 0x1c61b04: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61B00u, 0x1C61B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61B08u;
label_1c61b08:
    // 0x1c61b08: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c61b08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c61b0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61b0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61b10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c61b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c61b14: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61B14u;
        // 0x1c61b18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61B1Cu;
    // 0x1c61b1c: 0x0  nop
    ctx->pc = 0x1c61b1cu;
    // NOP
    ctx->pc = 0x1c61b20u;
}
