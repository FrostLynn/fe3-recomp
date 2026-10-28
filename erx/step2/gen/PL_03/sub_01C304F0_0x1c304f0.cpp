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

// Function: sub_01C304F0
// Address: 0x1c304f0 - 0x1c30618
void sub_01C304F0_0x1c304f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C304F0_0x1c304f0");
#endif

    switch (ctx->pc) {
        case 0x1c30518u: goto label_1c30518;
        case 0x1c3052cu: goto label_1c3052c;
        case 0x1c30530u: goto label_1c30530;
        case 0x1c30550u: goto label_1c30550;
        case 0x1c30560u: goto label_1c30560;
        case 0x1c30594u: goto label_1c30594;
        case 0x1c305ccu: goto label_1c305cc;
        case 0x1c305d8u: goto label_1c305d8;
        case 0x1c305e8u: goto label_1c305e8;
        case 0x1c30600u: goto label_1c30600;
        default: break;
    }

    ctx->pc = 0x1c304f0u;

    // 0x1c304f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c304f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c304f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c304f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c304f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c304f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c304fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c304fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c30500: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c30500u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30504: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c30504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c30508: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c30508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3050c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c3050cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c30510: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C30510u;
    SET_GPR_U32(ctx, 31, 0x1C30518u);
    ctx->pc = 0x1C30514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30510u;
    // 0x1c30514: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C30510u, 0x1C30518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30518u;
label_1c30518:
    // 0x1c30518: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c30518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c3051c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C3051Cu;
    {
        const bool branch_taken_0x1c3051c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3051Cu;
        // 0x1c30520: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3051c) {
            ctx->pc = 0x1C30568u;
            goto label_1c30568;
        }
    }
    ctx->pc = 0x1C30524u;
    // 0x1c30524: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C30524u;
    {
        const bool branch_taken_0x1c30524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c30524) {
            ctx->pc = 0x1C30548u;
            goto label_1c30548;
        }
    }
    ctx->pc = 0x1C3052Cu;
label_1c3052c:
    // 0x1c3052c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3052cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c30530:
    // 0x1c30530: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30530u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30534: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c30534u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c30538: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c30538u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3053c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c3053cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c30540: 0x3e00008  jr          $ra
    ctx->pc = 0x1C30540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30540u;
        // 0x1c30544: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C30540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30548u;
label_1c30548:
    // 0x1c30548: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C30548u;
    SET_GPR_U32(ctx, 31, 0x1C30550u);
    ctx->pc = 0x1C3054Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C30548u;
    // 0x1c3054c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C30548u, 0x1C30550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30550u;
label_1c30550:
    // 0x1c30550: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C30550u;
    {
        const bool branch_taken_0x1c30550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C30554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30550u;
        // 0x1c30554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30550) {
            ctx->pc = 0x1C3052Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3052c;
        }
    }
    ctx->pc = 0x1C30558u;
    // 0x1c30558: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C30558u;
    SET_GPR_U32(ctx, 31, 0x1C30560u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C30558u, 0x1C30560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30560u;
label_1c30560:
    // 0x1c30560: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C30560u;
    {
        const bool branch_taken_0x1c30560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C30564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30560u;
        // 0x1c30564: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30560) {
            ctx->pc = 0x1C30530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30530;
        }
    }
    ctx->pc = 0x1C30568u;
label_1c30568:
    // 0x1c30568: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c30568u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c3056c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C3056Cu;
    {
        const bool branch_taken_0x1c3056c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C30570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3056Cu;
        // 0x1c30570: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3056c) {
            ctx->pc = 0x1C30530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c30530;
        }
    }
    ctx->pc = 0x1C30574u;
    // 0x1c30574: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c30574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c30578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3057c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c3057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30580: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c30580u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c30584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c30588: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c30588u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3058c: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C3058Cu;
    SET_GPR_U32(ctx, 31, 0x1C30594u);
    ctx->pc = 0x1C30590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3058Cu;
    // 0x1c30590: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C3058Cu, 0x1C30594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30594u;
label_1c30594:
    // 0x1c30594: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c30594u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c30598: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C30598u;
    {
        const bool branch_taken_0x1c30598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C30598u;
        // 0x1c3059c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c30598) {
            ctx->pc = 0x1C3052Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3052c;
        }
    }
    ctx->pc = 0x1C305A0u;
    // 0x1c305a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c305a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c305a4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c305a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c305a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c305a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c305ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c305acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c305b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c305b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c305b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c305b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c305b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c305b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c305bc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c305bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c305c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c305c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c305c4: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C305C4u;
    SET_GPR_U32(ctx, 31, 0x1C305CCu);
    ctx->pc = 0x1C305C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C305C4u;
    // 0x1c305c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C305C4u, 0x1C305CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C305CCu;
label_1c305cc:
    // 0x1c305cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c305ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c305d0: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C305D0u;
    SET_GPR_U32(ctx, 31, 0x1C305D8u);
    ctx->pc = 0x1C305D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C305D0u;
    // 0x1c305d4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C305D0u, 0x1C305D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C305D8u;
label_1c305d8:
    // 0x1c305d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c305d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c305dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c305dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c305e0: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C305E0u;
    SET_GPR_U32(ctx, 31, 0x1C305E8u);
    ctx->pc = 0x1C305E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C305E0u;
    // 0x1c305e4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C305E0u, 0x1C305E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C305E8u;
label_1c305e8:
    // 0x1c305e8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c305e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c305ec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c305ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c305f0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c305f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c305f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c305f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c305f8: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C305F8u;
    SET_GPR_U32(ctx, 31, 0x1C30600u);
    ctx->pc = 0x1C305FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C305F8u;
    // 0x1c305fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C305F8u, 0x1C30600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C30600u;
label_1c30600:
    // 0x1c30600: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c30600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c30604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c30604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c30608: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c30608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3060c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3060Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C30610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3060Cu;
        // 0x1c30610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3060Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C30614u;
    // 0x1c30614: 0x0  nop
    ctx->pc = 0x1c30614u;
    // NOP
    ctx->pc = 0x1c30618u;
}
