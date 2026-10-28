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

// Function: sub_01D5E768
// Address: 0x1d5e768 - 0x1d5e818
void sub_01D5E768_0x1d5e768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5E768_0x1d5e768");
#endif

    switch (ctx->pc) {
        case 0x1d5e780u: goto label_1d5e780;
        case 0x1d5e788u: goto label_1d5e788;
        case 0x1d5e79cu: goto label_1d5e79c;
        case 0x1d5e7a0u: goto label_1d5e7a0;
        case 0x1d5e7f4u: goto label_1d5e7f4;
        case 0x1d5e800u: goto label_1d5e800;
        default: break;
    }

    ctx->pc = 0x1d5e768u;

    // 0x1d5e768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e76c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e770: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e774: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e778: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5E778u;
    SET_GPR_U32(ctx, 31, 0x1D5E780u);
    ctx->pc = 0x1D5E77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E778u;
    // 0x1d5e77c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5E778u, 0x1D5E780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E780u;
label_1d5e780:
    // 0x1d5e780: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5E780u;
    SET_GPR_U32(ctx, 31, 0x1D5E788u);
    ctx->pc = 0x1D5E784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E780u;
    // 0x1d5e784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5E780u, 0x1D5E788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E788u;
label_1d5e788:
    // 0x1d5e788: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5e788u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e78c: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5E78Cu;
    {
        const bool branch_taken_0x1d5e78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E78Cu;
        // 0x1d5e790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e78c) {
            ctx->pc = 0x1D5E7B0u;
            goto label_1d5e7b0;
        }
    }
    ctx->pc = 0x1D5E794u;
    // 0x1d5e794: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5E794u;
    SET_GPR_U32(ctx, 31, 0x1D5E79Cu);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5E794u, 0x1D5E79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E79Cu;
label_1d5e79c:
    // 0x1d5e79c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5e79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5e7a0:
    // 0x1d5e7a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e7a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e7a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7A8u;
        // 0x1d5e7ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E7B0u;
label_1d5e7b0:
    // 0x1d5e7b0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d5e7b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d5e7b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5e7b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7b8: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1d5e7b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1d5e7bc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D5E7BCu;
    {
        const bool branch_taken_0x1d5e7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7BCu;
        // 0x1d5e7c0: 0xae0f0018  sw          $t7, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e7bc) {
            ctx->pc = 0x1D5E7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5e7a0;
        }
    }
    ctx->pc = 0x1D5E7C4u;
    // 0x1d5e7c4: 0x0  nop
    ctx->pc = 0x1d5e7c4u;
    // NOP
    // 0x1d5e7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5e7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5e7cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5e7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5e7d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e7d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5e7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e7d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5e7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5e7dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5e7dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5e7e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d5e7e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e7e8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5e7e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7ec: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5E7ECu;
    SET_GPR_U32(ctx, 31, 0x1D5E7F4u);
    ctx->pc = 0x1D5E7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E7ECu;
    // 0x1d5e7f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5E7ECu, 0x1D5E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E7F4u;
label_1d5e7f4:
    // 0x1d5e7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5e7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e7f8: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5E7F8u;
    SET_GPR_U32(ctx, 31, 0x1D5E800u);
    ctx->pc = 0x1D5E7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E7F8u;
    // 0x1d5e7fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5E7F8u, 0x1D5E800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E800u;
label_1d5e800:
    // 0x1d5e800: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1d5e800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1d5e804: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5e804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5e808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5e808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5e80c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5E80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E80Cu;
        // 0x1d5e810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5E80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5E814u;
    // 0x1d5e814: 0x0  nop
    ctx->pc = 0x1d5e814u;
    // NOP
    ctx->pc = 0x1d5e818u;
}
