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

// Function: sub_01D67798
// Address: 0x1d67798 - 0x1d67880
void sub_01D67798_0x1d67798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67798_0x1d67798");
#endif

    switch (ctx->pc) {
        case 0x1d677acu: goto label_1d677ac;
        case 0x1d677c0u: goto label_1d677c0;
        case 0x1d677c4u: goto label_1d677c4;
        case 0x1d677e0u: goto label_1d677e0;
        case 0x1d677ecu: goto label_1d677ec;
        case 0x1d6782cu: goto label_1d6782c;
        case 0x1d67858u: goto label_1d67858;
        case 0x1d67864u: goto label_1d67864;
        case 0x1d67870u: goto label_1d67870;
        default: break;
    }

    ctx->pc = 0x1d67798u;

    // 0x1d67798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6779c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d6779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d677a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d677a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d677a4: 0xc7599c8  jal         func_1D66720
    ctx->pc = 0x1D677A4u;
    SET_GPR_U32(ctx, 31, 0x1D677ACu);
    ctx->pc = 0x1D677A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D677A4u;
    // 0x1d677a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66720u, 0x1D677A4u, 0x1D677ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D677ACu;
label_1d677ac:
    // 0x1d677ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d677acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d677b0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D677B0u;
    {
        const bool branch_taken_0x1d677b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D677B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D677B0u;
        // 0x1d677b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d677b0) {
            ctx->pc = 0x1D677D4u;
            goto label_1d677d4;
        }
    }
    ctx->pc = 0x1D677B8u;
    // 0x1d677b8: 0xc7599ca  jal         func_1D66728
    ctx->pc = 0x1D677B8u;
    SET_GPR_U32(ctx, 31, 0x1D677C0u);
    ctx->pc = 0x1D66728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66728u, 0x1D677B8u, 0x1D677C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D677C0u;
label_1d677c0:
    // 0x1d677c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d677c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d677c4:
    // 0x1d677c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d677c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d677c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d677c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d677cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D677CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D677D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D677CCu;
        // 0x1d677d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D677CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D677D4u;
label_1d677d4:
    // 0x1d677d4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d677d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d677d8: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D677D8u;
    SET_GPR_U32(ctx, 31, 0x1D677E0u);
    ctx->pc = 0x1D677DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D677D8u;
    // 0x1d677dc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D677D8u, 0x1D677E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D677E0u;
label_1d677e0:
    // 0x1d677e0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d677e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d677e4: 0xc7599da  jal         func_1D66768
    ctx->pc = 0x1D677E4u;
    SET_GPR_U32(ctx, 31, 0x1D677ECu);
    ctx->pc = 0x1D677E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D677E4u;
    // 0x1d677e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66768u, 0x1D677E4u, 0x1D677ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D677ECu;
label_1d677ec:
    // 0x1d677ec: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D677ECu;
    {
        const bool branch_taken_0x1d677ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D677F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D677ECu;
        // 0x1d677f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d677ec) {
            ctx->pc = 0x1D677C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d677c4;
        }
    }
    ctx->pc = 0x1D677F4u;
    // 0x1d677f4: 0x0  nop
    ctx->pc = 0x1d677f4u;
    // NOP
    // 0x1d677f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d677f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d677fc: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d677fcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d67800: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d67800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d67804: 0x25eeff78  addiu       $t6, $t7, -0x88
    ctx->pc = 0x1d67804u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967160));
    // 0x1d67808: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d67808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d6780c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d6780cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D6FF7Cu));
    // 0x1d67810: 0x8dedff78  lw          $t5, -0x88($t7)
    ctx->pc = 0x1d67810u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D6FF78u));
    // 0x1d67814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67818: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d67818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d6781c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d6781cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d67820: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d67820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d67824: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D67824u;
    SET_GPR_U32(ctx, 31, 0x1D6782Cu);
    ctx->pc = 0x1D67828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67824u;
    // 0x1d67828: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D67824u, 0x1D6782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6782Cu;
label_1d6782c:
    // 0x1d6782c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d6782cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d67830: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67834: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67834u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67838: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d67838u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6783c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d6783cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d67840: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67844: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d67844u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d67848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d6784c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d6784cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d67850: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67850u;
    SET_GPR_U32(ctx, 31, 0x1D67858u);
    ctx->pc = 0x1D67854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67850u;
    // 0x1d67854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67850u, 0x1D67858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67858u;
label_1d67858:
    // 0x1d67858: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d67858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d6785c: 0xc7599cc  jal         func_1D66730
    ctx->pc = 0x1D6785Cu;
    SET_GPR_U32(ctx, 31, 0x1D67864u);
    ctx->pc = 0x1D67860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6785Cu;
    // 0x1d67860: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66730u, 0x1D6785Cu, 0x1D67864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67864u;
label_1d67864:
    // 0x1d67864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d67864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67868: 0xc7599dc  jal         func_1D66770
    ctx->pc = 0x1D67868u;
    SET_GPR_U32(ctx, 31, 0x1D67870u);
    ctx->pc = 0x1D6786Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67868u;
    // 0x1d6786c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66770u, 0x1D67868u, 0x1D67870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67870u;
label_1d67870:
    // 0x1d67870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d67870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d67874: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d67874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d67878: 0x3e00008  jr          $ra
    ctx->pc = 0x1D67878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D67878u;
        // 0x1d6787c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D67878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D67880u;
}
