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

// Function: sub_01D7F680
// Address: 0x1d7f680 - 0x1d7f768
void sub_01D7F680_0x1d7f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F680_0x1d7f680");
#endif

    switch (ctx->pc) {
        case 0x1d7f694u: goto label_1d7f694;
        case 0x1d7f6a8u: goto label_1d7f6a8;
        case 0x1d7f6acu: goto label_1d7f6ac;
        case 0x1d7f6c8u: goto label_1d7f6c8;
        case 0x1d7f6d4u: goto label_1d7f6d4;
        case 0x1d7f714u: goto label_1d7f714;
        case 0x1d7f740u: goto label_1d7f740;
        case 0x1d7f74cu: goto label_1d7f74c;
        case 0x1d7f758u: goto label_1d7f758;
        default: break;
    }

    ctx->pc = 0x1d7f680u;

    // 0x1d7f680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f688: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f68c: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F68Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F694u);
    ctx->pc = 0x1D7F690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F68Cu;
    // 0x1d7f690: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F68Cu, 0x1D7F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F694u;
label_1d7f694:
    // 0x1d7f694: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f698: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7F698u;
    {
        const bool branch_taken_0x1d7f698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F698u;
        // 0x1d7f69c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f698) {
            ctx->pc = 0x1D7F6BCu;
            goto label_1d7f6bc;
        }
    }
    ctx->pc = 0x1D7F6A0u;
    // 0x1d7f6a0: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F6A0u;
    SET_GPR_U32(ctx, 31, 0x1D7F6A8u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F6A0u, 0x1D7F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F6A8u;
label_1d7f6a8:
    // 0x1d7f6a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7f6ac:
    // 0x1d7f6ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f6acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f6b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f6b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F6B4u;
        // 0x1d7f6b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F6BCu;
label_1d7f6bc:
    // 0x1d7f6bc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7f6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f6c0: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F6C0u;
    SET_GPR_U32(ctx, 31, 0x1D7F6C8u);
    ctx->pc = 0x1D7F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F6C0u;
    // 0x1d7f6c4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F6C0u, 0x1D7F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F6C8u;
label_1d7f6c8:
    // 0x1d7f6c8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d7f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d7f6cc: 0xc75f5e4  jal         func_1D7D790
    ctx->pc = 0x1D7F6CCu;
    SET_GPR_U32(ctx, 31, 0x1D7F6D4u);
    ctx->pc = 0x1D7F6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F6CCu;
    // 0x1d7f6d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D790u, 0x1D7F6CCu, 0x1D7F6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F6D4u;
label_1d7f6d4:
    // 0x1d7f6d4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D7F6D4u;
    {
        const bool branch_taken_0x1d7f6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F6D4u;
        // 0x1d7f6d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f6d4) {
            ctx->pc = 0x1D7F6ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f6ac;
        }
    }
    ctx->pc = 0x1D7F6DCu;
    // 0x1d7f6dc: 0x0  nop
    ctx->pc = 0x1d7f6dcu;
    // NOP
    // 0x1d7f6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f6e4: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d7f6e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d7f6e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7f6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7f6ec: 0x25ee87e8  addiu       $t6, $t7, -0x7818
    ctx->pc = 0x1d7f6ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294936552));
    // 0x1d7f6f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d7f6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d7f6f4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d7f6f4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D887ECu));
    // 0x1d7f6f8: 0x8ded87e8  lw          $t5, -0x7818($t7)
    ctx->pc = 0x1d7f6f8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D887E8u));
    // 0x1d7f6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f700: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d7f700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d7f704: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d7f704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d7f708: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d7f708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d7f70c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F70Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F714u);
    ctx->pc = 0x1D7F710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F70Cu;
    // 0x1d7f710: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F70Cu, 0x1D7F714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F714u;
label_1d7f714:
    // 0x1d7f714: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d7f714u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d7f718: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7f718u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f71c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f71cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f720: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7f720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f724: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7f724u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d7f728: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7f728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f72c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d7f72cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d7f730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f734: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7f734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7f738: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F738u;
    SET_GPR_U32(ctx, 31, 0x1D7F740u);
    ctx->pc = 0x1D7F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F738u;
    // 0x1d7f73c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F738u, 0x1D7F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F740u;
label_1d7f740:
    // 0x1d7f740: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7f740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f744: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F744u;
    SET_GPR_U32(ctx, 31, 0x1D7F74Cu);
    ctx->pc = 0x1D7F748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F744u;
    // 0x1d7f748: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F744u, 0x1D7F74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F74Cu;
label_1d7f74c:
    // 0x1d7f74c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7f74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f750: 0xc75f5e6  jal         func_1D7D798
    ctx->pc = 0x1D7F750u;
    SET_GPR_U32(ctx, 31, 0x1D7F758u);
    ctx->pc = 0x1D7F754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F750u;
    // 0x1d7f754: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D798u, 0x1D7F750u, 0x1D7F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F758u;
label_1d7f758:
    // 0x1d7f758: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d7f758u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f75c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7f75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7f760: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F760u;
        // 0x1d7f764: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F768u;
}
