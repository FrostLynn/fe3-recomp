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

// Function: sub_01DDF128
// Address: 0x1ddf128 - 0x1ddf148
void sub_01DDF128_0x1ddf128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDF128_0x1ddf128");
#endif

    switch (ctx->pc) {
        case 0x1ddf13cu: goto label_1ddf13c;
        default: break;
    }

    ctx->pc = 0x1ddf128u;

    // 0x1ddf128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ddf128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ddf12c: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1ddf12cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1ddf130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddf130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddf134: 0xc777c0c  jal         func_1DDF030
    ctx->pc = 0x1DDF134u;
    SET_GPR_U32(ctx, 31, 0x1DDF13Cu);
    ctx->pc = 0x1DDF138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDF134u;
    // 0x1ddf138: 0x2484f4a8  addiu       $a0, $a0, -0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DDF030u, 0x1DDF134u, 0x1DDF13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DDF13Cu;
label_1ddf13c:
    // 0x1ddf13c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddf13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddf140: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF140u;
        // 0x1ddf144: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF148u;
}
