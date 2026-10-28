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

// Function: sub_01C8F020
// Address: 0x1c8f020 - 0x1c8f130
void sub_01C8F020_0x1c8f020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F020_0x1c8f020");
#endif

    switch (ctx->pc) {
        case 0x1c8f040u: goto label_1c8f040;
        case 0x1c8f054u: goto label_1c8f054;
        case 0x1c8f058u: goto label_1c8f058;
        case 0x1c8f074u: goto label_1c8f074;
        case 0x1c8f084u: goto label_1c8f084;
        case 0x1c8f0d0u: goto label_1c8f0d0;
        case 0x1c8f10cu: goto label_1c8f10c;
        case 0x1c8f118u: goto label_1c8f118;
        default: break;
    }

    ctx->pc = 0x1c8f020u;

    // 0x1c8f020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c8f020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c8f024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f028: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c8f028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c8f02c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c8f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c8f030: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8f030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f034: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c8f034u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c8f038: 0xc7233d6  jal         func_1C8CF58
    ctx->pc = 0x1C8F038u;
    SET_GPR_U32(ctx, 31, 0x1C8F040u);
    ctx->pc = 0x1C8F03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F038u;
    // 0x1c8f03c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF58u, 0x1C8F038u, 0x1C8F040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F040u;
label_1c8f040:
    // 0x1c8f040: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c8f040u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c8f044: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C8F044u;
    {
        const bool branch_taken_0x1c8f044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F044u;
        // 0x1c8f048: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f044) {
            ctx->pc = 0x1C8F090u;
            goto label_1c8f090;
        }
    }
    ctx->pc = 0x1C8F04Cu;
    // 0x1c8f04c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C8F04Cu;
    {
        const bool branch_taken_0x1c8f04c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c8f04c) {
            ctx->pc = 0x1C8F06Cu;
            goto label_1c8f06c;
        }
    }
    ctx->pc = 0x1C8F054u;
label_1c8f054:
    // 0x1c8f054: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c8f054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c8f058:
    // 0x1c8f058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f05c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c8f05cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c8f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8f064: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F064u;
        // 0x1c8f068: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F06Cu;
label_1c8f06c:
    // 0x1c8f06c: 0xc7233d2  jal         func_1C8CF48
    ctx->pc = 0x1C8F06Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F074u);
    ctx->pc = 0x1C8F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F06Cu;
    // 0x1c8f070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF48u, 0x1C8F06Cu, 0x1C8F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F074u;
label_1c8f074:
    // 0x1c8f074: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C8F074u;
    {
        const bool branch_taken_0x1c8f074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C8F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F074u;
        // 0x1c8f078: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f074) {
            ctx->pc = 0x1C8F054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f054;
        }
    }
    ctx->pc = 0x1C8F07Cu;
    // 0x1c8f07c: 0xc7233d4  jal         func_1C8CF50
    ctx->pc = 0x1C8F07Cu;
    SET_GPR_U32(ctx, 31, 0x1C8F084u);
    ctx->pc = 0x1C8CF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF50u, 0x1C8F07Cu, 0x1C8F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F084u;
label_1c8f084:
    // 0x1c8f084: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C8F084u;
    {
        const bool branch_taken_0x1c8f084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F084u;
        // 0x1c8f088: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f084) {
            ctx->pc = 0x1C8F058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f058;
        }
    }
    ctx->pc = 0x1C8F08Cu;
    // 0x1c8f08c: 0x0  nop
    ctx->pc = 0x1c8f08cu;
    // NOP
label_1c8f090:
    // 0x1c8f090: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c8f090u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c8f094: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C8F094u;
    {
        const bool branch_taken_0x1c8f094 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F094u;
        // 0x1c8f098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f094) {
            ctx->pc = 0x1C8F058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f058;
        }
    }
    ctx->pc = 0x1C8F09Cu;
    // 0x1c8f09c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c8f09cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c8f0a0: 0x3c0e01c9  lui         $t6, 0x1C9
    ctx->pc = 0x1c8f0a0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f0a4: 0x25ce28f0  addiu       $t6, $t6, 0x28F0
    ctx->pc = 0x1c8f0a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10480));
    // 0x1c8f0a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8f0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0ac: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c8f0acu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c8f0b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8f0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0b4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c8f0b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c8f0b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f0b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0bc: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c8f0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8f0c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f0c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0c4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8f0c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f0c8: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F0C8u;
    SET_GPR_U32(ctx, 31, 0x1C8F0D0u);
    ctx->pc = 0x1C8F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F0C8u;
    // 0x1c8f0cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F0C8u, 0x1C8F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F0D0u;
label_1c8f0d0:
    // 0x1c8f0d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c8f0d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f0d4: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C8F0D4u;
    {
        const bool branch_taken_0x1c8f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F0D4u;
        // 0x1c8f0d8: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f0d4) {
            ctx->pc = 0x1C8F054u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c8f054;
        }
    }
    ctx->pc = 0x1C8F0DCu;
    // 0x1c8f0dc: 0x0  nop
    ctx->pc = 0x1c8f0dcu;
    // NOP
    // 0x1c8f0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f0e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8f0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f0e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f0ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c8f0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8f0f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f0fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c8f0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8f100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f104: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F104u;
    SET_GPR_U32(ctx, 31, 0x1C8F10Cu);
    ctx->pc = 0x1C8F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F104u;
    // 0x1c8f108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F104u, 0x1C8F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F10Cu;
label_1c8f10c:
    // 0x1c8f10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f110: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8F110u;
    SET_GPR_U32(ctx, 31, 0x1C8F118u);
    ctx->pc = 0x1C8F114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F110u;
    // 0x1c8f114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8F110u, 0x1C8F118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F118u;
label_1c8f118:
    // 0x1c8f118: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8f118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8f11c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8f11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f124: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F124u;
        // 0x1c8f128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F12Cu;
    // 0x1c8f12c: 0x0  nop
    ctx->pc = 0x1c8f12cu;
    // NOP
    ctx->pc = 0x1c8f130u;
}
