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

// Function: sub_01D5E820
// Address: 0x1d5e820 - 0x1d5e8c0
void sub_01D5E820_0x1d5e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5E820_0x1d5e820");
#endif

    switch (ctx->pc) {
        case 0x1d5e834u: goto label_1d5e834;
        case 0x1d5e848u: goto label_1d5e848;
        case 0x1d5e84cu: goto label_1d5e84c;
        case 0x1d5e89cu: goto label_1d5e89c;
        case 0x1d5e8a8u: goto label_1d5e8a8;
        default: break;
    }

    ctx->pc = 0x1d5e820u;

    // 0x1d5e820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e82c: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5E82Cu;
    SET_GPR_U32(ctx, 31, 0x1D5E834u);
    ctx->pc = 0x1D5E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E82Cu;
    // 0x1d5e830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5E82Cu, 0x1D5E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E834u;
label_1d5e834:
    // 0x1d5e834: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5e834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e838: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5E838u;
    {
        const bool branch_taken_0x1d5e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E838u;
        // 0x1d5e83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e838) {
            ctx->pc = 0x1D5E85Cu;
            goto label_1d5e85c;
        }
    }
    ctx->pc = 0x1D5E840u;
    // 0x1d5e840: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5E840u;
    SET_GPR_U32(ctx, 31, 0x1D5E848u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5E840u, 0x1D5E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E848u;
label_1d5e848:
    // 0x1d5e848: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5e84c:
    // 0x1d5e84c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e84cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e850: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e854: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E854u;
        // 0x1d5e858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E85Cu;
label_1d5e85c:
    // 0x1d5e85c: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d5e85cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d5e860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5e860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e864: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1d5e864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1d5e868: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5E868u;
    {
        const bool branch_taken_0x1d5e868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E868u;
        // 0x1d5e86c: 0xae0f0018  sw          $t7, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e868) {
            ctx->pc = 0x1D5E84Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5e84c;
        }
    }
    ctx->pc = 0x1D5E870u;
    // 0x1d5e870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e874: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e878: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e87c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5e87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e880: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e884: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5e888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e88c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5e88cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e890: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5e890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e894: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5E894u;
    SET_GPR_U32(ctx, 31, 0x1D5E89Cu);
    ctx->pc = 0x1D5E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E894u;
    // 0x1d5e898: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5E894u, 0x1D5E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E89Cu;
label_1d5e89c:
    // 0x1d5e89c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e8a0: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5E8A0u;
    SET_GPR_U32(ctx, 31, 0x1D5E8A8u);
    ctx->pc = 0x1D5E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E8A0u;
    // 0x1d5e8a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5E8A0u, 0x1D5E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E8A8u;
label_1d5e8a8:
    // 0x1d5e8a8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d5e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d5e8ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e8b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e8b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8B4u;
        // 0x1d5e8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E8BCu;
    // 0x1d5e8bc: 0x0  nop
    ctx->pc = 0x1d5e8bcu;
    // NOP
    ctx->pc = 0x1d5e8c0u;
}
