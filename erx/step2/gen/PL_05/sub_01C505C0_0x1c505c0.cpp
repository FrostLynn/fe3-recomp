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

// Function: sub_01C505C0
// Address: 0x1c505c0 - 0x1c50650
void sub_01C505C0_0x1c505c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C505C0_0x1c505c0");
#endif

    switch (ctx->pc) {
        case 0x1c505d4u: goto label_1c505d4;
        case 0x1c505e8u: goto label_1c505e8;
        case 0x1c505ecu: goto label_1c505ec;
        case 0x1c50634u: goto label_1c50634;
        default: break;
    }

    ctx->pc = 0x1c505c0u;

    // 0x1c505c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c505c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c505c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c505c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c505c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c505c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c505cc: 0xc713e5e  jal         func_1C4F978
    ctx->pc = 0x1C505CCu;
    SET_GPR_U32(ctx, 31, 0x1C505D4u);
    ctx->pc = 0x1C505D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C505CCu;
    // 0x1c505d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F978u, 0x1C505CCu, 0x1C505D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C505D4u;
label_1c505d4:
    // 0x1c505d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c505d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c505d8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C505D8u;
    {
        const bool branch_taken_0x1c505d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C505DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C505D8u;
        // 0x1c505dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c505d8) {
            ctx->pc = 0x1C505FCu;
            goto label_1c505fc;
        }
    }
    ctx->pc = 0x1C505E0u;
    // 0x1c505e0: 0xc713e60  jal         func_1C4F980
    ctx->pc = 0x1C505E0u;
    SET_GPR_U32(ctx, 31, 0x1C505E8u);
    ctx->pc = 0x1C4F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F980u, 0x1C505E0u, 0x1C505E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C505E8u;
label_1c505e8:
    // 0x1c505e8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c505e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c505ec:
    // 0x1c505ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c505ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c505f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c505f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c505f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C505F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C505F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C505F4u;
        // 0x1c505f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C505F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C505FCu;
label_1c505fc:
    // 0x1c505fc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C505FCu;
    {
        const bool branch_taken_0x1c505fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C50600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C505FCu;
        // 0x1c50600: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c505fc) {
            ctx->pc = 0x1C505ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c505ec;
        }
    }
    ctx->pc = 0x1C50604u;
    // 0x1c50604: 0x0  nop
    ctx->pc = 0x1c50604u;
    // NOP
    // 0x1c50608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c50608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5060c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c5060cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c50610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c50614: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c50614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c50618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c50618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c5061c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c5061cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c50620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50624: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c50624u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50628: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c50628u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c5062c: 0xc713e6e  jal         func_1C4F9B8
    ctx->pc = 0x1C5062Cu;
    SET_GPR_U32(ctx, 31, 0x1C50634u);
    ctx->pc = 0x1C50630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5062Cu;
    // 0x1c50630: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F9B8u, 0x1C5062Cu, 0x1C50634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C50634u;
label_1c50634:
    // 0x1c50634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c50634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50638: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c50638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c5063c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c5063cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50640: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c50640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c50644: 0x8713e66  j           func_1C4F998
    ctx->pc = 0x1C50644u;
    ctx->pc = 0x1C50648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50644u;
    // 0x1c50648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F998u;
    sub_01C4F998_0x1c4f998(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5064Cu;
    // 0x1c5064c: 0x0  nop
    ctx->pc = 0x1c5064cu;
    // NOP
    ctx->pc = 0x1c50650u;
}
