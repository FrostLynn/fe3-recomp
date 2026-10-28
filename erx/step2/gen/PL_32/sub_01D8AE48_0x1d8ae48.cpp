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

// Function: sub_01D8AE48
// Address: 0x1d8ae48 - 0x1d8ae98
void sub_01D8AE48_0x1d8ae48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AE48_0x1d8ae48");
#endif

    switch (ctx->pc) {
        case 0x1d8ae74u: goto label_1d8ae74;
        case 0x1d8ae80u: goto label_1d8ae80;
        default: break;
    }

    ctx->pc = 0x1d8ae48u;

    // 0x1d8ae48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ae48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ae4c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8ae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8ae50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8ae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8ae54: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8ae54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8ae58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8ae58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8ae5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8ae5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ae60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8ae60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ae64: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d8ae64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8ae68: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8ae68u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ae6c: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8AE6Cu;
    SET_GPR_U32(ctx, 31, 0x1D8AE74u);
    ctx->pc = 0x1D8AE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AE6Cu;
    // 0x1d8ae70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8AE6Cu, 0x1D8AE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AE74u;
label_1d8ae74:
    // 0x1d8ae74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8ae74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8ae78: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D8AE78u;
    SET_GPR_U32(ctx, 31, 0x1D8AE80u);
    ctx->pc = 0x1D8AE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AE78u;
    // 0x1d8ae7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D8AE78u, 0x1D8AE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AE80u;
label_1d8ae80:
    // 0x1d8ae80: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d8ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d8ae84: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d8ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d8ae88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8ae88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8ae8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8ae8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8ae90: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AE90u;
        // 0x1d8ae94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AE98u;
}
