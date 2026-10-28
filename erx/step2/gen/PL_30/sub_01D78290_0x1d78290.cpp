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

// Function: sub_01D78290
// Address: 0x1d78290 - 0x1d78378
void sub_01D78290_0x1d78290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78290_0x1d78290");
#endif

    switch (ctx->pc) {
        case 0x1d782a4u: goto label_1d782a4;
        case 0x1d782b8u: goto label_1d782b8;
        case 0x1d782bcu: goto label_1d782bc;
        case 0x1d782d8u: goto label_1d782d8;
        case 0x1d782e4u: goto label_1d782e4;
        case 0x1d78324u: goto label_1d78324;
        case 0x1d78350u: goto label_1d78350;
        case 0x1d7835cu: goto label_1d7835c;
        case 0x1d78368u: goto label_1d78368;
        default: break;
    }

    ctx->pc = 0x1d78290u;

    // 0x1d78290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d78290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d78294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d78294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d78298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d78298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7829c: 0xc75ded0  jal         func_1D77B40
    ctx->pc = 0x1D7829Cu;
    SET_GPR_U32(ctx, 31, 0x1D782A4u);
    ctx->pc = 0x1D782A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7829Cu;
    // 0x1d782a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B40u, 0x1D7829Cu, 0x1D782A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D782A4u;
label_1d782a4:
    // 0x1d782a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d782a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d782a8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D782A8u;
    {
        const bool branch_taken_0x1d782a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D782ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D782A8u;
        // 0x1d782ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d782a8) {
            ctx->pc = 0x1D782CCu;
            goto label_1d782cc;
        }
    }
    ctx->pc = 0x1D782B0u;
    // 0x1d782b0: 0xc75ded2  jal         func_1D77B48
    ctx->pc = 0x1D782B0u;
    SET_GPR_U32(ctx, 31, 0x1D782B8u);
    ctx->pc = 0x1D77B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B48u, 0x1D782B0u, 0x1D782B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D782B8u;
label_1d782b8:
    // 0x1d782b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d782b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d782bc:
    // 0x1d782bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d782bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d782c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d782c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d782c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D782C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D782C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D782C4u;
        // 0x1d782c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D782C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D782CCu;
label_1d782cc:
    // 0x1d782cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d782ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d782d0: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D782D0u;
    SET_GPR_U32(ctx, 31, 0x1D782D8u);
    ctx->pc = 0x1D782D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D782D0u;
    // 0x1d782d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D782D0u, 0x1D782D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D782D8u;
label_1d782d8:
    // 0x1d782d8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d782d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d782dc: 0xc75dee2  jal         func_1D77B88
    ctx->pc = 0x1D782DCu;
    SET_GPR_U32(ctx, 31, 0x1D782E4u);
    ctx->pc = 0x1D782E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D782DCu;
    // 0x1d782e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B88u, 0x1D782DCu, 0x1D782E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D782E4u;
label_1d782e4:
    // 0x1d782e4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D782E4u;
    {
        const bool branch_taken_0x1d782e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D782E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D782E4u;
        // 0x1d782e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d782e4) {
            ctx->pc = 0x1D782BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d782bc;
        }
    }
    ctx->pc = 0x1D782ECu;
    // 0x1d782ec: 0x0  nop
    ctx->pc = 0x1d782ecu;
    // NOP
    // 0x1d782f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d782f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d782f4: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d782f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d782f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d782f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d782fc: 0x25eed5c0  addiu       $t6, $t7, -0x2A40
    ctx->pc = 0x1d782fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956480));
    // 0x1d78300: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d78300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d78304: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d78304u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D7D5C4u));
    // 0x1d78308: 0x8dedd5c0  lw          $t5, -0x2A40($t7)
    ctx->pc = 0x1d78308u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D7D5C0u));
    // 0x1d7830c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7830cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78310: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d78310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d78314: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d78314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d78318: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d78318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d7831c: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D7831Cu;
    SET_GPR_U32(ctx, 31, 0x1D78324u);
    ctx->pc = 0x1D78320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7831Cu;
    // 0x1d78320: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D7831Cu, 0x1D78324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78324u;
label_1d78324:
    // 0x1d78324: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d78324u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d78328: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d78328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7832c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7832cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78330: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d78330u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d78334: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d78334u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d78338: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d78338u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7833c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d7833cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d78340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d78340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78344: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d78344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d78348: 0xc75dee0  jal         func_1D77B80
    ctx->pc = 0x1D78348u;
    SET_GPR_U32(ctx, 31, 0x1D78350u);
    ctx->pc = 0x1D7834Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78348u;
    // 0x1d7834c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B80u, 0x1D78348u, 0x1D78350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78350u;
label_1d78350:
    // 0x1d78350: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d78350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d78354: 0xc75ded4  jal         func_1D77B50
    ctx->pc = 0x1D78354u;
    SET_GPR_U32(ctx, 31, 0x1D7835Cu);
    ctx->pc = 0x1D78358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78354u;
    // 0x1d78358: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B50u, 0x1D78354u, 0x1D7835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7835Cu;
label_1d7835c:
    // 0x1d7835c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7835cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d78360: 0xc75dee4  jal         func_1D77B90
    ctx->pc = 0x1D78360u;
    SET_GPR_U32(ctx, 31, 0x1D78368u);
    ctx->pc = 0x1D78364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D78360u;
    // 0x1d78364: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D77B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D77B90u, 0x1D78360u, 0x1D78368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D78368u;
label_1d78368:
    // 0x1d78368: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d78368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7836c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d78370: 0x3e00008  jr          $ra
    ctx->pc = 0x1D78370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D78374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D78370u;
        // 0x1d78374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D78370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D78378u;
}
