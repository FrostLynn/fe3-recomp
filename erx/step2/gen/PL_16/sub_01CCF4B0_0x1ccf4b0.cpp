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

// Function: sub_01CCF4B0
// Address: 0x1ccf4b0 - 0x1ccf598
void sub_01CCF4B0_0x1ccf4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF4B0_0x1ccf4b0");
#endif

    switch (ctx->pc) {
        case 0x1ccf4c4u: goto label_1ccf4c4;
        case 0x1ccf4d8u: goto label_1ccf4d8;
        case 0x1ccf4dcu: goto label_1ccf4dc;
        case 0x1ccf4f8u: goto label_1ccf4f8;
        case 0x1ccf504u: goto label_1ccf504;
        case 0x1ccf544u: goto label_1ccf544;
        case 0x1ccf570u: goto label_1ccf570;
        case 0x1ccf57cu: goto label_1ccf57c;
        case 0x1ccf588u: goto label_1ccf588;
        default: break;
    }

    ctx->pc = 0x1ccf4b0u;

    // 0x1ccf4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf4b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf4b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf4bc: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCF4BCu;
    SET_GPR_U32(ctx, 31, 0x1CCF4C4u);
    ctx->pc = 0x1CCF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF4BCu;
    // 0x1ccf4c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCF4BCu, 0x1CCF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF4C4u;
label_1ccf4c4:
    // 0x1ccf4c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccf4c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf4c8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCF4C8u;
    {
        const bool branch_taken_0x1ccf4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCF4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF4C8u;
        // 0x1ccf4cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf4c8) {
            ctx->pc = 0x1CCF4ECu;
            goto label_1ccf4ec;
        }
    }
    ctx->pc = 0x1CCF4D0u;
    // 0x1ccf4d0: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCF4D0u;
    SET_GPR_U32(ctx, 31, 0x1CCF4D8u);
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCF4D0u, 0x1CCF4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF4D8u;
label_1ccf4d8:
    // 0x1ccf4d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ccf4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ccf4dc:
    // 0x1ccf4dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf4dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf4e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF4E4u;
        // 0x1ccf4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF4ECu;
label_1ccf4ec:
    // 0x1ccf4ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf4f0: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF4F0u;
    SET_GPR_U32(ctx, 31, 0x1CCF4F8u);
    ctx->pc = 0x1CCF4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF4F0u;
    // 0x1ccf4f4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF4F0u, 0x1CCF4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF4F8u;
label_1ccf4f8:
    // 0x1ccf4f8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1ccf4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1ccf4fc: 0xc733524  jal         func_1CCD490
    ctx->pc = 0x1CCF4FCu;
    SET_GPR_U32(ctx, 31, 0x1CCF504u);
    ctx->pc = 0x1CCF500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF4FCu;
    // 0x1ccf500: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD490u, 0x1CCF4FCu, 0x1CCF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF504u;
label_1ccf504:
    // 0x1ccf504: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CCF504u;
    {
        const bool branch_taken_0x1ccf504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF504u;
        // 0x1ccf508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccf504) {
            ctx->pc = 0x1CCF4DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ccf4dc;
        }
    }
    ctx->pc = 0x1CCF50Cu;
    // 0x1ccf50c: 0x0  nop
    ctx->pc = 0x1ccf50cu;
    // NOP
    // 0x1ccf510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccf510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccf514: 0x3c0f01ce  lui         $t7, 0x1CE
    ctx->pc = 0x1ccf514u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)462 << 16));
    // 0x1ccf518: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ccf518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ccf51c: 0x25eea178  addiu       $t6, $t7, -0x5E88
    ctx->pc = 0x1ccf51cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294943096));
    // 0x1ccf520: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1ccf520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1ccf524: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1ccf524u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CDA17Cu));
    // 0x1ccf528: 0x8deda178  lw          $t5, -0x5E88($t7)
    ctx->pc = 0x1ccf528u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CDA178u));
    // 0x1ccf52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf530: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1ccf530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1ccf534: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1ccf534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1ccf538: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ccf538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ccf53c: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF53Cu;
    SET_GPR_U32(ctx, 31, 0x1CCF544u);
    ctx->pc = 0x1CCF540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF53Cu;
    // 0x1ccf540: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF53Cu, 0x1CCF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF544u;
label_1ccf544:
    // 0x1ccf544: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1ccf544u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1ccf548: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccf548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf54c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf54cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf550: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1ccf550u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf554: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1ccf554u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1ccf558: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf558u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf55c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1ccf55cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1ccf560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf564: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1ccf564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccf568: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF568u;
    SET_GPR_U32(ctx, 31, 0x1CCF570u);
    ctx->pc = 0x1CCF56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF568u;
    // 0x1ccf56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF568u, 0x1CCF570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF570u;
label_1ccf570:
    // 0x1ccf570: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccf570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccf574: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF574u;
    SET_GPR_U32(ctx, 31, 0x1CCF57Cu);
    ctx->pc = 0x1CCF578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF574u;
    // 0x1ccf578: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF574u, 0x1CCF57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF57Cu;
label_1ccf57c:
    // 0x1ccf57c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccf57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf580: 0xc733526  jal         func_1CCD498
    ctx->pc = 0x1CCF580u;
    SET_GPR_U32(ctx, 31, 0x1CCF588u);
    ctx->pc = 0x1CCF584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF580u;
    // 0x1ccf584: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD498u, 0x1CCF580u, 0x1CCF588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF588u;
label_1ccf588:
    // 0x1ccf588: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ccf588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccf58c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ccf58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ccf590: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF590u;
        // 0x1ccf594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF598u;
}
