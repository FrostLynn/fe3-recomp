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

// Function: sub_01CFF290
// Address: 0x1cff290 - 0x1cff3c8
void sub_01CFF290_0x1cff290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF290_0x1cff290");
#endif

    switch (ctx->pc) {
        case 0x1cff2b0u: goto label_1cff2b0;
        case 0x1cff2c4u: goto label_1cff2c4;
        case 0x1cff2c8u: goto label_1cff2c8;
        case 0x1cff2e4u: goto label_1cff2e4;
        case 0x1cff2f4u: goto label_1cff2f4;
        case 0x1cff340u: goto label_1cff340;
        case 0x1cff37cu: goto label_1cff37c;
        case 0x1cff388u: goto label_1cff388;
        case 0x1cff398u: goto label_1cff398;
        case 0x1cff3b0u: goto label_1cff3b0;
        default: break;
    }

    ctx->pc = 0x1cff290u;

    // 0x1cff290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cff298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cff29c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cff29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cff2a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cff2a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff2a4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cff2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cff2a8: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF2A8u;
    SET_GPR_U32(ctx, 31, 0x1CFF2B0u);
    ctx->pc = 0x1CFF2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF2A8u;
    // 0x1cff2ac: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF2A8u, 0x1CFF2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF2B0u;
label_1cff2b0:
    // 0x1cff2b0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cff2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cff2b4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CFF2B4u;
    {
        const bool branch_taken_0x1cff2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF2B4u;
        // 0x1cff2b8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff2b4) {
            ctx->pc = 0x1CFF300u;
            goto label_1cff300;
        }
    }
    ctx->pc = 0x1CFF2BCu;
    // 0x1cff2bc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CFF2BCu;
    {
        const bool branch_taken_0x1cff2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cff2bc) {
            ctx->pc = 0x1CFF2DCu;
            goto label_1cff2dc;
        }
    }
    ctx->pc = 0x1CFF2C4u;
label_1cff2c4:
    // 0x1cff2c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cff2c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff2c8:
    // 0x1cff2c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff2c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff2cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cff2ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff2d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff2d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff2d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF2D4u;
        // 0x1cff2d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF2D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF2DCu;
label_1cff2dc:
    // 0x1cff2dc: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFF2DCu;
    SET_GPR_U32(ctx, 31, 0x1CFF2E4u);
    ctx->pc = 0x1CFF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF2DCu;
    // 0x1cff2e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFF2DCu, 0x1CFF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF2E4u;
label_1cff2e4:
    // 0x1cff2e4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CFF2E4u;
    {
        const bool branch_taken_0x1cff2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CFF2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF2E4u;
        // 0x1cff2e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff2e4) {
            ctx->pc = 0x1CFF2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff2c4;
        }
    }
    ctx->pc = 0x1CFF2ECu;
    // 0x1cff2ec: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFF2ECu;
    SET_GPR_U32(ctx, 31, 0x1CFF2F4u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFF2ECu, 0x1CFF2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF2F4u;
label_1cff2f4:
    // 0x1cff2f4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CFF2F4u;
    {
        const bool branch_taken_0x1cff2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF2F4u;
        // 0x1cff2f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff2f4) {
            ctx->pc = 0x1CFF2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff2c8;
        }
    }
    ctx->pc = 0x1CFF2FCu;
    // 0x1cff2fc: 0x0  nop
    ctx->pc = 0x1cff2fcu;
    // NOP
label_1cff300:
    // 0x1cff300: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cff300u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cff304: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFF304u;
    {
        const bool branch_taken_0x1cff304 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF304u;
        // 0x1cff308: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff304) {
            ctx->pc = 0x1CFF2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff2c8;
        }
    }
    ctx->pc = 0x1CFF30Cu;
    // 0x1cff30c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cff30cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cff310: 0x3c0e01d0  lui         $t6, 0x1D0
    ctx->pc = 0x1cff310u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
    // 0x1cff314: 0x25ce5e10  addiu       $t6, $t6, 0x5E10
    ctx->pc = 0x1cff314u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24080));
    // 0x1cff318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cff318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff31c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cff31cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cff320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cff320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff324: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cff324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cff328: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff32c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cff32cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cff330: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff330u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff334: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff334u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff338: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF338u;
    SET_GPR_U32(ctx, 31, 0x1CFF340u);
    ctx->pc = 0x1CFF33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF338u;
    // 0x1cff33c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF338u, 0x1CFF340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF340u;
label_1cff340:
    // 0x1cff340: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff340u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff344: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CFF344u;
    {
        const bool branch_taken_0x1cff344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF344u;
        // 0x1cff348: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff344) {
            ctx->pc = 0x1CFF2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff2c4;
        }
    }
    ctx->pc = 0x1CFF34Cu;
    // 0x1cff34c: 0x0  nop
    ctx->pc = 0x1cff34cu;
    // NOP
    // 0x1cff350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff354: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cff354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff35c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff35cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff360: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff364: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff364u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff36c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff36cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff370: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cff370u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff374: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF374u;
    SET_GPR_U32(ctx, 31, 0x1CFF37Cu);
    ctx->pc = 0x1CFF378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF374u;
    // 0x1cff378: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF374u, 0x1CFF37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF37Cu;
label_1cff37c:
    // 0x1cff37c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff380: 0xc73f49e  jal         func_1CFD278
    ctx->pc = 0x1CFF380u;
    SET_GPR_U32(ctx, 31, 0x1CFF388u);
    ctx->pc = 0x1CFF384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF380u;
    // 0x1cff384: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD278u, 0x1CFF380u, 0x1CFF388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF388u;
label_1cff388:
    // 0x1cff388: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff38c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cff38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cff390: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF390u;
    SET_GPR_U32(ctx, 31, 0x1CFF398u);
    ctx->pc = 0x1CFF394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF390u;
    // 0x1cff394: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF390u, 0x1CFF398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF398u;
label_1cff398:
    // 0x1cff398: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff398u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff39c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cff39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cff3a0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cff3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cff3a4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff3a8: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF3A8u;
    SET_GPR_U32(ctx, 31, 0x1CFF3B0u);
    ctx->pc = 0x1CFF3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF3A8u;
    // 0x1cff3ac: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF3A8u, 0x1CFF3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF3B0u;
label_1cff3b0:
    // 0x1cff3b0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cff3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cff3b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff3b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF3BCu;
        // 0x1cff3c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF3C4u;
    // 0x1cff3c4: 0x0  nop
    ctx->pc = 0x1cff3c4u;
    // NOP
    ctx->pc = 0x1cff3c8u;
}
