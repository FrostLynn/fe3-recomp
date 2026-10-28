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

// Function: sub_01C50748
// Address: 0x1c50748 - 0x1c50870
void sub_01C50748_0x1c50748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C50748_0x1c50748");
#endif

    switch (ctx->pc) {
        case 0x1c50770u: goto label_1c50770;
        case 0x1c50784u: goto label_1c50784;
        case 0x1c50788u: goto label_1c50788;
        case 0x1c507a8u: goto label_1c507a8;
        case 0x1c507b8u: goto label_1c507b8;
        case 0x1c507ecu: goto label_1c507ec;
        case 0x1c50824u: goto label_1c50824;
        case 0x1c50830u: goto label_1c50830;
        case 0x1c50840u: goto label_1c50840;
        case 0x1c50858u: goto label_1c50858;
        default: break;
    }

    ctx->pc = 0x1c50748u;

    // 0x1c50748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c50748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c5074c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c5074cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c50750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50754: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c50754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c50758: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c50758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5075c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c5075cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c50760: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c50760u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50764: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c50764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c50768: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50768u;
    SET_GPR_U32(ctx, 31, 0x1C50770u);
    ctx->pc = 0x1C5076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50768u;
    // 0x1c5076c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50768u, 0x1C50770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50770u;
label_1c50770:
    // 0x1c50770: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c50770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c50774: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C50774u;
    {
        const bool branch_taken_0x1c50774 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50774u;
        // 0x1c50778: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c50774) {
            ctx->pc = 0x1C507C0u;
            goto label_1c507c0;
        }
    }
    ctx->pc = 0x1C5077Cu;
    // 0x1c5077c: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C5077Cu;
    {
        const bool branch_taken_0x1c5077c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c5077c) {
            ctx->pc = 0x1C507A0u;
            goto label_1c507a0;
        }
    }
    ctx->pc = 0x1C50784u;
label_1c50784:
    // 0x1c50784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c50784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c50788:
    // 0x1c50788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c50788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5078c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c5078cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c50790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c50794: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c50794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c50798: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50798u;
        // 0x1c5079c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C507A0u;
label_1c507a0:
    // 0x1c507a0: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C507A0u;
    SET_GPR_U32(ctx, 31, 0x1C507A8u);
    ctx->pc = 0x1C507A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C507A0u;
    // 0x1c507a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C507A0u, 0x1C507A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C507A8u;
label_1c507a8:
    // 0x1c507a8: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C507A8u;
    {
        const bool branch_taken_0x1c507a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C507ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C507A8u;
        // 0x1c507ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c507a8) {
            ctx->pc = 0x1C50784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50784;
        }
    }
    ctx->pc = 0x1C507B0u;
    // 0x1c507b0: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C507B0u;
    SET_GPR_U32(ctx, 31, 0x1C507B8u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C507B0u, 0x1C507B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C507B8u;
label_1c507b8:
    // 0x1c507b8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C507B8u;
    {
        const bool branch_taken_0x1c507b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C507BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C507B8u;
        // 0x1c507bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c507b8) {
            ctx->pc = 0x1C50788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50788;
        }
    }
    ctx->pc = 0x1C507C0u;
label_1c507c0:
    // 0x1c507c0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c507c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c507c4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C507C4u;
    {
        const bool branch_taken_0x1c507c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C507C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C507C4u;
        // 0x1c507c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c507c4) {
            ctx->pc = 0x1C50788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50788;
        }
    }
    ctx->pc = 0x1C507CCu;
    // 0x1c507cc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c507ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c507d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c507d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c507d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c507d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c507d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c507d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c507dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c507dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c507e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c507e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c507e4: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C507E4u;
    SET_GPR_U32(ctx, 31, 0x1C507ECu);
    ctx->pc = 0x1C507E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C507E4u;
    // 0x1c507e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C507E4u, 0x1C507ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C507ECu;
label_1c507ec:
    // 0x1c507ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c507ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c507f0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C507F0u;
    {
        const bool branch_taken_0x1c507f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C507F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C507F0u;
        // 0x1c507f4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c507f0) {
            ctx->pc = 0x1C50784u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c50784;
        }
    }
    ctx->pc = 0x1C507F8u;
    // 0x1c507f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c507f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c507fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c507fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c50800: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50804: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c50804u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50808: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c50808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5080c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c5080cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c50810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50814: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c50814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c50818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5081c: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C5081Cu;
    SET_GPR_U32(ctx, 31, 0x1C50824u);
    ctx->pc = 0x1C50820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5081Cu;
    // 0x1c50820: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C5081Cu, 0x1C50824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50824u;
label_1c50824:
    // 0x1c50824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50828: 0xc713e66  jal         func_1C4F998
    ctx->pc = 0x1C50828u;
    SET_GPR_U32(ctx, 31, 0x1C50830u);
    ctx->pc = 0x1C5082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50828u;
    // 0x1c5082c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F998u, 0x1C50828u, 0x1C50830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50830u;
label_1c50830:
    // 0x1c50830: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c50830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c50834: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c50834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c50838: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50838u;
    SET_GPR_U32(ctx, 31, 0x1C50840u);
    ctx->pc = 0x1C5083Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50838u;
    // 0x1c5083c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50838u, 0x1C50840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50840u;
label_1c50840:
    // 0x1c50840: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c50840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c50844: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c50844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c50848: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c50848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c5084c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c5084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c50850: 0xc713e62  jal         func_1C4F988
    ctx->pc = 0x1C50850u;
    SET_GPR_U32(ctx, 31, 0x1C50858u);
    ctx->pc = 0x1C50854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50850u;
    // 0x1c50854: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F988u, 0x1C50850u, 0x1C50858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50858u;
label_1c50858:
    // 0x1c50858: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c50858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c5085c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5085cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50860: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c50860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c50864: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50864u;
        // 0x1c50868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5086Cu;
    // 0x1c5086c: 0x0  nop
    ctx->pc = 0x1c5086cu;
    // NOP
    ctx->pc = 0x1c50870u;
}
