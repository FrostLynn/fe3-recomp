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

// Function: sub_01D676A8
// Address: 0x1d676a8 - 0x1d67790
void sub_01D676A8_0x1d676a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D676A8_0x1d676a8");
#endif

    switch (ctx->pc) {
        case 0x1d676bcu: goto label_1d676bc;
        case 0x1d676d0u: goto label_1d676d0;
        case 0x1d676d4u: goto label_1d676d4;
        case 0x1d676f0u: goto label_1d676f0;
        case 0x1d676fcu: goto label_1d676fc;
        case 0x1d6773cu: goto label_1d6773c;
        case 0x1d67768u: goto label_1d67768;
        case 0x1d67774u: goto label_1d67774;
        case 0x1d67780u: goto label_1d67780;
        default: break;
    }

    ctx->pc = 0x1d676a8u;

    // 0x1d676a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d676a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d676ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d676acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d676b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d676b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d676b4: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D676B4u;
    SET_GPR_U32(ctx, 31, 0x1D676BCu);
    ctx->pc = 0x1D676B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D676B4u;
    // 0x1d676b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D676B4u, 0x1D676BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676BCu;
label_1d676bc:
    // 0x1d676bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d676bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d676c0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D676C0u;
    {
        const bool branch_taken_0x1d676c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D676C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D676C0u;
        // 0x1d676c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d676c0) {
            ctx->pc = 0x1D676E4u;
            goto label_1d676e4;
        }
    }
    ctx->pc = 0x1D676C8u;
    // 0x1d676c8: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D676C8u;
    SET_GPR_U32(ctx, 31, 0x1D676D0u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D676C8u, 0x1D676D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676D0u;
label_1d676d0:
    // 0x1d676d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d676d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d676d4:
    // 0x1d676d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d676d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d676d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d676d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d676dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D676DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D676E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D676DCu;
        // 0x1d676e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D676DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D676E4u;
label_1d676e4:
    // 0x1d676e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d676e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d676e8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D676E8u;
    SET_GPR_U32(ctx, 31, 0x1D676F0u);
    ctx->pc = 0x1D676ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D676E8u;
    // 0x1d676ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D676E8u, 0x1D676F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676F0u;
label_1d676f0:
    // 0x1d676f0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d676f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d676f4: 0xc7599da  jal         func_1D66768
    ctx->pc = 0x1D676F4u;
    SET_GPR_U32(ctx, 31, 0x1D676FCu);
    ctx->pc = 0x1D676F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D676F4u;
    // 0x1d676f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66768u, 0x1D676F4u, 0x1D676FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D676FCu;
label_1d676fc:
    // 0x1d676fc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D676FCu;
    {
        const bool branch_taken_0x1d676fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D676FCu;
        // 0x1d67700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d676fc) {
            ctx->pc = 0x1D676D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d676d4;
        }
    }
    ctx->pc = 0x1D67704u;
    // 0x1d67704: 0x0  nop
    ctx->pc = 0x1d67704u;
    // NOP
    // 0x1d67708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d67708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6770c: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d6770cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d67710: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d67710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d67714: 0x25eeff70  addiu       $t6, $t7, -0x90
    ctx->pc = 0x1d67714u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967152));
    // 0x1d67718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d67718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d6771c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d6771cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D6FF74u));
    // 0x1d67720: 0x8dedff70  lw          $t5, -0x90($t7)
    ctx->pc = 0x1d67720u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D6FF70u));
    // 0x1d67724: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67728: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d67728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d6772c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d6772cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d67730: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d67730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d67734: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67734u;
    SET_GPR_U32(ctx, 31, 0x1D6773Cu);
    ctx->pc = 0x1D67738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67734u;
    // 0x1d67738: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67734u, 0x1D6773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6773Cu;
label_1d6773c:
    // 0x1d6773c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d6773cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d67740: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67740u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67744: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67748: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6774c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d6774cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d67750: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67750u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67754: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d67754u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d67758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6775c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d6775cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d67760: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67760u;
    SET_GPR_U32(ctx, 31, 0x1D67768u);
    ctx->pc = 0x1D67764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67760u;
    // 0x1d67764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67760u, 0x1D67768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67768u;
label_1d67768:
    // 0x1d67768: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d67768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d6776c: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D6776Cu;
    SET_GPR_U32(ctx, 31, 0x1D67774u);
    ctx->pc = 0x1D67770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6776Cu;
    // 0x1d67770: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D6776Cu, 0x1D67774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67774u;
label_1d67774:
    // 0x1d67774: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d67774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67778: 0xc7599dc  jal         func_1D66770
    ctx->pc = 0x1D67778u;
    SET_GPR_U32(ctx, 31, 0x1D67780u);
    ctx->pc = 0x1D6777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67778u;
    // 0x1d6777c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66770u, 0x1D67778u, 0x1D67780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67780u;
label_1d67780:
    // 0x1d67780: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d67780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67784: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d67784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67788: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67788u;
        // 0x1d6778c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67790u;
}
