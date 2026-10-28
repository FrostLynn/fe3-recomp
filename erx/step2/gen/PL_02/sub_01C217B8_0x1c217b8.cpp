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

// Function: sub_01C217B8
// Address: 0x1c217b8 - 0x1c218f0
void sub_01C217B8_0x1c217b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C217B8_0x1c217b8");
#endif

    switch (ctx->pc) {
        case 0x1c217d8u: goto label_1c217d8;
        case 0x1c217ecu: goto label_1c217ec;
        case 0x1c217f0u: goto label_1c217f0;
        case 0x1c2180cu: goto label_1c2180c;
        case 0x1c2181cu: goto label_1c2181c;
        case 0x1c21868u: goto label_1c21868;
        case 0x1c218a4u: goto label_1c218a4;
        case 0x1c218b0u: goto label_1c218b0;
        case 0x1c218c0u: goto label_1c218c0;
        case 0x1c218d8u: goto label_1c218d8;
        default: break;
    }

    ctx->pc = 0x1c217b8u;

    // 0x1c217b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c217b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c217bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c217bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c217c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c217c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c217c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c217c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c217c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c217c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c217cc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c217ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c217d0: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C217D0u;
    SET_GPR_U32(ctx, 31, 0x1C217D8u);
    ctx->pc = 0x1C217D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C217D0u;
    // 0x1c217d4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C217D0u, 0x1C217D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C217D8u;
label_1c217d8:
    // 0x1c217d8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c217d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c217dc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C217DCu;
    {
        const bool branch_taken_0x1c217dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C217E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C217DCu;
        // 0x1c217e0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c217dc) {
            ctx->pc = 0x1C21828u;
            goto label_1c21828;
        }
    }
    ctx->pc = 0x1C217E4u;
    // 0x1c217e4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C217E4u;
    {
        const bool branch_taken_0x1c217e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c217e4) {
            ctx->pc = 0x1C21804u;
            goto label_1c21804;
        }
    }
    ctx->pc = 0x1C217ECu;
label_1c217ec:
    // 0x1c217ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c217ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c217f0:
    // 0x1c217f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c217f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c217f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c217f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c217f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c217f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c217fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C217FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C21800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C217FCu;
        // 0x1c21800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C217FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C21804u;
label_1c21804:
    // 0x1c21804: 0xc707c56  jal         func_1C1F158
    ctx->pc = 0x1C21804u;
    SET_GPR_U32(ctx, 31, 0x1C2180Cu);
    ctx->pc = 0x1C21808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21804u;
    // 0x1c21808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F158u, 0x1C21804u, 0x1C2180Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2180Cu;
label_1c2180c:
    // 0x1c2180c: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1C2180Cu;
    {
        const bool branch_taken_0x1c2180c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C21810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2180Cu;
        // 0x1c21810: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2180c) {
            ctx->pc = 0x1C217ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c217ec;
        }
    }
    ctx->pc = 0x1C21814u;
    // 0x1c21814: 0xc707c58  jal         func_1C1F160
    ctx->pc = 0x1C21814u;
    SET_GPR_U32(ctx, 31, 0x1C2181Cu);
    ctx->pc = 0x1C1F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F160u, 0x1C21814u, 0x1C2181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2181Cu;
label_1c2181c:
    // 0x1c2181c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C2181Cu;
    {
        const bool branch_taken_0x1c2181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2181Cu;
        // 0x1c21820: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2181c) {
            ctx->pc = 0x1C217F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c217f0;
        }
    }
    ctx->pc = 0x1C21824u;
    // 0x1c21824: 0x0  nop
    ctx->pc = 0x1c21824u;
    // NOP
label_1c21828:
    // 0x1c21828: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c21828u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c2182c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C2182Cu;
    {
        const bool branch_taken_0x1c2182c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C21830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2182Cu;
        // 0x1c21830: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2182c) {
            ctx->pc = 0x1C217F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c217f0;
        }
    }
    ctx->pc = 0x1C21834u;
    // 0x1c21834: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1c21834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1c21838: 0x3c0e01c3  lui         $t6, 0x1C3
    ctx->pc = 0x1c21838u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)451 << 16));
    // 0x1c2183c: 0x25ce9390  addiu       $t6, $t6, -0x6C70
    ctx->pc = 0x1c2183cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294939536));
    // 0x1c21840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c21840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21844: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c21844u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c21848: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c21848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2184c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c2184cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c21850: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21850u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21854: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c21854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c21858: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c21858u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2185c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c2185cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21860: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C21860u;
    SET_GPR_U32(ctx, 31, 0x1C21868u);
    ctx->pc = 0x1C21864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21860u;
    // 0x1c21864: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C21860u, 0x1C21868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C21868u;
label_1c21868:
    // 0x1c21868: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c21868u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2186c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1C2186Cu;
    {
        const bool branch_taken_0x1c2186c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C21870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2186Cu;
        // 0x1c21870: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2186c) {
            ctx->pc = 0x1C217ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c217ec;
        }
    }
    ctx->pc = 0x1C21874u;
    // 0x1c21874: 0x0  nop
    ctx->pc = 0x1c21874u;
    // NOP
    // 0x1c21878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c2187c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c2187cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c21880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c21880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c21884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c21884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c21888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c2188c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c2188cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c21890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c21894: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c21894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c21898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c21898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2189c: 0xc707c66  jal         func_1C1F198
    ctx->pc = 0x1C2189Cu;
    SET_GPR_U32(ctx, 31, 0x1C218A4u);
    ctx->pc = 0x1C218A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2189Cu;
    // 0x1c218a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F198u, 0x1C2189Cu, 0x1C218A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C218A4u;
label_1c218a4:
    // 0x1c218a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c218a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c218a8: 0xc707c5e  jal         func_1C1F178
    ctx->pc = 0x1C218A8u;
    SET_GPR_U32(ctx, 31, 0x1C218B0u);
    ctx->pc = 0x1C218ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C218A8u;
    // 0x1c218ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F178u, 0x1C218A8u, 0x1C218B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C218B0u;
label_1c218b0:
    // 0x1c218b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c218b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c218b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c218b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c218b8: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C218B8u;
    SET_GPR_U32(ctx, 31, 0x1C218C0u);
    ctx->pc = 0x1C218BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C218B8u;
    // 0x1c218bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C218B8u, 0x1C218C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C218C0u;
label_1c218c0:
    // 0x1c218c0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c218c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c218c4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c218c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c218c8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c218c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c218cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c218ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c218d0: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C218D0u;
    SET_GPR_U32(ctx, 31, 0x1C218D8u);
    ctx->pc = 0x1C218D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C218D0u;
    // 0x1c218d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C218D0u, 0x1C218D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C218D8u;
label_1c218d8:
    // 0x1c218d8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c218d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c218dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c218dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c218e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c218e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c218e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C218E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C218E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C218E4u;
        // 0x1c218e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C218E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C218ECu;
    // 0x1c218ec: 0x0  nop
    ctx->pc = 0x1c218ecu;
    // NOP
    ctx->pc = 0x1c218f0u;
}
