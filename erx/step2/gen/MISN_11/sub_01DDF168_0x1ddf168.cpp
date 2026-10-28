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

// Function: sub_01DDF168
// Address: 0x1ddf168 - 0x1ddf180
void sub_01DDF168_0x1ddf168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDF168_0x1ddf168");
#endif

    ctx->pc = 0x1ddf168u;

    // 0x1ddf168: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1ddf168u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1ddf16c: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1ddf16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1ddf170: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1ddf170u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1ddf174: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF174u;
        // 0x1ddf178: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF17Cu;
    // 0x1ddf17c: 0x0  nop
    ctx->pc = 0x1ddf17cu;
    // NOP
    ctx->pc = 0x1ddf180u;
}
