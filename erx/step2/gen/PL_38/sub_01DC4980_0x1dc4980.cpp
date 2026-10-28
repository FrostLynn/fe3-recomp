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

// Function: sub_01DC4980
// Address: 0x1dc4980 - 0x1dc49c8
void sub_01DC4980_0x1dc4980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4980_0x1dc4980");
#endif

    switch (ctx->pc) {
        case 0x1dc49a8u: goto label_1dc49a8;
        case 0x1dc49b8u: goto label_1dc49b8;
        default: break;
    }

    ctx->pc = 0x1dc4980u;

    // 0x1dc4980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4984: 0x8f8f805c  lw          $t7, -0x7FA4($gp)
    ctx->pc = 0x1dc4984u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934620)));
    // 0x1dc4988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc4988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc498c: 0x55e00004  bnel        $t7, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DC498Cu;
    {
        const bool branch_taken_0x1dc498c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc498c) {
            ctx->pc = 0x1DC4990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DC498Cu;
            // 0x1dc4990: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DC49A0u;
            goto label_1dc49a0;
        }
    }
    ctx->pc = 0x1DC4994u;
    // 0x1dc4994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc4994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4998: 0x87710c4  j           func_1DC4310
    ctx->pc = 0x1DC4998u;
    ctx->pc = 0x1DC499Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4998u;
    // 0x1dc499c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4310u;
    sub_01DC4310_0x1dc4310(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC49A0u;
label_1dc49a0:
    // 0x1dc49a0: 0xc77108c  jal         func_1DC4230
    ctx->pc = 0x1DC49A0u;
    SET_GPR_U32(ctx, 31, 0x1DC49A8u);
    ctx->pc = 0x1DC49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC49A0u;
    // 0x1dc49a4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4230u, 0x1DC49A0u, 0x1DC49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC49A8u;
label_1dc49a8:
    // 0x1dc49a8: 0x24440390  addiu       $a0, $v0, 0x390
    ctx->pc = 0x1dc49a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 912));
    // 0x1dc49ac: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1dc49acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1dc49b0: 0xc771092  jal         func_1DC4248
    ctx->pc = 0x1DC49B0u;
    SET_GPR_U32(ctx, 31, 0x1DC49B8u);
    ctx->pc = 0x1DC49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC49B0u;
    // 0x1dc49b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC4248u, 0x1DC49B0u, 0x1DC49B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DC49B8u;
label_1dc49b8:
    // 0x1dc49b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc49b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc49bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1dc49bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dc49c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC49C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC49C0u;
        // 0x1dc49c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC49C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC49C8u;
}
