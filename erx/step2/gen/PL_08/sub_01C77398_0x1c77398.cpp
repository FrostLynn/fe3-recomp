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

// Function: sub_01C77398
// Address: 0x1c77398 - 0x1c77458
void sub_01C77398_0x1c77398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77398_0x1c77398");
#endif

    switch (ctx->pc) {
        case 0x1c773b0u: goto label_1c773b0;
        case 0x1c773b8u: goto label_1c773b8;
        case 0x1c773ccu: goto label_1c773cc;
        case 0x1c773d0u: goto label_1c773d0;
        case 0x1c773fcu: goto label_1c773fc;
        case 0x1c77434u: goto label_1c77434;
        case 0x1c77440u: goto label_1c77440;
        default: break;
    }

    ctx->pc = 0x1c77398u;

    // 0x1c77398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7739c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c7739cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c773a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c773a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c773a4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c773a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c773a8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C773A8u;
    SET_GPR_U32(ctx, 31, 0x1C773B0u);
    ctx->pc = 0x1C773ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C773A8u;
    // 0x1c773ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C773A8u, 0x1C773B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C773B0u;
label_1c773b0:
    // 0x1c773b0: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C773B0u;
    SET_GPR_U32(ctx, 31, 0x1C773B8u);
    ctx->pc = 0x1C773B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C773B0u;
    // 0x1c773b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C773B0u, 0x1C773B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C773B8u;
label_1c773b8:
    // 0x1c773b8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c773b8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c773bc: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C773BCu;
    {
        const bool branch_taken_0x1c773bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C773C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C773BCu;
        // 0x1c773c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c773bc) {
            ctx->pc = 0x1C773E0u;
            goto label_1c773e0;
        }
    }
    ctx->pc = 0x1C773C4u;
    // 0x1c773c4: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C773C4u;
    SET_GPR_U32(ctx, 31, 0x1C773CCu);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C773C4u, 0x1C773CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C773CCu;
label_1c773cc:
    // 0x1c773cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c773ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c773d0:
    // 0x1c773d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c773d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c773d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c773d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c773d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C773D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C773DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C773D8u;
        // 0x1c773dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C773D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C773E0u;
label_1c773e0:
    // 0x1c773e0: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c773e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c773e4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1c773e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1c773e8: 0x31ee0003  andi        $t6, $t7, 0x3
    ctx->pc = 0x1c773e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)3);
    // 0x1c773ec: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C773ECu;
    {
        const bool branch_taken_0x1c773ec = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C773F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C773ECu;
        // 0x1c773f0: 0xae0f0018  sw          $t7, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c773ec) {
            ctx->pc = 0x1C773FCu;
            goto label_1c773fc;
        }
    }
    ctx->pc = 0x1C773F4u;
    // 0x1c773f4: 0xc71d8fe  jal         func_1C763F8
    ctx->pc = 0x1C773F4u;
    SET_GPR_U32(ctx, 31, 0x1C773FCu);
    ctx->pc = 0x1C773F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C773F4u;
    // 0x1c773f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C763F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C763F8u, 0x1C773F4u, 0x1C773FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C773FCu;
label_1c773fc:
    // 0x1c773fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1C773FCu;
    {
        const bool branch_taken_0x1c773fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C77400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C773FCu;
        // 0x1c77400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c773fc) {
            ctx->pc = 0x1C773D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c773d0;
        }
    }
    ctx->pc = 0x1C77404u;
    // 0x1c77404: 0x0  nop
    ctx->pc = 0x1c77404u;
    // NOP
    // 0x1c77408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7740c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7740cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c77410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c77410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c77414: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c77414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c77418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7741c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7741cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c77420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77424: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c77424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c77428: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c77428u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7742c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7742Cu;
    SET_GPR_U32(ctx, 31, 0x1C77434u);
    ctx->pc = 0x1C77430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7742Cu;
    // 0x1c77430: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7742Cu, 0x1C77434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77434u;
label_1c77434:
    // 0x1c77434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c77434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c77438: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C77438u;
    SET_GPR_U32(ctx, 31, 0x1C77440u);
    ctx->pc = 0x1C7743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77438u;
    // 0x1c7743c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C77438u, 0x1C77440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77440u;
label_1c77440:
    // 0x1c77440: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c77440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c77444: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c77444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c77448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c77448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7744c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7744Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C77450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7744Cu;
        // 0x1c77450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7744Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C77454u;
    // 0x1c77454: 0x0  nop
    ctx->pc = 0x1c77454u;
    // NOP
    ctx->pc = 0x1c77458u;
}
