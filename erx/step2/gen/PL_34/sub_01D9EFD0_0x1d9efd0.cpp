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

// Function: sub_01D9EFD0
// Address: 0x1d9efd0 - 0x1d9f000
void sub_01D9EFD0_0x1d9efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EFD0_0x1d9efd0");
#endif

    switch (ctx->pc) {
        case 0x1d9eff0u: goto label_1d9eff0;
        default: break;
    }

    ctx->pc = 0x1d9efd0u;

    // 0x1d9efd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9efd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9efd4: 0x3c0401da  lui         $a0, 0x1DA
    ctx->pc = 0x1d9efd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)474 << 16));
    // 0x1d9efd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9efdc: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x1d9efdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x1d9efe0: 0x2484c9c0  addiu       $a0, $a0, -0x3640
    ctx->pc = 0x1d9efe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953408));
    // 0x1d9efe4: 0x24a5fa90  addiu       $a1, $a1, -0x570
    ctx->pc = 0x1d9efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965904));
    // 0x1d9efe8: 0xc767272  jal         func_1D9C9C8
    ctx->pc = 0x1D9EFE8u;
    SET_GPR_U32(ctx, 31, 0x1D9EFF0u);
    ctx->pc = 0x1D9EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EFE8u;
    // 0x1d9efec: 0x24060302  addiu       $a2, $zero, 0x302 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 770));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C9C8u, 0x1D9EFE8u, 0x1D9EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EFF0u;
label_1d9eff0:
    // 0x1d9eff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9eff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9eff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9eff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eff8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EFF8u;
        // 0x1d9effc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F000u;
}
