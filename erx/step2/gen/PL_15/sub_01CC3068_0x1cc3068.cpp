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

// Function: sub_01CC3068
// Address: 0x1cc3068 - 0x1cc30f8
void sub_01CC3068_0x1cc3068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3068_0x1cc3068");
#endif

    switch (ctx->pc) {
        case 0x1cc307cu: goto label_1cc307c;
        case 0x1cc3090u: goto label_1cc3090;
        case 0x1cc3094u: goto label_1cc3094;
        case 0x1cc30dcu: goto label_1cc30dc;
        default: break;
    }

    ctx->pc = 0x1cc3068u;

    // 0x1cc3068: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc3068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc306c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc306cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3070: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc3070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc3074: 0xc730914  jal         func_1CC2450
    ctx->pc = 0x1CC3074u;
    SET_GPR_U32(ctx, 31, 0x1CC307Cu);
    ctx->pc = 0x1CC3078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3074u;
    // 0x1cc3078: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2450u, 0x1CC3074u, 0x1CC307Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC307Cu;
label_1cc307c:
    // 0x1cc307c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc307cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc3080: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CC3080u;
    {
        const bool branch_taken_0x1cc3080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CC3084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3080u;
        // 0x1cc3084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3080) {
            ctx->pc = 0x1CC30A4u;
            goto label_1cc30a4;
        }
    }
    ctx->pc = 0x1CC3088u;
    // 0x1cc3088: 0xc730916  jal         func_1CC2458
    ctx->pc = 0x1CC3088u;
    SET_GPR_U32(ctx, 31, 0x1CC3090u);
    ctx->pc = 0x1CC2458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2458u, 0x1CC3088u, 0x1CC3090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3090u;
label_1cc3090:
    // 0x1cc3090: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cc3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cc3094:
    // 0x1cc3094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc3094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3098: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc3098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc309c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC309Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC309Cu;
        // 0x1cc30a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC309Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC30A4u;
label_1cc30a4:
    // 0x1cc30a4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CC30A4u;
    {
        const bool branch_taken_0x1cc30a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC30A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC30A4u;
        // 0x1cc30a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc30a4) {
            ctx->pc = 0x1CC3094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc3094;
        }
    }
    ctx->pc = 0x1CC30ACu;
    // 0x1cc30ac: 0x0  nop
    ctx->pc = 0x1cc30acu;
    // NOP
    // 0x1cc30b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc30b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc30b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc30b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc30b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc30b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc30bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc30bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc30c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc30c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc30c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cc30c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc30c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc30c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc30cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc30ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc30d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cc30d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc30d4: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC30D4u;
    SET_GPR_U32(ctx, 31, 0x1CC30DCu);
    ctx->pc = 0x1CC30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC30D4u;
    // 0x1cc30d8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC30D4u, 0x1CC30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC30DCu;
label_1cc30dc:
    // 0x1cc30dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc30dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc30e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc30e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc30e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc30e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc30e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cc30e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc30ec: 0x873091c  j           func_1CC2470
    ctx->pc = 0x1CC30ECu;
    ctx->pc = 0x1CC30F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC30ECu;
    // 0x1cc30f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    sub_01CC2470_0x1cc2470(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC30F4u;
    // 0x1cc30f4: 0x0  nop
    ctx->pc = 0x1cc30f4u;
    // NOP
    ctx->pc = 0x1cc30f8u;
}
