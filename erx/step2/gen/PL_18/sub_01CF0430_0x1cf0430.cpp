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

// Function: sub_01CF0430
// Address: 0x1cf0430 - 0x1cf0458
void sub_01CF0430_0x1cf0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0430_0x1cf0430");
#endif

    switch (ctx->pc) {
        case 0x1cf0444u: goto label_1cf0444;
        default: break;
    }

    ctx->pc = 0x1cf0430u;

    // 0x1cf0430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf0434: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf0434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf0438: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf0438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf043c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF043Cu;
    SET_GPR_U32(ctx, 31, 0x1CF0444u);
    ctx->pc = 0x1CF0440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF043Cu;
    // 0x1cf0440: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF043Cu, 0x1CF0444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0444u;
label_1cf0444:
    // 0x1cf0444: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1cf0444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1cf0448: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1cf0448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1cf044c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf0450: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF0450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF0454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF0450u;
        // 0x1cf0454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF0450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF0458u;
}
