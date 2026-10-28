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

// Function: sub_01C78810
// Address: 0x1c78810 - 0x1c788a8
void sub_01C78810_0x1c78810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78810_0x1c78810");
#endif

    switch (ctx->pc) {
        case 0x1c78824u: goto label_1c78824;
        case 0x1c78838u: goto label_1c78838;
        case 0x1c7883cu: goto label_1c7883c;
        case 0x1c78884u: goto label_1c78884;
        case 0x1c78890u: goto label_1c78890;
        default: break;
    }

    ctx->pc = 0x1c78810u;

    // 0x1c78810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c78814: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78818: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7881c: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C7881Cu;
    SET_GPR_U32(ctx, 31, 0x1C78824u);
    ctx->pc = 0x1C78820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7881Cu;
    // 0x1c78820: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C7881Cu, 0x1C78824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78824u;
label_1c78824:
    // 0x1c78824: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c78824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78828: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C78828u;
    {
        const bool branch_taken_0x1c78828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C7882Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78828u;
        // 0x1c7882c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78828) {
            ctx->pc = 0x1C7884Cu;
            goto label_1c7884c;
        }
    }
    ctx->pc = 0x1C78830u;
    // 0x1c78830: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C78830u;
    SET_GPR_U32(ctx, 31, 0x1C78838u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C78830u, 0x1C78838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78838u;
label_1c78838:
    // 0x1c78838: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c78838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c7883c:
    // 0x1c7883c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7883cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78840: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78844: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78844u;
        // 0x1c78848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7884Cu;
label_1c7884c:
    // 0x1c7884c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C7884Cu;
    {
        const bool branch_taken_0x1c7884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7884Cu;
        // 0x1c78850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7884c) {
            ctx->pc = 0x1C7883Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c7883c;
        }
    }
    ctx->pc = 0x1C78854u;
    // 0x1c78854: 0x0  nop
    ctx->pc = 0x1c78854u;
    // NOP
    // 0x1c78858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7885c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7885cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c78860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c78864: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c78864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78868: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c78868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7886c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7886cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c78870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78874: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c78874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c78878: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7887c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7887Cu;
    SET_GPR_U32(ctx, 31, 0x1C78884u);
    ctx->pc = 0x1C78880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7887Cu;
    // 0x1c78880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7887Cu, 0x1C78884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78884u;
label_1c78884:
    // 0x1c78884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78888: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C78888u;
    SET_GPR_U32(ctx, 31, 0x1C78890u);
    ctx->pc = 0x1C7888Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78888u;
    // 0x1c7888c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C78888u, 0x1C78890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C78890u;
label_1c78890:
    // 0x1c78890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c78890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78894: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c78894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c78898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c78898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7889c: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x1c7889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x1c788a0: 0x871e0c4  j           func_1C78310
    ctx->pc = 0x1C788A0u;
    ctx->pc = 0x1C788A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C788A0u;
    // 0x1c788a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78310u;
    sub_01C78310_0x1c78310(rdram, ctx, runtime); return;
    ctx->pc = 0x1C788A8u;
}
