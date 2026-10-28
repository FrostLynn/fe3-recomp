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

// Function: sub_01D27878
// Address: 0x1d27878 - 0x1d27908
void sub_01D27878_0x1d27878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27878_0x1d27878");
#endif

    switch (ctx->pc) {
        case 0x1d2788cu: goto label_1d2788c;
        case 0x1d278a0u: goto label_1d278a0;
        case 0x1d278a4u: goto label_1d278a4;
        case 0x1d278ecu: goto label_1d278ec;
        default: break;
    }

    ctx->pc = 0x1d27878u;

    // 0x1d27878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2787c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2787cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27880: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d27880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d27884: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D27884u;
    SET_GPR_U32(ctx, 31, 0x1D2788Cu);
    ctx->pc = 0x1D27888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27884u;
    // 0x1d27888: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D27884u, 0x1D2788Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2788Cu;
label_1d2788c:
    // 0x1d2788c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d2788cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27890: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D27890u;
    {
        const bool branch_taken_0x1d27890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D27894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27890u;
        // 0x1d27894: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27890) {
            ctx->pc = 0x1D278B4u;
            goto label_1d278b4;
        }
    }
    ctx->pc = 0x1D27898u;
    // 0x1d27898: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D27898u;
    SET_GPR_U32(ctx, 31, 0x1D278A0u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D27898u, 0x1D278A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D278A0u;
label_1d278a0:
    // 0x1d278a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d278a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d278a4:
    // 0x1d278a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d278a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d278a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d278a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d278ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1D278ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D278B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D278ACu;
        // 0x1d278b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D278ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D278B4u;
label_1d278b4:
    // 0x1d278b4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D278B4u;
    {
        const bool branch_taken_0x1d278b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D278B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D278B4u;
        // 0x1d278b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d278b4) {
            ctx->pc = 0x1D278A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d278a4;
        }
    }
    ctx->pc = 0x1D278BCu;
    // 0x1d278bc: 0x0  nop
    ctx->pc = 0x1d278bcu;
    // NOP
    // 0x1d278c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d278c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d278c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d278c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d278c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d278c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d278cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d278ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d278d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d278d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d278d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d278d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d278d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d278d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d278dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d278dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d278e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d278e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d278e4: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D278E4u;
    SET_GPR_U32(ctx, 31, 0x1D278ECu);
    ctx->pc = 0x1D278E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D278E4u;
    // 0x1d278e8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D278E4u, 0x1D278ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D278ECu;
label_1d278ec:
    // 0x1d278ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d278ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d278f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d278f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d278f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d278f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d278f8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d278f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d278fc: 0x8749b1e  j           func_1D26C78
    ctx->pc = 0x1D278FCu;
    ctx->pc = 0x1D27900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D278FCu;
    // 0x1d27900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    sub_01D26C78_0x1d26c78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D27904u;
    // 0x1d27904: 0x0  nop
    ctx->pc = 0x1d27904u;
    // NOP
    ctx->pc = 0x1d27908u;
}
