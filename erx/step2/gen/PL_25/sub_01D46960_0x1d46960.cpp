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

// Function: sub_01D46960
// Address: 0x1d46960 - 0x1d469f0
void sub_01D46960_0x1d46960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D46960_0x1d46960");
#endif

    switch (ctx->pc) {
        case 0x1d46974u: goto label_1d46974;
        case 0x1d46988u: goto label_1d46988;
        case 0x1d4698cu: goto label_1d4698c;
        case 0x1d469d4u: goto label_1d469d4;
        default: break;
    }

    ctx->pc = 0x1d46960u;

    // 0x1d46960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d46960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d46964: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d46964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d46968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d46968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d4696c: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D4696Cu;
    SET_GPR_U32(ctx, 31, 0x1D46974u);
    ctx->pc = 0x1D46970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4696Cu;
    // 0x1d46970: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D4696Cu, 0x1D46974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46974u;
label_1d46974:
    // 0x1d46974: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d46974u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d46978: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D46978u;
    {
        const bool branch_taken_0x1d46978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D4697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46978u;
        // 0x1d4697c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46978) {
            ctx->pc = 0x1D4699Cu;
            goto label_1d4699c;
        }
    }
    ctx->pc = 0x1D46980u;
    // 0x1d46980: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D46980u;
    SET_GPR_U32(ctx, 31, 0x1D46988u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D46980u, 0x1D46988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46988u;
label_1d46988:
    // 0x1d46988: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d46988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d4698c:
    // 0x1d4698c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4698cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46990: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d46990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46994: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46994u;
        // 0x1d46998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4699Cu;
label_1d4699c:
    // 0x1d4699c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4699Cu;
    {
        const bool branch_taken_0x1d4699c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D469A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4699Cu;
        // 0x1d469a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4699c) {
            ctx->pc = 0x1D4698Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4698c;
        }
    }
    ctx->pc = 0x1D469A4u;
    // 0x1d469a4: 0x0  nop
    ctx->pc = 0x1d469a4u;
    // NOP
    // 0x1d469a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d469a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d469ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d469acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d469b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d469b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d469b4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d469b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d469b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d469b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d469bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d469bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d469c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d469c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d469c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d469c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d469c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d469c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d469cc: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D469CCu;
    SET_GPR_U32(ctx, 31, 0x1D469D4u);
    ctx->pc = 0x1D469D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D469CCu;
    // 0x1d469d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D469CCu, 0x1D469D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D469D4u;
label_1d469d4:
    // 0x1d469d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d469d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d469d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d469d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d469dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d469dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d469e0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d469e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d469e4: 0x875175a  j           func_1D45D68
    ctx->pc = 0x1D469E4u;
    ctx->pc = 0x1D469E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D469E4u;
    // 0x1d469e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    sub_01D45D68_0x1d45d68(rdram, ctx, runtime); return;
    ctx->pc = 0x1D469ECu;
    // 0x1d469ec: 0x0  nop
    ctx->pc = 0x1d469ecu;
    // NOP
    ctx->pc = 0x1d469f0u;
}
