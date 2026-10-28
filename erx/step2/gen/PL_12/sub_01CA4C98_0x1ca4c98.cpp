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

// Function: sub_01CA4C98
// Address: 0x1ca4c98 - 0x1ca4cb8
void sub_01CA4C98_0x1ca4c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4C98_0x1ca4c98");
#endif

    switch (ctx->pc) {
        case 0x1ca4ca8u: goto label_1ca4ca8;
        default: break;
    }

    ctx->pc = 0x1ca4c98u;

    // 0x1ca4c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca4c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca4ca0: 0xc728c70  jal         func_1CA31C0
    ctx->pc = 0x1CA4CA0u;
    SET_GPR_U32(ctx, 31, 0x1CA4CA8u);
    ctx->pc = 0x1CA31C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA31C0u, 0x1CA4CA0u, 0x1CA4CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4CA8u;
label_1ca4ca8:
    // 0x1ca4ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4cac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca4cacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4CB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4CB0u;
        // 0x1ca4cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4CB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4CB8u;
}
