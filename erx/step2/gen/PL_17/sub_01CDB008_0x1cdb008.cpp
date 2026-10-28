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

// Function: sub_01CDB008
// Address: 0x1cdb008 - 0x1cdb130
void sub_01CDB008_0x1cdb008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDB008_0x1cdb008");
#endif

    switch (ctx->pc) {
        case 0x1cdb030u: goto label_1cdb030;
        case 0x1cdb044u: goto label_1cdb044;
        case 0x1cdb048u: goto label_1cdb048;
        case 0x1cdb068u: goto label_1cdb068;
        case 0x1cdb078u: goto label_1cdb078;
        case 0x1cdb0acu: goto label_1cdb0ac;
        case 0x1cdb0e4u: goto label_1cdb0e4;
        case 0x1cdb0f0u: goto label_1cdb0f0;
        case 0x1cdb100u: goto label_1cdb100;
        case 0x1cdb118u: goto label_1cdb118;
        default: break;
    }

    ctx->pc = 0x1cdb008u;

    // 0x1cdb008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdb008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdb00c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cdb00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cdb010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb014: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdb014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdb018: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cdb018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb01c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cdb01cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cdb020: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdb020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb024: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdb024u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdb028: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB028u;
    SET_GPR_U32(ctx, 31, 0x1CDB030u);
    ctx->pc = 0x1CDB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB028u;
    // 0x1cdb02c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB028u, 0x1CDB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB030u;
label_1cdb030:
    // 0x1cdb030: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cdb030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cdb034: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDB034u;
    {
        const bool branch_taken_0x1cdb034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB034u;
        // 0x1cdb038: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb034) {
            ctx->pc = 0x1CDB080u;
            goto label_1cdb080;
        }
    }
    ctx->pc = 0x1CDB03Cu;
    // 0x1cdb03c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CDB03Cu;
    {
        const bool branch_taken_0x1cdb03c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdb03c) {
            ctx->pc = 0x1CDB060u;
            goto label_1cdb060;
        }
    }
    ctx->pc = 0x1CDB044u;
label_1cdb044:
    // 0x1cdb044: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdb044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb048:
    // 0x1cdb048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb04c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdb04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cdb050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdb054: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cdb054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cdb058: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB058u;
        // 0x1cdb05c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB060u;
label_1cdb060:
    // 0x1cdb060: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDB060u;
    SET_GPR_U32(ctx, 31, 0x1CDB068u);
    ctx->pc = 0x1CDB064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB060u;
    // 0x1cdb064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDB060u, 0x1CDB068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB068u;
label_1cdb068:
    // 0x1cdb068: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CDB068u;
    {
        const bool branch_taken_0x1cdb068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CDB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB068u;
        // 0x1cdb06c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb068) {
            ctx->pc = 0x1CDB044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb044;
        }
    }
    ctx->pc = 0x1CDB070u;
    // 0x1cdb070: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDB070u;
    SET_GPR_U32(ctx, 31, 0x1CDB078u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDB070u, 0x1CDB078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB078u;
label_1cdb078:
    // 0x1cdb078: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CDB078u;
    {
        const bool branch_taken_0x1cdb078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB078u;
        // 0x1cdb07c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb078) {
            ctx->pc = 0x1CDB048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb048;
        }
    }
    ctx->pc = 0x1CDB080u;
label_1cdb080:
    // 0x1cdb080: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cdb080u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cdb084: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDB084u;
    {
        const bool branch_taken_0x1cdb084 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB084u;
        // 0x1cdb088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb084) {
            ctx->pc = 0x1CDB048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb048;
        }
    }
    ctx->pc = 0x1CDB08Cu;
    // 0x1cdb08c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cdb08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb090: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdb090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb094: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdb094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb098: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdb098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb09c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdb09cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb0a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdb0a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb0a4: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDB0A4u;
    SET_GPR_U32(ctx, 31, 0x1CDB0ACu);
    ctx->pc = 0x1CDB0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB0A4u;
    // 0x1cdb0a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDB0A4u, 0x1CDB0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB0ACu;
label_1cdb0ac:
    // 0x1cdb0ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdb0acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb0b0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CDB0B0u;
    {
        const bool branch_taken_0x1cdb0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB0B0u;
        // 0x1cdb0b4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb0b0) {
            ctx->pc = 0x1CDB044u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdb044;
        }
    }
    ctx->pc = 0x1CDB0B8u;
    // 0x1cdb0b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdb0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdb0bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdb0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdb0c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdb0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdb0c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdb0c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb0c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdb0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdb0cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdb0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdb0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb0d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdb0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb0d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdb0d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb0dc: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDB0DCu;
    SET_GPR_U32(ctx, 31, 0x1CDB0E4u);
    ctx->pc = 0x1CDB0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB0DCu;
    // 0x1cdb0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDB0DCu, 0x1CDB0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB0E4u;
label_1cdb0e4:
    // 0x1cdb0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdb0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb0e8: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDB0E8u;
    SET_GPR_U32(ctx, 31, 0x1CDB0F0u);
    ctx->pc = 0x1CDB0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB0E8u;
    // 0x1cdb0ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDB0E8u, 0x1CDB0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB0F0u;
label_1cdb0f0:
    // 0x1cdb0f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdb0f4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdb0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdb0f8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB0F8u;
    SET_GPR_U32(ctx, 31, 0x1CDB100u);
    ctx->pc = 0x1CDB0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB0F8u;
    // 0x1cdb0fc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB0F8u, 0x1CDB100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB100u;
label_1cdb100:
    // 0x1cdb100: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdb100u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb104: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdb104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdb108: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cdb108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cdb10c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdb10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdb110: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDB110u;
    SET_GPR_U32(ctx, 31, 0x1CDB118u);
    ctx->pc = 0x1CDB114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDB110u;
    // 0x1cdb114: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDB110u, 0x1CDB118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDB118u;
label_1cdb118:
    // 0x1cdb118: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdb118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdb11c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb120: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdb120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb124: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDB124u;
        // 0x1cdb128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDB124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDB12Cu;
    // 0x1cdb12c: 0x0  nop
    ctx->pc = 0x1cdb12cu;
    // NOP
    ctx->pc = 0x1cdb130u;
}
