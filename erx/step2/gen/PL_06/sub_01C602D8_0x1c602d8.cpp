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

// Function: sub_01C602D8
// Address: 0x1c602d8 - 0x1c60400
void sub_01C602D8_0x1c602d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C602D8_0x1c602d8");
#endif

    switch (ctx->pc) {
        case 0x1c60300u: goto label_1c60300;
        case 0x1c60314u: goto label_1c60314;
        case 0x1c60318u: goto label_1c60318;
        case 0x1c60338u: goto label_1c60338;
        case 0x1c60348u: goto label_1c60348;
        case 0x1c6037cu: goto label_1c6037c;
        case 0x1c603b4u: goto label_1c603b4;
        case 0x1c603c0u: goto label_1c603c0;
        case 0x1c603d0u: goto label_1c603d0;
        case 0x1c603e8u: goto label_1c603e8;
        default: break;
    }

    ctx->pc = 0x1c602d8u;

    // 0x1c602d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c602d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c602dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c602dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c602e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c602e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c602e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c602e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c602e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c602e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c602ec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c602ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c602f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c602f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c602f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c602f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c602f8: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C602F8u;
    SET_GPR_U32(ctx, 31, 0x1C60300u);
    ctx->pc = 0x1C602FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C602F8u;
    // 0x1c602fc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C602F8u, 0x1C60300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60300u;
label_1c60300:
    // 0x1c60300: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c60300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c60304: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C60304u;
    {
        const bool branch_taken_0x1c60304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60304u;
        // 0x1c60308: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60304) {
            ctx->pc = 0x1C60350u;
            goto label_1c60350;
        }
    }
    ctx->pc = 0x1C6030Cu;
    // 0x1c6030c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6030Cu;
    {
        const bool branch_taken_0x1c6030c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c6030c) {
            ctx->pc = 0x1C60330u;
            goto label_1c60330;
        }
    }
    ctx->pc = 0x1C60314u;
label_1c60314:
    // 0x1c60314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c60314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c60318:
    // 0x1c60318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6031c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6031cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c60320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c60320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60324: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c60324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c60328: 0x3e00008  jr          $ra
    ctx->pc = 0x1C60328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60328u;
        // 0x1c6032c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C60328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60330u;
label_1c60330:
    // 0x1c60330: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C60330u;
    SET_GPR_U32(ctx, 31, 0x1C60338u);
    ctx->pc = 0x1C60334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60330u;
    // 0x1c60334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C60330u, 0x1C60338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60338u;
label_1c60338:
    // 0x1c60338: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C60338u;
    {
        const bool branch_taken_0x1c60338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C6033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60338u;
        // 0x1c6033c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60338) {
            ctx->pc = 0x1C60314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60314;
        }
    }
    ctx->pc = 0x1C60340u;
    // 0x1c60340: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C60340u;
    SET_GPR_U32(ctx, 31, 0x1C60348u);
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C60340u, 0x1C60348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60348u;
label_1c60348:
    // 0x1c60348: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C60348u;
    {
        const bool branch_taken_0x1c60348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60348u;
        // 0x1c6034c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60348) {
            ctx->pc = 0x1C60318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60318;
        }
    }
    ctx->pc = 0x1C60350u;
label_1c60350:
    // 0x1c60350: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c60350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c60354: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C60354u;
    {
        const bool branch_taken_0x1c60354 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60354u;
        // 0x1c60358: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60354) {
            ctx->pc = 0x1C60318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60318;
        }
    }
    ctx->pc = 0x1C6035Cu;
    // 0x1c6035c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c6035cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c60360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c60364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60368: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c60368u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6036c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6036cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60370: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c60370u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60374: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C60374u;
    SET_GPR_U32(ctx, 31, 0x1C6037Cu);
    ctx->pc = 0x1C60378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60374u;
    // 0x1c60378: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C60374u, 0x1C6037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6037Cu;
label_1c6037c:
    // 0x1c6037c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c6037cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c60380: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C60380u;
    {
        const bool branch_taken_0x1c60380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C60384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60380u;
        // 0x1c60384: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60380) {
            ctx->pc = 0x1C60314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c60314;
        }
    }
    ctx->pc = 0x1C60388u;
    // 0x1c60388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c60388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6038c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c6038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c60390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c60390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c60394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60398: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c60398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6039c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c6039cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c603a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c603a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c603a4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c603a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c603a8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c603a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c603ac: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C603ACu;
    SET_GPR_U32(ctx, 31, 0x1C603B4u);
    ctx->pc = 0x1C603B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C603ACu;
    // 0x1c603b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C603ACu, 0x1C603B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C603B4u;
label_1c603b4:
    // 0x1c603b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c603b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c603b8: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C603B8u;
    SET_GPR_U32(ctx, 31, 0x1C603C0u);
    ctx->pc = 0x1C603BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C603B8u;
    // 0x1c603bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C603B8u, 0x1C603C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C603C0u;
label_1c603c0:
    // 0x1c603c0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c603c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c603c4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c603c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c603c8: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C603C8u;
    SET_GPR_U32(ctx, 31, 0x1C603D0u);
    ctx->pc = 0x1C603CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C603C8u;
    // 0x1c603cc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C603C8u, 0x1C603D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C603D0u;
label_1c603d0:
    // 0x1c603d0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c603d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c603d4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c603d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c603d8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c603d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c603dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c603dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c603e0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C603E0u;
    SET_GPR_U32(ctx, 31, 0x1C603E8u);
    ctx->pc = 0x1C603E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C603E0u;
    // 0x1c603e4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C603E0u, 0x1C603E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C603E8u;
label_1c603e8:
    // 0x1c603e8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c603e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c603ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c603ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c603f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c603f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c603f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C603F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C603F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C603F4u;
        // 0x1c603f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C603F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C603FCu;
    // 0x1c603fc: 0x0  nop
    ctx->pc = 0x1c603fcu;
    // NOP
    ctx->pc = 0x1c60400u;
}
