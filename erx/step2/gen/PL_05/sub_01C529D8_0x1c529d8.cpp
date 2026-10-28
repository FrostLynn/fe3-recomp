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

// Function: sub_01C529D8
// Address: 0x1c529d8 - 0x1c52b28
void sub_01C529D8_0x1c529d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C529D8_0x1c529d8");
#endif

    switch (ctx->pc) {
        case 0x1c529f8u: goto label_1c529f8;
        case 0x1c52a0cu: goto label_1c52a0c;
        case 0x1c52a10u: goto label_1c52a10;
        case 0x1c52a2cu: goto label_1c52a2c;
        case 0x1c52a3cu: goto label_1c52a3c;
        case 0x1c52a88u: goto label_1c52a88;
        case 0x1c52ab8u: goto label_1c52ab8;
        case 0x1c52adcu: goto label_1c52adc;
        case 0x1c52aecu: goto label_1c52aec;
        default: break;
    }

    ctx->pc = 0x1c529d8u;

    // 0x1c529d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c529d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c529dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c529dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c529e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c529e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c529e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c529e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c529e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c529e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c529ec: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c529ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c529f0: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C529F0u;
    SET_GPR_U32(ctx, 31, 0x1C529F8u);
    ctx->pc = 0x1C529F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C529F0u;
    // 0x1c529f4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C529F0u, 0x1C529F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C529F8u;
label_1c529f8:
    // 0x1c529f8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c529f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c529fc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C529FCu;
    {
        const bool branch_taken_0x1c529fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C529FCu;
        // 0x1c52a00: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c529fc) {
            ctx->pc = 0x1C52A48u;
            goto label_1c52a48;
        }
    }
    ctx->pc = 0x1C52A04u;
    // 0x1c52a04: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C52A04u;
    {
        const bool branch_taken_0x1c52a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c52a04) {
            ctx->pc = 0x1C52A24u;
            goto label_1c52a24;
        }
    }
    ctx->pc = 0x1C52A0Cu;
label_1c52a0c:
    // 0x1c52a0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c52a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c52a10:
    // 0x1c52a10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52a10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52a14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52a14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c52a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C52A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C52A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52A1Cu;
        // 0x1c52a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C52A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C52A24u;
label_1c52a24:
    // 0x1c52a24: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C52A24u;
    SET_GPR_U32(ctx, 31, 0x1C52A2Cu);
    ctx->pc = 0x1C52A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52A24u;
    // 0x1c52a28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C52A24u, 0x1C52A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52A2Cu;
label_1c52a2c:
    // 0x1c52a2c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C52A2Cu;
    {
        const bool branch_taken_0x1c52a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C52A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52A2Cu;
        // 0x1c52a30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52a2c) {
            ctx->pc = 0x1C52A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52a0c;
        }
    }
    ctx->pc = 0x1C52A34u;
    // 0x1c52a34: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C52A34u;
    SET_GPR_U32(ctx, 31, 0x1C52A3Cu);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C52A34u, 0x1C52A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52A3Cu;
label_1c52a3c:
    // 0x1c52a3c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C52A3Cu;
    {
        const bool branch_taken_0x1c52a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52A3Cu;
        // 0x1c52a40: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52a3c) {
            ctx->pc = 0x1C52A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52a10;
        }
    }
    ctx->pc = 0x1C52A44u;
    // 0x1c52a44: 0x0  nop
    ctx->pc = 0x1c52a44u;
    // NOP
label_1c52a48:
    // 0x1c52a48: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c52a48u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c52a4c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C52A4Cu;
    {
        const bool branch_taken_0x1c52a4c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C52A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52A4Cu;
        // 0x1c52a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52a4c) {
            ctx->pc = 0x1C52A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52a10;
        }
    }
    ctx->pc = 0x1C52A54u;
    // 0x1c52a54: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c52a54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c52a58: 0x3c0e01c6  lui         $t6, 0x1C6
    ctx->pc = 0x1c52a58u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
    // 0x1c52a5c: 0x25ce9a20  addiu       $t6, $t6, -0x65E0
    ctx->pc = 0x1c52a5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941216));
    // 0x1c52a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c52a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52a64: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c52a64u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c52a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c52a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52a6c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c52a6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c52a70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c52a70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52a74: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c52a74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c52a78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c52a78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52a7c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c52a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52a80: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C52A80u;
    SET_GPR_U32(ctx, 31, 0x1C52A88u);
    ctx->pc = 0x1C52A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52A80u;
    // 0x1c52a84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C52A80u, 0x1C52A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52A88u;
label_1c52a88:
    // 0x1c52a88: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c52a88u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52a8c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C52A8Cu;
    {
        const bool branch_taken_0x1c52a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C52A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C52A8Cu;
        // 0x1c52a90: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c52a8c) {
            ctx->pc = 0x1C52A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c52a0c;
        }
    }
    ctx->pc = 0x1C52A94u;
    // 0x1c52a94: 0x0  nop
    ctx->pc = 0x1c52a94u;
    // NOP
    // 0x1c52a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c52a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c52a9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c52a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c52aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c52aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c52aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c52aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c52aa8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c52aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c52aac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c52aacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ab0: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C52AB0u;
    SET_GPR_U32(ctx, 31, 0x1C52AB8u);
    ctx->pc = 0x1C52AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52AB0u;
    // 0x1c52ab4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C52AB0u, 0x1C52AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52AB8u;
label_1c52ab8:
    // 0x1c52ab8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c52ab8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c52abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ac0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c52ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c52ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c52ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c52ac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52acc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c52accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c52ad0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c52ad0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ad4: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C52AD4u;
    SET_GPR_U32(ctx, 31, 0x1C52ADCu);
    ctx->pc = 0x1C52AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52AD4u;
    // 0x1c52ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C52AD4u, 0x1C52ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52ADCu;
label_1c52adc:
    // 0x1c52adc: 0x26100580  addiu       $s0, $s0, 0x580
    ctx->pc = 0x1c52adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x1c52ae0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c52ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52ae4: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C52AE4u;
    SET_GPR_U32(ctx, 31, 0x1C52AECu);
    ctx->pc = 0x1C52AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52AE4u;
    // 0x1c52ae8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C52AE4u, 0x1C52AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C52AECu;
label_1c52aec:
    // 0x1c52aec: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52aecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c52af0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1c52af0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1c52af4: 0x25eff49c  addiu       $t7, $t7, -0xB64
    ctx->pc = 0x1c52af4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964380));
    // 0x1c52af8: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1c52af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1c52afc: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1c52afcu;
    { uint32_t bits = FAST_READ32(0x1C5F49Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c52b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c52b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c52b04: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x1c52b04u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x1c52b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c52b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c52b0c: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c52b0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c52b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c52b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c52b14: 0x25eff4a0  addiu       $t7, $t7, -0xB60
    ctx->pc = 0x1c52b14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964384));
    // 0x1c52b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c52b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c52b1c: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1c52b1cu;
    { uint32_t bits = FAST_READ32(0x1C5F4A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1c52b20: 0x87140f0  j           func_1C503C0
    ctx->pc = 0x1C52B20u;
    ctx->pc = 0x1C52B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C52B20u;
    // 0x1c52b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503C0u;
    sub_01C503C0_0x1c503c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52B28u;
}
