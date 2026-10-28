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

// Function: sub_01CDC610
// Address: 0x1cdc610 - 0x1cdc730
void sub_01CDC610_0x1cdc610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDC610_0x1cdc610");
#endif

    switch (ctx->pc) {
        case 0x1cdc630u: goto label_1cdc630;
        case 0x1cdc644u: goto label_1cdc644;
        case 0x1cdc648u: goto label_1cdc648;
        case 0x1cdc664u: goto label_1cdc664;
        case 0x1cdc674u: goto label_1cdc674;
        case 0x1cdc6acu: goto label_1cdc6ac;
        case 0x1cdc6e4u: goto label_1cdc6e4;
        case 0x1cdc6f0u: goto label_1cdc6f0;
        case 0x1cdc700u: goto label_1cdc700;
        case 0x1cdc718u: goto label_1cdc718;
        default: break;
    }

    ctx->pc = 0x1cdc610u;

    // 0x1cdc610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdc610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdc614: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdc618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdc61c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdc61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdc620: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cdc620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc624: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cdc624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cdc628: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC628u;
    SET_GPR_U32(ctx, 31, 0x1CDC630u);
    ctx->pc = 0x1CDC62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC628u;
    // 0x1cdc62c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC628u, 0x1CDC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC630u;
label_1cdc630:
    // 0x1cdc630: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cdc630u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cdc634: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CDC634u;
    {
        const bool branch_taken_0x1cdc634 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC634u;
        // 0x1cdc638: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc634) {
            ctx->pc = 0x1CDC680u;
            goto label_1cdc680;
        }
    }
    ctx->pc = 0x1CDC63Cu;
    // 0x1cdc63c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CDC63Cu;
    {
        const bool branch_taken_0x1cdc63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cdc63c) {
            ctx->pc = 0x1CDC65Cu;
            goto label_1cdc65c;
        }
    }
    ctx->pc = 0x1CDC644u;
label_1cdc644:
    // 0x1cdc644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdc644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdc648:
    // 0x1cdc648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc64c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdc64cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc650: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdc650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc654: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC654u;
        // 0x1cdc658: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC65Cu;
label_1cdc65c:
    // 0x1cdc65c: 0xc736892  jal         func_1CDA248
    ctx->pc = 0x1CDC65Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC664u);
    ctx->pc = 0x1CDC660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC65Cu;
    // 0x1cdc660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA248u, 0x1CDC65Cu, 0x1CDC664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC664u;
label_1cdc664:
    // 0x1cdc664: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CDC664u;
    {
        const bool branch_taken_0x1cdc664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CDC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC664u;
        // 0x1cdc668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc664) {
            ctx->pc = 0x1CDC644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc644;
        }
    }
    ctx->pc = 0x1CDC66Cu;
    // 0x1cdc66c: 0xc736894  jal         func_1CDA250
    ctx->pc = 0x1CDC66Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC674u);
    ctx->pc = 0x1CDA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA250u, 0x1CDC66Cu, 0x1CDC674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC674u;
label_1cdc674:
    // 0x1cdc674: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CDC674u;
    {
        const bool branch_taken_0x1cdc674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC674u;
        // 0x1cdc678: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc674) {
            ctx->pc = 0x1CDC648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc648;
        }
    }
    ctx->pc = 0x1CDC67Cu;
    // 0x1cdc67c: 0x0  nop
    ctx->pc = 0x1cdc67cu;
    // NOP
label_1cdc680:
    // 0x1cdc680: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cdc680u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cdc684: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CDC684u;
    {
        const bool branch_taken_0x1cdc684 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC684u;
        // 0x1cdc688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc684) {
            ctx->pc = 0x1CDC648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc648;
        }
    }
    ctx->pc = 0x1CDC68Cu;
    // 0x1cdc68c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cdc68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc690: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdc690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc694: 0x24060049  addiu       $a2, $zero, 0x49
    ctx->pc = 0x1cdc694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1cdc698: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc69c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc69cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc6a0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc6a4: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC6A4u;
    SET_GPR_U32(ctx, 31, 0x1CDC6ACu);
    ctx->pc = 0x1CDC6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC6A4u;
    // 0x1cdc6a8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC6A4u, 0x1CDC6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC6ACu;
label_1cdc6ac:
    // 0x1cdc6ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc6acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc6b0: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CDC6B0u;
    {
        const bool branch_taken_0x1cdc6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC6B0u;
        // 0x1cdc6b4: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc6b0) {
            ctx->pc = 0x1CDC644u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cdc644;
        }
    }
    ctx->pc = 0x1CDC6B8u;
    // 0x1cdc6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc6bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdc6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdc6c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdc6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdc6c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdc6c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc6c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdc6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdc6cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdc6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdc6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc6d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cdc6d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc6d8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdc6d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc6dc: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDC6DCu;
    SET_GPR_U32(ctx, 31, 0x1CDC6E4u);
    ctx->pc = 0x1CDC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC6DCu;
    // 0x1cdc6e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDC6DCu, 0x1CDC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC6E4u;
label_1cdc6e4:
    // 0x1cdc6e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdc6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdc6e8: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDC6E8u;
    SET_GPR_U32(ctx, 31, 0x1CDC6F0u);
    ctx->pc = 0x1CDC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC6E8u;
    // 0x1cdc6ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDC6E8u, 0x1CDC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC6F0u;
label_1cdc6f0:
    // 0x1cdc6f0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdc6f4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdc6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdc6f8: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC6F8u;
    SET_GPR_U32(ctx, 31, 0x1CDC700u);
    ctx->pc = 0x1CDC6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC6F8u;
    // 0x1cdc6fc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC6F8u, 0x1CDC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC700u;
label_1cdc700:
    // 0x1cdc700: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cdc700u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc704: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc704u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc708: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cdc708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cdc70c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdc70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdc710: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDC710u;
    SET_GPR_U32(ctx, 31, 0x1CDC718u);
    ctx->pc = 0x1CDC714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDC710u;
    // 0x1cdc714: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDC710u, 0x1CDC718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDC718u;
label_1cdc718:
    // 0x1cdc718: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cdc718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cdc71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc720: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdc720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdc724: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDC724u;
        // 0x1cdc728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDC724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDC72Cu;
    // 0x1cdc72c: 0x0  nop
    ctx->pc = 0x1cdc72cu;
    // NOP
    ctx->pc = 0x1cdc730u;
}
