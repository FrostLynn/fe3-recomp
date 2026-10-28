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

// Function: sub_01C9B348
// Address: 0x1c9b348 - 0x1c9b3d8
void sub_01C9B348_0x1c9b348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B348_0x1c9b348");
#endif

    switch (ctx->pc) {
        case 0x1c9b35cu: goto label_1c9b35c;
        case 0x1c9b370u: goto label_1c9b370;
        case 0x1c9b374u: goto label_1c9b374;
        case 0x1c9b3bcu: goto label_1c9b3bc;
        default: break;
    }

    ctx->pc = 0x1c9b348u;

    // 0x1c9b348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b34c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b350: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b354: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9B354u;
    SET_GPR_U32(ctx, 31, 0x1C9B35Cu);
    ctx->pc = 0x1C9B358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B354u;
    // 0x1c9b358: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9B354u, 0x1C9B35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B35Cu;
label_1c9b35c:
    // 0x1c9b35c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9b35cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b360: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C9B360u;
    {
        const bool branch_taken_0x1c9b360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9B364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B360u;
        // 0x1c9b364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b360) {
            ctx->pc = 0x1C9B384u;
            goto label_1c9b384;
        }
    }
    ctx->pc = 0x1C9B368u;
    // 0x1c9b368: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9B368u;
    SET_GPR_U32(ctx, 31, 0x1C9B370u);
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9B368u, 0x1C9B370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B370u;
label_1c9b370:
    // 0x1c9b370: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9b374:
    // 0x1c9b374: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b37c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B37Cu;
        // 0x1c9b380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B384u;
label_1c9b384:
    // 0x1c9b384: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9B384u;
    {
        const bool branch_taken_0x1c9b384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B384u;
        // 0x1c9b388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b384) {
            ctx->pc = 0x1C9B374u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9b374;
        }
    }
    ctx->pc = 0x1C9B38Cu;
    // 0x1c9b38c: 0x0  nop
    ctx->pc = 0x1c9b38cu;
    // NOP
    // 0x1c9b390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9b394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b39c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b3a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b3a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9b3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b3a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b3a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b3ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9b3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b3b0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c9b3b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b3b4: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9B3B4u;
    SET_GPR_U32(ctx, 31, 0x1C9B3BCu);
    ctx->pc = 0x1C9B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B3B4u;
    // 0x1c9b3b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9B3B4u, 0x1C9B3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B3BCu;
label_1c9b3bc:
    // 0x1c9b3bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b3c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b3c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b3c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b3c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c9b3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b3cc: 0x87262da  j           func_1C98B68
    ctx->pc = 0x1C9B3CCu;
    ctx->pc = 0x1C9B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B3CCu;
    // 0x1c9b3d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    sub_01C98B68_0x1c98b68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B3D4u;
    // 0x1c9b3d4: 0x0  nop
    ctx->pc = 0x1c9b3d4u;
    // NOP
    ctx->pc = 0x1c9b3d8u;
}
