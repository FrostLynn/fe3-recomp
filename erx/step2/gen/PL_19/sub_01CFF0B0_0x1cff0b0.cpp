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

// Function: sub_01CFF0B0
// Address: 0x1cff0b0 - 0x1cff198
void sub_01CFF0B0_0x1cff0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF0B0_0x1cff0b0");
#endif

    switch (ctx->pc) {
        case 0x1cff0c4u: goto label_1cff0c4;
        case 0x1cff0d8u: goto label_1cff0d8;
        case 0x1cff0dcu: goto label_1cff0dc;
        case 0x1cff0f8u: goto label_1cff0f8;
        case 0x1cff104u: goto label_1cff104;
        case 0x1cff144u: goto label_1cff144;
        case 0x1cff170u: goto label_1cff170;
        case 0x1cff17cu: goto label_1cff17c;
        case 0x1cff188u: goto label_1cff188;
        default: break;
    }

    ctx->pc = 0x1cff0b0u;

    // 0x1cff0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff0b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cff0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cff0b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cff0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cff0bc: 0xc73f496  jal         func_1CFD258
    ctx->pc = 0x1CFF0BCu;
    SET_GPR_U32(ctx, 31, 0x1CFF0C4u);
    ctx->pc = 0x1CFF0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF0BCu;
    // 0x1cff0c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD258u, 0x1CFF0BCu, 0x1CFF0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF0C4u;
label_1cff0c4:
    // 0x1cff0c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cff0c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff0c8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CFF0C8u;
    {
        const bool branch_taken_0x1cff0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CFF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF0C8u;
        // 0x1cff0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff0c8) {
            ctx->pc = 0x1CFF0ECu;
            goto label_1cff0ec;
        }
    }
    ctx->pc = 0x1CFF0D0u;
    // 0x1cff0d0: 0xc73f498  jal         func_1CFD260
    ctx->pc = 0x1CFF0D0u;
    SET_GPR_U32(ctx, 31, 0x1CFF0D8u);
    ctx->pc = 0x1CFD260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD260u, 0x1CFF0D0u, 0x1CFF0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF0D8u;
label_1cff0d8:
    // 0x1cff0d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cff0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cff0dc:
    // 0x1cff0dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cff0dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff0e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cff0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cff0e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF0E4u;
        // 0x1cff0e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF0E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF0ECu;
label_1cff0ec:
    // 0x1cff0ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff0f0: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF0F0u;
    SET_GPR_U32(ctx, 31, 0x1CFF0F8u);
    ctx->pc = 0x1CFF0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF0F0u;
    // 0x1cff0f4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF0F0u, 0x1CFF0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF0F8u;
label_1cff0f8:
    // 0x1cff0f8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cff0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cff0fc: 0xc73f4a8  jal         func_1CFD2A0
    ctx->pc = 0x1CFF0FCu;
    SET_GPR_U32(ctx, 31, 0x1CFF104u);
    ctx->pc = 0x1CFF100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF0FCu;
    // 0x1cff100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2A0u, 0x1CFF0FCu, 0x1CFF104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF104u;
label_1cff104:
    // 0x1cff104: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CFF104u;
    {
        const bool branch_taken_0x1cff104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF104u;
        // 0x1cff108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff104) {
            ctx->pc = 0x1CFF0DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cff0dc;
        }
    }
    ctx->pc = 0x1CFF10Cu;
    // 0x1cff10c: 0x0  nop
    ctx->pc = 0x1cff10cu;
    // NOP
    // 0x1cff110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cff110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cff114: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1cff114u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1cff118: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cff118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cff11c: 0x25eebc10  addiu       $t6, $t7, -0x43F0
    ctx->pc = 0x1cff11cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294949904));
    // 0x1cff120: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cff120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cff124: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cff124u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D0BC14u));
    // 0x1cff128: 0x8dedbc10  lw          $t5, -0x43F0($t7)
    ctx->pc = 0x1cff128u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D0BC10u));
    // 0x1cff12c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cff12cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff130: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cff130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cff134: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cff134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cff138: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cff138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cff13c: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF13Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF144u);
    ctx->pc = 0x1CFF140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF13Cu;
    // 0x1cff140: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF13Cu, 0x1CFF144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF144u;
label_1cff144:
    // 0x1cff144: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cff144u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cff148: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cff148u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff14c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cff14cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff150: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cff150u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cff154: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cff154u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cff158: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cff158u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff15c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cff15cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cff160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cff160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff164: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cff164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cff168: 0xc73f4a6  jal         func_1CFD298
    ctx->pc = 0x1CFF168u;
    SET_GPR_U32(ctx, 31, 0x1CFF170u);
    ctx->pc = 0x1CFF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF168u;
    // 0x1cff16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD298u, 0x1CFF168u, 0x1CFF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF170u;
label_1cff170:
    // 0x1cff170: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cff170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cff174: 0xc73f49a  jal         func_1CFD268
    ctx->pc = 0x1CFF174u;
    SET_GPR_U32(ctx, 31, 0x1CFF17Cu);
    ctx->pc = 0x1CFF178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF174u;
    // 0x1cff178: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD268u, 0x1CFF174u, 0x1CFF17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF17Cu;
label_1cff17c:
    // 0x1cff17c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cff17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cff180: 0xc73f4aa  jal         func_1CFD2A8
    ctx->pc = 0x1CFF180u;
    SET_GPR_U32(ctx, 31, 0x1CFF188u);
    ctx->pc = 0x1CFF184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF180u;
    // 0x1cff184: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFD2A8u, 0x1CFF180u, 0x1CFF188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFF188u;
label_1cff188:
    // 0x1cff188: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cff188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cff18c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cff18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cff190: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFF190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFF190u;
        // 0x1cff194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFF190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFF198u;
}
