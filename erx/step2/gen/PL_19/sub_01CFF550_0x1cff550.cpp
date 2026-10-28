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

// Function: sub_01CFF550
// Address: 0x1cff550 - 0x1cff898
void sub_01CFF550_0x1cff550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF550_0x1cff550");
#endif

    switch (ctx->pc) {
        case 0x1cff574u: goto label_1cff574;
        case 0x1cff58cu: goto label_1cff58c;
        case 0x1cff590u: goto label_1cff590;
        case 0x1cff5b0u: goto label_1cff5b0;
        case 0x1cff5c0u: goto label_1cff5c0;
        case 0x1cff5f8u: goto label_1cff5f8;
        case 0x1cff5fcu: goto label_1cff5fc;
        case 0x1cff638u: goto label_1cff638;
        case 0x1cff688u: goto label_1cff688;
        case 0x1cff694u: goto label_1cff694;
        case 0x1cff770u: goto label_1cff770;
        case 0x1cff794u: goto label_1cff794;
        case 0x1cff7a0u: goto label_1cff7a0;
        case 0x1cff7dcu: goto label_1cff7dc;
        case 0x1cff804u: goto label_1cff804;
        case 0x1cff840u: goto label_1cff840;
        case 0x1cff86cu: goto label_1cff86c;
        default: break;
    }

    ctx->pc = 0x1cff550u;

    // 0x1cff550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff554: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cff554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cff558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff55c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cff55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cff560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1cff560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff564: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cff564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cff568: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cff568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cff56c: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF56Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF574u);
    ctx->pc = 0x1CFF570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF56Cu;
    // 0x1cff570: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF56Cu, 0x1CFF574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF574u;
label_1cff574:
    // 0x1cff574: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1cff574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1cff578: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CFF578u;
    {
        const bool branch_taken_0x1cff578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF578u;
        // 0x1cff57c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff578) {
            ctx->pc = 0x1CFF5C8u;
            goto label_1cff5c8;
        }
    }
    ctx->pc = 0x1CFF580u;
    // 0x1cff580: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff580u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff584: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFF584u;
    {
        const bool branch_taken_0x1cff584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1cff584) {
            ctx->pc = 0x1CFF5A8u;
            goto label_1cff5a8;
        }
    }
    ctx->pc = 0x1CFF58Cu;
label_1cff58c:
    // 0x1cff58c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cff58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff590:
    // 0x1cff590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cff594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff598: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cff598u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff59c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cff59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cff5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5A0u;
        // 0x1cff5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF5A8u;
label_1cff5a8:
    // 0x1cff5a8: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFF5A8u;
    SET_GPR_U32(ctx, 31, 0x1CFF5B0u);
    ctx->pc = 0x1CFF5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF5A8u;
    // 0x1cff5ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFF5A8u, 0x1CFF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF5B0u;
label_1cff5b0:
    // 0x1cff5b0: 0x5450fff7  bnel        $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1CFF5B0u;
    {
        const bool branch_taken_0x1cff5b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1cff5b0) {
            ctx->pc = 0x1CFF5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF5B0u;
            // 0x1cff5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff590;
        }
    }
    ctx->pc = 0x1CFF5B8u;
    // 0x1cff5b8: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFF5B8u;
    SET_GPR_U32(ctx, 31, 0x1CFF5C0u);
    ctx->pc = 0x1CFF5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF5B8u;
    // 0x1cff5bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFF5B8u, 0x1CFF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF5C0u;
label_1cff5c0:
    // 0x1cff5c0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1CFF5C0u;
    {
        const bool branch_taken_0x1cff5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5C0u;
        // 0x1cff5c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff5c0) {
            ctx->pc = 0x1CFF590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff590;
        }
    }
    ctx->pc = 0x1CFF5C8u;
label_1cff5c8:
    // 0x1cff5c8: 0xc621001c  lwc1        $f1, 0x1C($s1)
    ctx->pc = 0x1cff5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cff5cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff5ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff5d0: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x1cff5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff5d4: 0x8e2e002c  lw          $t6, 0x2C($s1)
    ctx->pc = 0x1cff5d4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cff5d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1cff5d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cff5dc: 0x11cf0048  beq         $t6, $t7, . + 4 + (0x48 << 2)
    ctx->pc = 0x1CFF5DCu;
    {
        const bool branch_taken_0x1cff5dc = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CFF5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5DCu;
        // 0x1cff5e0: 0xe621001c  swc1        $f1, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff5dc) {
            ctx->pc = 0x1CFF700u;
            goto label_1cff700;
        }
    }
    ctx->pc = 0x1CFF5E4u;
    // 0x1cff5e4: 0x29cf0002  slti        $t7, $t6, 0x2
    ctx->pc = 0x1cff5e4u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cff5e8: 0x11e0002f  beqz        $t7, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CFF5E8u;
    {
        const bool branch_taken_0x1cff5e8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5E8u;
        // 0x1cff5ec: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff5e8) {
            ctx->pc = 0x1CFF6A8u;
            goto label_1cff6a8;
        }
    }
    ctx->pc = 0x1CFF5F0u;
    // 0x1cff5f0: 0x11c00014  beqz        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CFF5F0u;
    {
        const bool branch_taken_0x1cff5f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5F0u;
        // 0x1cff5f4: 0x3c0f01d1  lui         $t7, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff5f0) {
            ctx->pc = 0x1CFF644u;
            goto label_1cff644;
        }
    }
    ctx->pc = 0x1CFF5F8u;
label_1cff5f8:
    // 0x1cff5f8: 0x8e4f0580  lw          $t7, 0x580($s2)
    ctx->pc = 0x1cff5f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
label_1cff5fc:
    // 0x1cff5fc: 0x15e0ffe4  bnez        $t7, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CFF5FCu;
    {
        const bool branch_taken_0x1cff5fc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF5FCu;
        // 0x1cff600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff5fc) {
            ctx->pc = 0x1CFF590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff590;
        }
    }
    ctx->pc = 0x1CFF604u;
    // 0x1cff604: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1cff604u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1cff608: 0x3c0e01d0  lui         $t6, 0x1D0
    ctx->pc = 0x1cff608u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)464 << 16));
    // 0x1cff60c: 0x25ce5e30  addiu       $t6, $t6, 0x5E30
    ctx->pc = 0x1cff60cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 24112));
    // 0x1cff610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cff610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff614: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cff614u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cff618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cff618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff61c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cff61cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cff620: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff624: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cff624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cff628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff62c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff62cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff630: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF630u;
    SET_GPR_U32(ctx, 31, 0x1CFF638u);
    ctx->pc = 0x1CFF634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF630u;
    // 0x1cff634: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF630u, 0x1CFF638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF638u;
label_1cff638:
    // 0x1cff638: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff638u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff63c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x1CFF63Cu;
    {
        const bool branch_taken_0x1cff63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF63Cu;
        // 0x1cff640: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff63c) {
            ctx->pc = 0x1CFF58Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff58c;
        }
    }
    ctx->pc = 0x1CFF644u;
label_1cff644:
    // 0x1cff644: 0x25efbc20  addiu       $t7, $t7, -0x43E0
    ctx->pc = 0x1cff644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949920));
    // 0x1cff648: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff64c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cff64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff650: 0x4500ffe9  bc1f        . + 4 + (-0x17 << 2)
    ctx->pc = 0x1CFF650u;
    {
        const bool branch_taken_0x1cff650 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF650u;
        // 0x1cff654: 0x3c0f01d1  lui         $t7, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff650) {
            ctx->pc = 0x1CFF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5f8;
        }
    }
    ctx->pc = 0x1CFF658u;
    // 0x1cff658: 0x25efbc24  addiu       $t7, $t7, -0x43DC
    ctx->pc = 0x1cff658u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949924));
    // 0x1cff65c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff660: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cff660u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff664: 0x4503ffe5  bc1tl       . + 4 + (-0x1B << 2)
    ctx->pc = 0x1CFF664u;
    {
        const bool branch_taken_0x1cff664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff664) {
            ctx->pc = 0x1CFF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF664u;
            // 0x1cff668: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5fc;
        }
    }
    ctx->pc = 0x1CFF66Cu;
    // 0x1cff66c: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff66cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff670: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cff670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cff674: 0x25efbc28  addiu       $t7, $t7, -0x43D8
    ctx->pc = 0x1cff674u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949928));
    // 0x1cff678: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cff678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cff67c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cff67cu;
    { uint32_t bits = FAST_READ32(0x1D0BC28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cff680: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff680u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff684: 0x25efbc2c  addiu       $t7, $t7, -0x43D4
    ctx->pc = 0x1cff684u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949932));
label_1cff688:
    // 0x1cff688: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cff688u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cff68c: 0xc73f730  jal         func_1CFDCC0
    ctx->pc = 0x1CFF68Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF694u);
    ctx->pc = 0x1CFF690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF68Cu;
    // 0x1cff690: 0xc5ef0000  lwc1        $f15, 0x0($t7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFDCC0u, 0x1CFF68Cu, 0x1CFF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF694u;
label_1cff694:
    // 0x1cff694: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff694u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff698: 0x25efbc30  addiu       $t7, $t7, -0x43D0
    ctx->pc = 0x1cff698u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949936));
    // 0x1cff69c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff69cu;
    { uint32_t bits = FAST_READ32(0x1D0BC30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff6a0: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x1CFF6A0u;
    {
        const bool branch_taken_0x1cff6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF6A0u;
        // 0x1cff6a4: 0xe620001c  swc1        $f0, 0x1C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff6a0) {
            ctx->pc = 0x1CFF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5f8;
        }
    }
    ctx->pc = 0x1CFF6A8u;
label_1cff6a8:
    // 0x1cff6a8: 0x55cfffd4  bnel        $t6, $t7, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1CFF6A8u;
    {
        const bool branch_taken_0x1cff6a8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cff6a8) {
            ctx->pc = 0x1CFF6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF6A8u;
            // 0x1cff6ac: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5fc;
        }
    }
    ctx->pc = 0x1CFF6B0u;
    // 0x1cff6b0: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff6b0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff6b4: 0x25efbc3c  addiu       $t7, $t7, -0x43C4
    ctx->pc = 0x1cff6b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949948));
    // 0x1cff6b8: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff6b8u;
    { uint32_t bits = FAST_READ32(0x1D0BC3Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff6bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cff6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff6c0: 0x4500ffcd  bc1f        . + 4 + (-0x33 << 2)
    ctx->pc = 0x1CFF6C0u;
    {
        const bool branch_taken_0x1cff6c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF6C0u;
        // 0x1cff6c4: 0x3c0f01d1  lui         $t7, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff6c0) {
            ctx->pc = 0x1CFF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5f8;
        }
    }
    ctx->pc = 0x1CFF6C8u;
    // 0x1cff6c8: 0x25efbc24  addiu       $t7, $t7, -0x43DC
    ctx->pc = 0x1cff6c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949924));
    // 0x1cff6cc: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff6d0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cff6d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff6d4: 0x4503ffc9  bc1tl       . + 4 + (-0x37 << 2)
    ctx->pc = 0x1CFF6D4u;
    {
        const bool branch_taken_0x1cff6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff6d4) {
            ctx->pc = 0x1CFF6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF6D4u;
            // 0x1cff6d8: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5fc;
        }
    }
    ctx->pc = 0x1CFF6DCu;
    // 0x1cff6dc: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff6dcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff6e0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cff6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cff6e4: 0x25efbc28  addiu       $t7, $t7, -0x43D8
    ctx->pc = 0x1cff6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949928));
    // 0x1cff6e8: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cff6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cff6ec: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cff6ecu;
    { uint32_t bits = FAST_READ32(0x1D0BC28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cff6f0: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff6f0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff6f4: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1CFF6F4u;
    {
        const bool branch_taken_0x1cff6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF6F4u;
        // 0x1cff6f8: 0x25efbc20  addiu       $t7, $t7, -0x43E0 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff6f4) {
            ctx->pc = 0x1CFF688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff688;
        }
    }
    ctx->pc = 0x1CFF6FCu;
    // 0x1cff6fc: 0x0  nop
    ctx->pc = 0x1cff6fcu;
    // NOP
label_1cff700:
    // 0x1cff700: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff700u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff704: 0x25efbc34  addiu       $t7, $t7, -0x43CC
    ctx->pc = 0x1cff704u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949940));
    // 0x1cff708: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff708u;
    { uint32_t bits = FAST_READ32(0x1D0BC34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff70c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cff70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff710: 0x4500ffb9  bc1f        . + 4 + (-0x47 << 2)
    ctx->pc = 0x1CFF710u;
    {
        const bool branch_taken_0x1cff710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CFF714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF710u;
        // 0x1cff714: 0x3c0f01d1  lui         $t7, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff710) {
            ctx->pc = 0x1CFF5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5f8;
        }
    }
    ctx->pc = 0x1CFF718u;
    // 0x1cff718: 0x25efbc24  addiu       $t7, $t7, -0x43DC
    ctx->pc = 0x1cff718u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949924));
    // 0x1cff71c: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cff71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cff720: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cff720u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cff724: 0x4503ffb5  bc1tl       . + 4 + (-0x4B << 2)
    ctx->pc = 0x1CFF724u;
    {
        const bool branch_taken_0x1cff724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cff724) {
            ctx->pc = 0x1CFF728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF724u;
            // 0x1cff728: 0x8e4f0580  lw          $t7, 0x580($s2) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1408)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff5fc;
        }
    }
    ctx->pc = 0x1CFF72Cu;
    // 0x1cff72c: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff72cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff730: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1cff730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1cff734: 0x25efbc28  addiu       $t7, $t7, -0x43D8
    ctx->pc = 0x1cff734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949928));
    // 0x1cff738: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cff738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cff73c: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cff73cu;
    { uint32_t bits = FAST_READ32(0x1D0BC28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cff740: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff740u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff744: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x1CFF744u;
    {
        const bool branch_taken_0x1cff744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF744u;
        // 0x1cff748: 0x25efbc38  addiu       $t7, $t7, -0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff744) {
            ctx->pc = 0x1CFF688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff688;
        }
    }
    ctx->pc = 0x1CFF74Cu;
    // 0x1cff74c: 0x0  nop
    ctx->pc = 0x1cff74cu;
    // NOP
    // 0x1cff750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff754: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cff754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cff758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff75c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cff75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cff760: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff764: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cff764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cff768: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF768u;
    SET_GPR_U32(ctx, 31, 0x1CFF770u);
    ctx->pc = 0x1CFF76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF768u;
    // 0x1cff76c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF768u, 0x1CFF770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF770u;
label_1cff770:
    // 0x1cff770: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cff770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff778: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cff778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cff77c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cff77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff780: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff780u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff784: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cff788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff78c: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF78Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF794u);
    ctx->pc = 0x1CFF790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF78Cu;
    // 0x1cff790: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF78Cu, 0x1CFF794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF794u;
label_1cff794:
    // 0x1cff794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff798: 0xc73f49e  jal         func_1CFD278
    ctx->pc = 0x1CFF798u;
    SET_GPR_U32(ctx, 31, 0x1CFF7A0u);
    ctx->pc = 0x1CFF79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF798u;
    // 0x1cff79c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD278u, 0x1CFF798u, 0x1CFF7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF7A0u;
label_1cff7a0:
    // 0x1cff7a0: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff7a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff7a4: 0x8e0e002c  lw          $t6, 0x2C($s0)
    ctx->pc = 0x1cff7a4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1cff7a8: 0x25efbc40  addiu       $t7, $t7, -0x43C0
    ctx->pc = 0x1cff7a8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949952));
    // 0x1cff7ac: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cff7acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cff7b0: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cff7b0u;
    { uint32_t bits = FAST_READ32(0x1D0BC40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cff7b4: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cff7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cff7b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cff7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cff7bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff7bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff7c0: 0x11cf0021  beq         $t6, $t7, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CFF7C0u;
    {
        const bool branch_taken_0x1cff7c0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x1CFF7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF7C0u;
        // 0x1cff7c4: 0x29cd0002  slti        $t5, $t6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 14) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff7c0) {
            ctx->pc = 0x1CFF848u;
            goto label_1cff848;
        }
    }
    ctx->pc = 0x1CFF7C8u;
    // 0x1cff7c8: 0x51a00013  beql        $t5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1CFF7C8u;
    {
        const bool branch_taken_0x1cff7c8 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff7c8) {
            ctx->pc = 0x1CFF7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF7C8u;
            // 0x1cff7cc: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF818u;
            goto label_1cff818;
        }
    }
    ctx->pc = 0x1CFF7D0u;
    // 0x1cff7d0: 0x51c00006  beql        $t6, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CFF7D0u;
    {
        const bool branch_taken_0x1cff7d0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff7d0) {
            ctx->pc = 0x1CFF7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF7D0u;
            // 0x1cff7d4: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF7ECu;
            goto label_1cff7ec;
        }
    }
    ctx->pc = 0x1CFF7D8u;
    // 0x1cff7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cff7dc:
    // 0x1cff7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cff7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF7E4u;
        // 0x1cff7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF7ECu;
label_1cff7ec:
    // 0x1cff7ec: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff7ecu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff7f0: 0x25efbc40  addiu       $t7, $t7, -0x43C0
    ctx->pc = 0x1cff7f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949952));
    // 0x1cff7f4: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cff7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cff7f8: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1cff7f8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x1cff7fc: 0x46006bc6  mov.s       $f15, $f13
    ctx->pc = 0x1cff7fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    // 0x1cff800: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cff800u;
    { uint32_t bits = FAST_READ32(0x1D0BC40u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cff804:
    // 0x1cff804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cff808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff80c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cff80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff810: 0x873f730  j           func_1CFDCC0
    ctx->pc = 0x1CFF810u;
    ctx->pc = 0x1CFF814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF810u;
    // 0x1cff814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDCC0u;
    sub_01CFDCC0_0x1cfdcc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFF818u;
label_1cff818:
    // 0x1cff818: 0x55cffff0  bnel        $t6, $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFF818u;
    {
        const bool branch_taken_0x1cff818 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x1cff818) {
            ctx->pc = 0x1CFF81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CFF818u;
            // 0x1cff81c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CFF7DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff7dc;
        }
    }
    ctx->pc = 0x1CFF820u;
    // 0x1cff820: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff820u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff824: 0xc60d001c  lwc1        $f13, 0x1C($s0)
    ctx->pc = 0x1cff824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cff828: 0x25efbc44  addiu       $t7, $t7, -0x43BC
    ctx->pc = 0x1cff828u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949956));
    // 0x1cff82c: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x1cff82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x1cff830: 0xc5ec0000  lwc1        $f12, 0x0($t7)
    ctx->pc = 0x1cff830u;
    { uint32_t bits = FAST_READ32(0x1D0BC44u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cff834: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff834u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff838: 0x25efbc48  addiu       $t7, $t7, -0x43B8
    ctx->pc = 0x1cff838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949960));
    // 0x1cff83c: 0xc5ef0000  lwc1        $f15, 0x0($t7)
    ctx->pc = 0x1cff83cu;
    { uint32_t bits = FAST_READ32(0x1D0BC48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cff840:
    // 0x1cff840: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1CFF840u;
    {
        const bool branch_taken_0x1cff840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF840u;
        // 0x1cff844: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff840) {
            ctx->pc = 0x1CFF804u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff804;
        }
    }
    ctx->pc = 0x1CFF848u;
label_1cff848:
    // 0x1cff848: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1cff848u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1cff84c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x1CFF84Cu;
    {
        const bool branch_taken_0x1cff84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF84Cu;
        // 0x1cff850: 0xc60d001c  lwc1        $f13, 0x1C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff84c) {
            ctx->pc = 0x1CFF840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff840;
        }
    }
    ctx->pc = 0x1CFF854u;
    // 0x1cff854: 0x0  nop
    ctx->pc = 0x1cff854u;
    // NOP
    // 0x1cff858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff85c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cff85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cff860: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cff860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cff864: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF864u;
    SET_GPR_U32(ctx, 31, 0x1CFF86Cu);
    ctx->pc = 0x1CFF868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF864u;
    // 0x1cff868: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF864u, 0x1CFF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF86Cu;
label_1cff86c:
    // 0x1cff86c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cff86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cff870: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff870u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff874: 0x25efbc4c  addiu       $t7, $t7, -0x43B4
    ctx->pc = 0x1cff874u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949964));
    // 0x1cff878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cff878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff87c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1cff87cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x1cff880: 0x24440580  addiu       $a0, $v0, 0x580
    ctx->pc = 0x1cff880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x1cff884: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1cff884u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
    // 0x1cff888: 0xc5ed0000  lwc1        $f13, 0x0($t7)
    ctx->pc = 0x1cff888u;
    { uint32_t bits = FAST_READ32(0x1D0BC4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1cff88c: 0x873f730  j           func_1CFDCC0
    ctx->pc = 0x1CFF88Cu;
    ctx->pc = 0x1CFF890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF88Cu;
    // 0x1cff890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDCC0u;
    sub_01CFDCC0_0x1cfdcc0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFF894u;
    // 0x1cff894: 0x0  nop
    ctx->pc = 0x1cff894u;
    // NOP
    ctx->pc = 0x1cff898u;
}
