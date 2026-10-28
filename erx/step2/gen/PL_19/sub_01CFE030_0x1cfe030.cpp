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

// Function: sub_01CFE030
// Address: 0x1cfe030 - 0x1cfe158
void sub_01CFE030_0x1cfe030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFE030_0x1cfe030");
#endif

    switch (ctx->pc) {
        case 0x1cfe058u: goto label_1cfe058;
        case 0x1cfe06cu: goto label_1cfe06c;
        case 0x1cfe070u: goto label_1cfe070;
        case 0x1cfe090u: goto label_1cfe090;
        case 0x1cfe0a0u: goto label_1cfe0a0;
        case 0x1cfe0d4u: goto label_1cfe0d4;
        case 0x1cfe10cu: goto label_1cfe10c;
        case 0x1cfe118u: goto label_1cfe118;
        case 0x1cfe128u: goto label_1cfe128;
        case 0x1cfe140u: goto label_1cfe140;
        default: break;
    }

    ctx->pc = 0x1cfe030u;

    // 0x1cfe030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cfe030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cfe034: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cfe034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cfe038: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe03c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cfe03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cfe040: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cfe040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe044: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cfe044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cfe048: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cfe048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe04c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cfe04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cfe050: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE050u;
    SET_GPR_U32(ctx, 31, 0x1CFE058u);
    ctx->pc = 0x1CFE054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE050u;
    // 0x1cfe054: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE050u, 0x1CFE058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE058u;
label_1cfe058:
    // 0x1cfe058: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cfe058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cfe05c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CFE05Cu;
    {
        const bool branch_taken_0x1cfe05c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE05Cu;
        // 0x1cfe060: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe05c) {
            ctx->pc = 0x1CFE0A8u;
            goto label_1cfe0a8;
        }
    }
    ctx->pc = 0x1CFE064u;
    // 0x1cfe064: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFE064u;
    {
        const bool branch_taken_0x1cfe064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cfe064) {
            ctx->pc = 0x1CFE088u;
            goto label_1cfe088;
        }
    }
    ctx->pc = 0x1CFE06Cu;
label_1cfe06c:
    // 0x1cfe06c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cfe06cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe070:
    // 0x1cfe070: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cfe074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cfe078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfe07c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cfe07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cfe080: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE080u;
        // 0x1cfe084: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE088u;
label_1cfe088:
    // 0x1cfe088: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFE088u;
    SET_GPR_U32(ctx, 31, 0x1CFE090u);
    ctx->pc = 0x1CFE08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE088u;
    // 0x1cfe08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFE088u, 0x1CFE090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE090u;
label_1cfe090:
    // 0x1cfe090: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CFE090u;
    {
        const bool branch_taken_0x1cfe090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CFE094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE090u;
        // 0x1cfe094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe090) {
            ctx->pc = 0x1CFE06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe06c;
        }
    }
    ctx->pc = 0x1CFE098u;
    // 0x1cfe098: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFE098u;
    SET_GPR_U32(ctx, 31, 0x1CFE0A0u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFE098u, 0x1CFE0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE0A0u;
label_1cfe0a0:
    // 0x1cfe0a0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CFE0A0u;
    {
        const bool branch_taken_0x1cfe0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE0A0u;
        // 0x1cfe0a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe0a0) {
            ctx->pc = 0x1CFE070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe070;
        }
    }
    ctx->pc = 0x1CFE0A8u;
label_1cfe0a8:
    // 0x1cfe0a8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cfe0a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cfe0ac: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFE0ACu;
    {
        const bool branch_taken_0x1cfe0ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE0ACu;
        // 0x1cfe0b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe0ac) {
            ctx->pc = 0x1CFE070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe070;
        }
    }
    ctx->pc = 0x1CFE0B4u;
    // 0x1cfe0b4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cfe0b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cfe0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfe0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cfe0c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfe0c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0c8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cfe0c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe0cc: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFE0CCu;
    SET_GPR_U32(ctx, 31, 0x1CFE0D4u);
    ctx->pc = 0x1CFE0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE0CCu;
    // 0x1cfe0d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFE0CCu, 0x1CFE0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE0D4u;
label_1cfe0d4:
    // 0x1cfe0d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cfe0d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe0d8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CFE0D8u;
    {
        const bool branch_taken_0x1cfe0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE0D8u;
        // 0x1cfe0dc: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe0d8) {
            ctx->pc = 0x1CFE06Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cfe06c;
        }
    }
    ctx->pc = 0x1CFE0E0u;
    // 0x1cfe0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfe0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfe0e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cfe0e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cfe0e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cfe0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cfe0ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cfe0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cfe0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cfe0f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cfe0f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cfe0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe0fc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cfe0fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe100: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cfe100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe104: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFE104u;
    SET_GPR_U32(ctx, 31, 0x1CFE10Cu);
    ctx->pc = 0x1CFE108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE104u;
    // 0x1cfe108: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFE104u, 0x1CFE10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE10Cu;
label_1cfe10c:
    // 0x1cfe10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfe10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfe110: 0xc73f49e  jal         func_1CFD278
    ctx->pc = 0x1CFE110u;
    SET_GPR_U32(ctx, 31, 0x1CFE118u);
    ctx->pc = 0x1CFE114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE110u;
    // 0x1cfe114: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD278u, 0x1CFE110u, 0x1CFE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE118u;
label_1cfe118:
    // 0x1cfe118: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cfe118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfe11c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cfe11cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cfe120: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE120u;
    SET_GPR_U32(ctx, 31, 0x1CFE128u);
    ctx->pc = 0x1CFE124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE120u;
    // 0x1cfe124: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE120u, 0x1CFE128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE128u;
label_1cfe128:
    // 0x1cfe128: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cfe128u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cfe12c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cfe12cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cfe130: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cfe130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cfe134: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cfe134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cfe138: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFE138u;
    SET_GPR_U32(ctx, 31, 0x1CFE140u);
    ctx->pc = 0x1CFE13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFE138u;
    // 0x1cfe13c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFE138u, 0x1CFE140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFE140u;
label_1cfe140:
    // 0x1cfe140: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cfe140u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cfe144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cfe144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfe148: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cfe148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cfe14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFE14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFE150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFE14Cu;
        // 0x1cfe150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFE14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFE154u;
    // 0x1cfe154: 0x0  nop
    ctx->pc = 0x1cfe154u;
    // NOP
    ctx->pc = 0x1cfe158u;
}
