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

// Function: sub_01CAE550
// Address: 0x1cae550 - 0x1cae688
void sub_01CAE550_0x1cae550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE550_0x1cae550");
#endif

    switch (ctx->pc) {
        case 0x1cae570u: goto label_1cae570;
        case 0x1cae584u: goto label_1cae584;
        case 0x1cae588u: goto label_1cae588;
        case 0x1cae5a4u: goto label_1cae5a4;
        case 0x1cae5b4u: goto label_1cae5b4;
        case 0x1cae600u: goto label_1cae600;
        case 0x1cae63cu: goto label_1cae63c;
        case 0x1cae648u: goto label_1cae648;
        case 0x1cae658u: goto label_1cae658;
        case 0x1cae670u: goto label_1cae670;
        default: break;
    }

    ctx->pc = 0x1cae550u;

    // 0x1cae550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cae550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cae554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae558: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cae558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cae55c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cae560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cae560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae564: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cae564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cae568: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE568u;
    SET_GPR_U32(ctx, 31, 0x1CAE570u);
    ctx->pc = 0x1CAE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE568u;
    // 0x1cae56c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE568u, 0x1CAE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE570u;
label_1cae570:
    // 0x1cae570: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cae570u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cae574: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CAE574u;
    {
        const bool branch_taken_0x1cae574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE574u;
        // 0x1cae578: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae574) {
            ctx->pc = 0x1CAE5C0u;
            goto label_1cae5c0;
        }
    }
    ctx->pc = 0x1CAE57Cu;
    // 0x1cae57c: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CAE57Cu;
    {
        const bool branch_taken_0x1cae57c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cae57c) {
            ctx->pc = 0x1CAE59Cu;
            goto label_1cae59c;
        }
    }
    ctx->pc = 0x1CAE584u;
label_1cae584:
    // 0x1cae584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cae584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cae588:
    // 0x1cae588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae58c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cae58cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae590: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cae590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cae594: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE594u;
        // 0x1cae598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE59Cu;
label_1cae59c:
    // 0x1cae59c: 0xc72b448  jal         func_1CAD120
    ctx->pc = 0x1CAE59Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE5A4u);
    ctx->pc = 0x1CAE5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE59Cu;
    // 0x1cae5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD120u, 0x1CAE59Cu, 0x1CAE5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE5A4u;
label_1cae5a4:
    // 0x1cae5a4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CAE5A4u;
    {
        const bool branch_taken_0x1cae5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1CAE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE5A4u;
        // 0x1cae5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae5a4) {
            ctx->pc = 0x1CAE584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae584;
        }
    }
    ctx->pc = 0x1CAE5ACu;
    // 0x1cae5ac: 0xc72b44a  jal         func_1CAD128
    ctx->pc = 0x1CAE5ACu;
    SET_GPR_U32(ctx, 31, 0x1CAE5B4u);
    ctx->pc = 0x1CAD128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD128u, 0x1CAE5ACu, 0x1CAE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE5B4u;
label_1cae5b4:
    // 0x1cae5b4: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1CAE5B4u;
    {
        const bool branch_taken_0x1cae5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE5B4u;
        // 0x1cae5b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae5b4) {
            ctx->pc = 0x1CAE588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae588;
        }
    }
    ctx->pc = 0x1CAE5BCu;
    // 0x1cae5bc: 0x0  nop
    ctx->pc = 0x1cae5bcu;
    // NOP
label_1cae5c0:
    // 0x1cae5c0: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1cae5c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1cae5c4: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CAE5C4u;
    {
        const bool branch_taken_0x1cae5c4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE5C4u;
        // 0x1cae5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae5c4) {
            ctx->pc = 0x1CAE588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae588;
        }
    }
    ctx->pc = 0x1CAE5CCu;
    // 0x1cae5cc: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cae5ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cae5d0: 0x3c0e01cb  lui         $t6, 0x1CB
    ctx->pc = 0x1cae5d0u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)459 << 16));
    // 0x1cae5d4: 0x25cef600  addiu       $t6, $t6, -0xA00
    ctx->pc = 0x1cae5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964736));
    // 0x1cae5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cae5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae5dc: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cae5dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cae5e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cae5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae5e4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cae5e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cae5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae5ec: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cae5ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cae5f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae5f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae5f4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae5f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae5f8: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE5F8u;
    SET_GPR_U32(ctx, 31, 0x1CAE600u);
    ctx->pc = 0x1CAE5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE5F8u;
    // 0x1cae5fc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE5F8u, 0x1CAE600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE600u;
label_1cae600:
    // 0x1cae600: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae600u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae604: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1CAE604u;
    {
        const bool branch_taken_0x1cae604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE604u;
        // 0x1cae608: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae604) {
            ctx->pc = 0x1CAE584u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cae584;
        }
    }
    ctx->pc = 0x1CAE60Cu;
    // 0x1cae60c: 0x0  nop
    ctx->pc = 0x1cae60cu;
    // NOP
    // 0x1cae610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae614: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cae614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cae618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cae618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cae61c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae61cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae620: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cae620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cae624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae628: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae62c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cae62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae630: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cae630u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae634: 0xc72b458  jal         func_1CAD160
    ctx->pc = 0x1CAE634u;
    SET_GPR_U32(ctx, 31, 0x1CAE63Cu);
    ctx->pc = 0x1CAE638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE634u;
    // 0x1cae638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD160u, 0x1CAE634u, 0x1CAE63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE63Cu;
label_1cae63c:
    // 0x1cae63c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cae63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae640: 0xc72b450  jal         func_1CAD140
    ctx->pc = 0x1CAE640u;
    SET_GPR_U32(ctx, 31, 0x1CAE648u);
    ctx->pc = 0x1CAE644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE640u;
    // 0x1cae644: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD140u, 0x1CAE640u, 0x1CAE648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE648u;
label_1cae648:
    // 0x1cae648: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae64c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cae64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cae650: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE650u;
    SET_GPR_U32(ctx, 31, 0x1CAE658u);
    ctx->pc = 0x1CAE654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE650u;
    // 0x1cae654: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE650u, 0x1CAE658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE658u;
label_1cae658:
    // 0x1cae658: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cae658u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cae65c: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cae65cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cae660: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1cae660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1cae664: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cae664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cae668: 0xc72b44c  jal         func_1CAD130
    ctx->pc = 0x1CAE668u;
    SET_GPR_U32(ctx, 31, 0x1CAE670u);
    ctx->pc = 0x1CAE66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE668u;
    // 0x1cae66c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CAD130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CAD130u, 0x1CAE668u, 0x1CAE670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE670u;
label_1cae670:
    // 0x1cae670: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cae670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cae674: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cae674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae678: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cae678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cae67c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAE67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE67Cu;
        // 0x1cae680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAE67Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAE684u;
    // 0x1cae684: 0x0  nop
    ctx->pc = 0x1cae684u;
    // NOP
    ctx->pc = 0x1cae688u;
}
