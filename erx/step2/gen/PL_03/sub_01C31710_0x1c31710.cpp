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

// Function: sub_01C31710
// Address: 0x1c31710 - 0x1c317f8
void sub_01C31710_0x1c31710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31710_0x1c31710");
#endif

    switch (ctx->pc) {
        case 0x1c31724u: goto label_1c31724;
        case 0x1c31738u: goto label_1c31738;
        case 0x1c3173cu: goto label_1c3173c;
        case 0x1c31758u: goto label_1c31758;
        case 0x1c31764u: goto label_1c31764;
        case 0x1c317a4u: goto label_1c317a4;
        case 0x1c317d0u: goto label_1c317d0;
        case 0x1c317dcu: goto label_1c317dc;
        case 0x1c317e8u: goto label_1c317e8;
        default: break;
    }

    ctx->pc = 0x1c31710u;

    // 0x1c31710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31718: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3171c: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C3171Cu;
    SET_GPR_U32(ctx, 31, 0x1C31724u);
    ctx->pc = 0x1C31720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3171Cu;
    // 0x1c31720: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C3171Cu, 0x1C31724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31724u;
label_1c31724:
    // 0x1c31724: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c31724u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31728: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C31728u;
    {
        const bool branch_taken_0x1c31728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C3172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31728u;
        // 0x1c3172c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31728) {
            ctx->pc = 0x1C3174Cu;
            goto label_1c3174c;
        }
    }
    ctx->pc = 0x1C31730u;
    // 0x1c31730: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C31730u;
    SET_GPR_U32(ctx, 31, 0x1C31738u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C31730u, 0x1C31738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31738u;
label_1c31738:
    // 0x1c31738: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c31738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c3173c:
    // 0x1c3173c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3173cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c31740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31744: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31744u;
        // 0x1c31748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3174Cu;
label_1c3174c:
    // 0x1c3174c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c3174cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c31750: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31750u;
    SET_GPR_U32(ctx, 31, 0x1C31758u);
    ctx->pc = 0x1C31754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31750u;
    // 0x1c31754: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31750u, 0x1C31758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31758u;
label_1c31758:
    // 0x1c31758: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c31758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c3175c: 0xc70bde4  jal         func_1C2F790
    ctx->pc = 0x1C3175Cu;
    SET_GPR_U32(ctx, 31, 0x1C31764u);
    ctx->pc = 0x1C31760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3175Cu;
    // 0x1c31760: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F790u, 0x1C3175Cu, 0x1C31764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31764u;
label_1c31764:
    // 0x1c31764: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C31764u;
    {
        const bool branch_taken_0x1c31764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31764u;
        // 0x1c31768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31764) {
            ctx->pc = 0x1C3173Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c3173c;
        }
    }
    ctx->pc = 0x1C3176Cu;
    // 0x1c3176c: 0x0  nop
    ctx->pc = 0x1c3176cu;
    // NOP
    // 0x1c31770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c31774: 0x3c0f01c4  lui         $t7, 0x1C4
    ctx->pc = 0x1c31774u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)452 << 16));
    // 0x1c31778: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c31778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c3177c: 0x25ee2340  addiu       $t6, $t7, 0x2340
    ctx->pc = 0x1c3177cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9024));
    // 0x1c31780: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c31780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c31784: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c31784u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C42344u));
    // 0x1c31788: 0x8ded2340  lw          $t5, 0x2340($t7)
    ctx->pc = 0x1c31788u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C42340u));
    // 0x1c3178c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3178cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31790: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c31790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c31794: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c31794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c31798: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c31798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c3179c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C3179Cu;
    SET_GPR_U32(ctx, 31, 0x1C317A4u);
    ctx->pc = 0x1C317A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3179Cu;
    // 0x1c317a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C3179Cu, 0x1C317A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C317A4u;
label_1c317a4:
    // 0x1c317a4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c317a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c317a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c317a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c317ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c317acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c317b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c317b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c317b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c317b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c317b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c317b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c317bc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c317bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c317c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c317c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c317c4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c317c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c317c8: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C317C8u;
    SET_GPR_U32(ctx, 31, 0x1C317D0u);
    ctx->pc = 0x1C317CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C317C8u;
    // 0x1c317cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C317C8u, 0x1C317D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C317D0u;
label_1c317d0:
    // 0x1c317d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c317d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c317d4: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C317D4u;
    SET_GPR_U32(ctx, 31, 0x1C317DCu);
    ctx->pc = 0x1C317D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C317D4u;
    // 0x1c317d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C317D4u, 0x1C317DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C317DCu;
label_1c317dc:
    // 0x1c317dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c317dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c317e0: 0xc70bde6  jal         func_1C2F798
    ctx->pc = 0x1C317E0u;
    SET_GPR_U32(ctx, 31, 0x1C317E8u);
    ctx->pc = 0x1C317E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C317E0u;
    // 0x1c317e4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F798u, 0x1C317E0u, 0x1C317E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C317E8u;
label_1c317e8:
    // 0x1c317e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c317e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c317ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c317ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c317f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C317F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C317F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C317F0u;
        // 0x1c317f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C317F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C317F8u;
}
