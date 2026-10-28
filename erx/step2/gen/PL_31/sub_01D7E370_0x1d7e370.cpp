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

// Function: sub_01D7E370
// Address: 0x1d7e370 - 0x1d7e400
void sub_01D7E370_0x1d7e370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7E370_0x1d7e370");
#endif

    switch (ctx->pc) {
        case 0x1d7e384u: goto label_1d7e384;
        case 0x1d7e398u: goto label_1d7e398;
        case 0x1d7e39cu: goto label_1d7e39c;
        case 0x1d7e3e4u: goto label_1d7e3e4;
        default: break;
    }

    ctx->pc = 0x1d7e370u;

    // 0x1d7e370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e378: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7e378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7e37c: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7E37Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E384u);
    ctx->pc = 0x1D7E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E37Cu;
    // 0x1d7e380: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7E37Cu, 0x1D7E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E384u;
label_1d7e384:
    // 0x1d7e384: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7e384u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e388: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7E388u;
    {
        const bool branch_taken_0x1d7e388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E388u;
        // 0x1d7e38c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e388) {
            ctx->pc = 0x1D7E3ACu;
            goto label_1d7e3ac;
        }
    }
    ctx->pc = 0x1D7E390u;
    // 0x1d7e390: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7E390u;
    SET_GPR_U32(ctx, 31, 0x1D7E398u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7E390u, 0x1D7E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E398u;
label_1d7e398:
    // 0x1d7e398: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7e398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7e39c:
    // 0x1d7e39c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e39cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e3a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7e3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E3A4u;
        // 0x1d7e3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E3ACu;
label_1d7e3ac:
    // 0x1d7e3ac: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7E3ACu;
    {
        const bool branch_taken_0x1d7e3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E3ACu;
        // 0x1d7e3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7e3ac) {
            ctx->pc = 0x1D7E39Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7e39c;
        }
    }
    ctx->pc = 0x1D7E3B4u;
    // 0x1d7e3b4: 0x0  nop
    ctx->pc = 0x1d7e3b4u;
    // NOP
    // 0x1d7e3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7e3c4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7e3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7e3c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7e3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7e3cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d7e3ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e3d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7e3d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e3d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7e3d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e3d8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7e3d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7e3dc: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7E3DCu;
    SET_GPR_U32(ctx, 31, 0x1D7E3E4u);
    ctx->pc = 0x1D7E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E3DCu;
    // 0x1d7e3e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7E3DCu, 0x1D7E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E3E4u;
label_1d7e3e4:
    // 0x1d7e3e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e3e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7e3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7e3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7e3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7e3f0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d7e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7e3f4: 0x875f5da  j           func_1D7D768
    ctx->pc = 0x1D7E3F4u;
    ctx->pc = 0x1D7E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E3F4u;
    // 0x1d7e3f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    sub_01D7D768_0x1d7d768(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7E3FCu;
    // 0x1d7e3fc: 0x0  nop
    ctx->pc = 0x1d7e3fcu;
    // NOP
    ctx->pc = 0x1d7e400u;
}
