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

// Function: sub_01D53010
// Address: 0x1d53010 - 0x1d53120
void sub_01D53010_0x1d53010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53010_0x1d53010");
#endif

    switch (ctx->pc) {
        case 0x1d53030u: goto label_1d53030;
        case 0x1d53044u: goto label_1d53044;
        case 0x1d53048u: goto label_1d53048;
        case 0x1d53064u: goto label_1d53064;
        case 0x1d53074u: goto label_1d53074;
        case 0x1d530c0u: goto label_1d530c0;
        case 0x1d530fcu: goto label_1d530fc;
        case 0x1d53108u: goto label_1d53108;
        default: break;
    }

    ctx->pc = 0x1d53010u;

    // 0x1d53010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d53010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d53014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d53018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d53018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5301c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5301cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d53020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d53020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53024: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d53024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d53028: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53028u;
    SET_GPR_U32(ctx, 31, 0x1D53030u);
    ctx->pc = 0x1D5302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53028u;
    // 0x1d5302c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53028u, 0x1D53030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53030u;
label_1d53030:
    // 0x1d53030: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d53030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d53034: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D53034u;
    {
        const bool branch_taken_0x1d53034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53034u;
        // 0x1d53038: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53034) {
            ctx->pc = 0x1D53080u;
            goto label_1d53080;
        }
    }
    ctx->pc = 0x1D5303Cu;
    // 0x1d5303c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5303Cu;
    {
        const bool branch_taken_0x1d5303c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d5303c) {
            ctx->pc = 0x1D5305Cu;
            goto label_1d5305c;
        }
    }
    ctx->pc = 0x1D53044u;
label_1d53044:
    // 0x1d53044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d53044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d53048:
    // 0x1d53048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5304c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5304cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d53050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53054: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53054u;
        // 0x1d53058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5305Cu;
label_1d5305c:
    // 0x1d5305c: 0xc7543d2  jal         func_1D50F48
    ctx->pc = 0x1D5305Cu;
    SET_GPR_U32(ctx, 31, 0x1D53064u);
    ctx->pc = 0x1D53060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5305Cu;
    // 0x1d53060: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F48u, 0x1D5305Cu, 0x1D53064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53064u;
label_1d53064:
    // 0x1d53064: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D53064u;
    {
        const bool branch_taken_0x1d53064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D53068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53064u;
        // 0x1d53068: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53064) {
            ctx->pc = 0x1D53044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53044;
        }
    }
    ctx->pc = 0x1D5306Cu;
    // 0x1d5306c: 0xc7543d4  jal         func_1D50F50
    ctx->pc = 0x1D5306Cu;
    SET_GPR_U32(ctx, 31, 0x1D53074u);
    ctx->pc = 0x1D50F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F50u, 0x1D5306Cu, 0x1D53074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53074u;
label_1d53074:
    // 0x1d53074: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D53074u;
    {
        const bool branch_taken_0x1d53074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D53078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53074u;
        // 0x1d53078: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53074) {
            ctx->pc = 0x1D53048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53048;
        }
    }
    ctx->pc = 0x1D5307Cu;
    // 0x1d5307c: 0x0  nop
    ctx->pc = 0x1d5307cu;
    // NOP
label_1d53080:
    // 0x1d53080: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d53080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d53084: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D53084u;
    {
        const bool branch_taken_0x1d53084 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D53088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53084u;
        // 0x1d53088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d53084) {
            ctx->pc = 0x1D53048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53048;
        }
    }
    ctx->pc = 0x1D5308Cu;
    // 0x1d5308c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d5308cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d53090: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d53090u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d53094: 0x25ce62c0  addiu       $t6, $t6, 0x62C0
    ctx->pc = 0x1d53094u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 25280));
    // 0x1d53098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d53098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5309c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d5309cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d530a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d530a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530a4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d530a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d530a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d530a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530ac: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d530acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d530b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d530b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530b4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d530b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d530b8: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D530B8u;
    SET_GPR_U32(ctx, 31, 0x1D530C0u);
    ctx->pc = 0x1D530BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D530B8u;
    // 0x1d530bc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D530B8u, 0x1D530C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D530C0u;
label_1d530c0:
    // 0x1d530c0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d530c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d530c4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D530C4u;
    {
        const bool branch_taken_0x1d530c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D530C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D530C4u;
        // 0x1d530c8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d530c4) {
            ctx->pc = 0x1D53044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d53044;
        }
    }
    ctx->pc = 0x1D530CCu;
    // 0x1d530cc: 0x0  nop
    ctx->pc = 0x1d530ccu;
    // NOP
    // 0x1d530d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d530d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d530d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d530d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d530d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d530d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d530dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d530dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d530e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d530e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d530e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d530e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d530ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d530f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d530f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d530f4: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D530F4u;
    SET_GPR_U32(ctx, 31, 0x1D530FCu);
    ctx->pc = 0x1D530F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D530F4u;
    // 0x1d530f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D530F4u, 0x1D530FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D530FCu;
label_1d530fc:
    // 0x1d530fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d530fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53100: 0xc7543da  jal         func_1D50F68
    ctx->pc = 0x1D53100u;
    SET_GPR_U32(ctx, 31, 0x1D53108u);
    ctx->pc = 0x1D53104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53100u;
    // 0x1d53104: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F68u, 0x1D53100u, 0x1D53108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53108u;
label_1d53108:
    // 0x1d53108: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d53108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5310c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53114: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53114u;
        // 0x1d53118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5311Cu;
    // 0x1d5311c: 0x0  nop
    ctx->pc = 0x1d5311cu;
    // NOP
    ctx->pc = 0x1d53120u;
}
