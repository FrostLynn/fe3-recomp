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

// Function: sub_01CDC758
// Address: 0x1cdc758 - 0x1cdc898
void sub_01CDC758_0x1cdc758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDC758_0x1cdc758");
#endif

    switch (ctx->pc) {
        case 0x1cdc778u: goto label_1cdc778;
        case 0x1cdc78cu: goto label_1cdc78c;
        case 0x1cdc790u: goto label_1cdc790;
        case 0x1cdc7acu: goto label_1cdc7ac;
        case 0x1cdc7bcu: goto label_1cdc7bc;
        case 0x1cdc7f4u: goto label_1cdc7f4;
        case 0x1cdc820u: goto label_1cdc820;
        case 0x1cdc844u: goto label_1cdc844;
        case 0x1cdc854u: goto label_1cdc854;
        default: break;
    }

    ctx->pc = 0x1cdc758u;

    // 0x1cdc758: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc760: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdc768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc76c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdc76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdc770: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC770u;
    SET_GPR_U32(ctx, 31, 0x1CDC778u);
    ctx->pc = 0x1CDC774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC770u;
    // 0x1cdc774: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC770u, 0x1CDC778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC778u;
label_1cdc778:
    // 0x1cdc778: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cdc778u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cdc77c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDC77Cu;
    {
        const bool branch_taken_0x1cdc77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC77Cu;
        // 0x1cdc780: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc77c) {
            ctx->pc = 0x1CDC7C8u;
            goto label_1cdc7c8;
        }
    }
    ctx->pc = 0x1CDC784u;
    // 0x1cdc784: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDC784u;
    {
        const bool branch_taken_0x1cdc784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc784) {
            ctx->pc = 0x1CDC7A4u;
            goto label_1cdc7a4;
        }
    }
    ctx->pc = 0x1CDC78Cu;
label_1cdc78c:
    // 0x1cdc78c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdc78cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc790:
    // 0x1cdc790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc794: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc798: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC79Cu;
        // 0x1cdc7a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC7A4u;
label_1cdc7a4:
    // 0x1cdc7a4: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDC7A4u;
    SET_GPR_U32(ctx, 31, 0x1CDC7ACu);
    ctx->pc = 0x1CDC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC7A4u;
    // 0x1cdc7a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDC7A4u, 0x1CDC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC7ACu;
label_1cdc7ac:
    // 0x1cdc7ac: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDC7ACu;
    {
        const bool branch_taken_0x1cdc7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CDC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC7ACu;
        // 0x1cdc7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc7ac) {
            ctx->pc = 0x1CDC78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc78c;
        }
    }
    ctx->pc = 0x1CDC7B4u;
    // 0x1cdc7b4: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDC7B4u;
    SET_GPR_U32(ctx, 31, 0x1CDC7BCu);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDC7B4u, 0x1CDC7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC7BCu;
label_1cdc7bc:
    // 0x1cdc7bc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDC7BCu;
    {
        const bool branch_taken_0x1cdc7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC7BCu;
        // 0x1cdc7c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc7bc) {
            ctx->pc = 0x1CDC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc790;
        }
    }
    ctx->pc = 0x1CDC7C4u;
    // 0x1cdc7c4: 0x0  nop
    ctx->pc = 0x1cdc7c4u;
    // NOP
label_1cdc7c8:
    // 0x1cdc7c8: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cdc7c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cdc7cc: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDC7CCu;
    {
        const bool branch_taken_0x1cdc7cc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC7CCu;
        // 0x1cdc7d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc7cc) {
            ctx->pc = 0x1CDC790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc790;
        }
    }
    ctx->pc = 0x1CDC7D4u;
    // 0x1cdc7d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc7d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc7dc: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1cdc7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1cdc7e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc7e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc7e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc7e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc7e8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc7e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc7ec: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC7ECu;
    SET_GPR_U32(ctx, 31, 0x1CDC7F4u);
    ctx->pc = 0x1CDC7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC7ECu;
    // 0x1cdc7f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC7ECu, 0x1CDC7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC7F4u;
label_1cdc7f4:
    // 0x1cdc7f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc7f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc7f8: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CDC7F8u;
    {
        const bool branch_taken_0x1cdc7f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC7F8u;
        // 0x1cdc7fc: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc7f8) {
            ctx->pc = 0x1CDC78Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc78c;
        }
    }
    ctx->pc = 0x1CDC800u;
    // 0x1cdc800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc804: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdc808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc80c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc810: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdc810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdc814: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc818: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC818u;
    SET_GPR_U32(ctx, 31, 0x1CDC820u);
    ctx->pc = 0x1CDC81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC818u;
    // 0x1cdc81c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC818u, 0x1CDC820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC820u;
label_1cdc820:
    // 0x1cdc820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cdc820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc828: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdc828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdc82c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc82cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc830: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc830u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc834: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc838: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdc838u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc83c: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC83Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC844u);
    ctx->pc = 0x1CDC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC83Cu;
    // 0x1cdc840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC83Cu, 0x1CDC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC844u;
label_1cdc844:
    // 0x1cdc844: 0x26100580  addiu       $s0, $s0, 0x580
    ctx->pc = 0x1cdc844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x1cdc848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc84c: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDC84Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC854u);
    ctx->pc = 0x1CDC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC84Cu;
    // 0x1cdc850: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDC84Cu, 0x1CDC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC854u;
label_1cdc854:
    // 0x1cdc854: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc854u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc858: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1cdc858u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1cdc85c: 0x25eff3e4  addiu       $t7, $t7, -0xC1C
    ctx->pc = 0x1cdc85cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964196));
    // 0x1cdc860: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1cdc860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1cdc864: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cdc864u;
    { uint32_t bits = FAST_READ32(0x1CEF3E4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cdc868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc86c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc870: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc870u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc874: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc878: 0x25eff3e8  addiu       $t7, $t7, -0xC18
    ctx->pc = 0x1cdc878u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964200));
    // 0x1cdc87c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc880: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1cdc880u;
    { uint32_t bits = FAST_READ32(0x1CEF3E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cdc884: 0x3c0f01cf  lui         $t7, 0x1CF
    ctx->pc = 0x1cdc884u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)463 << 16));
    // 0x1cdc888: 0x25eff3ec  addiu       $t7, $t7, -0xC14
    ctx->pc = 0x1cdc888u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294964204));
    // 0x1cdc88c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1cdc88cu;
    { uint32_t bits = FAST_READ32(0x1CEF3ECu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1cdc890: 0x8736b2c  j           func_1CDACB0
    ctx->pc = 0x1CDC890u;
    ctx->pc = 0x1CDC894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC890u;
    // 0x1cdc894: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB0u;
    sub_01CDACB0_0x1cdacb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDC898u;
}
