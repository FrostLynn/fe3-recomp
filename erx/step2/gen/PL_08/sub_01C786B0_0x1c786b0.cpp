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

// Function: sub_01C786B0
// Address: 0x1c786b0 - 0x1c78748
void sub_01C786B0_0x1c786b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C786B0_0x1c786b0");
#endif

    switch (ctx->pc) {
        case 0x1c786c4u: goto label_1c786c4;
        case 0x1c786d8u: goto label_1c786d8;
        case 0x1c786dcu: goto label_1c786dc;
        case 0x1c78724u: goto label_1c78724;
        case 0x1c78730u: goto label_1c78730;
        default: break;
    }

    ctx->pc = 0x1c786b0u;

    // 0x1c786b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c786b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c786b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c786b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c786b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c786b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c786bc: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C786BCu;
    SET_GPR_U32(ctx, 31, 0x1C786C4u);
    ctx->pc = 0x1C786C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C786BCu;
    // 0x1c786c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C786BCu, 0x1C786C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C786C4u;
label_1c786c4:
    // 0x1c786c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c786c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c786c8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C786C8u;
    {
        const bool branch_taken_0x1c786c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C786CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C786C8u;
        // 0x1c786cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c786c8) {
            ctx->pc = 0x1C786ECu;
            goto label_1c786ec;
        }
    }
    ctx->pc = 0x1C786D0u;
    // 0x1c786d0: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C786D0u;
    SET_GPR_U32(ctx, 31, 0x1C786D8u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C786D0u, 0x1C786D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C786D8u;
label_1c786d8:
    // 0x1c786d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c786d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c786dc:
    // 0x1c786dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c786dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c786e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c786e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c786e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C786E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C786E4u;
        // 0x1c786e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C786E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C786ECu;
label_1c786ec:
    // 0x1c786ec: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C786ECu;
    {
        const bool branch_taken_0x1c786ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C786F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C786ECu;
        // 0x1c786f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c786ec) {
            ctx->pc = 0x1C786DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c786dc;
        }
    }
    ctx->pc = 0x1C786F4u;
    // 0x1c786f4: 0x0  nop
    ctx->pc = 0x1c786f4u;
    // NOP
    // 0x1c786f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c786f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c786fc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c786fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78700: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78704: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c78704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7870c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7870cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78714: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c78714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78718: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78718u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7871c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7871Cu;
    SET_GPR_U32(ctx, 31, 0x1C78724u);
    ctx->pc = 0x1C78720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7871Cu;
    // 0x1c78720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7871Cu, 0x1C78724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78724u;
label_1c78724:
    // 0x1c78724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78728: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C78728u;
    SET_GPR_U32(ctx, 31, 0x1C78730u);
    ctx->pc = 0x1C7872Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78728u;
    // 0x1c7872c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C78728u, 0x1C78730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78730u;
label_1c78730:
    // 0x1c78730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78734: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7873c: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x1c7873cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x1c78740: 0x871e0c4  j           func_1C78310
    ctx->pc = 0x1C78740u;
    ctx->pc = 0x1C78744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78740u;
    // 0x1c78744: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    sub_01C78310_0x1c78310(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78748u;
}
