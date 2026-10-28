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

// Function: sub_01DE7230
// Address: 0x1de7230 - 0x1de7240
void sub_01DE7230_0x1de7230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE7230_0x1de7230");
#endif

    ctx->pc = 0x1de7230u;

    // 0x1de7230: 0xaf848014  sw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de7230u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 4));
    // 0x1de7234: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x1de7234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x1de7238: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE7238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7238u;
        // 0x1de723c: 0x24429be8  addiu       $v0, $v0, -0x6418 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE7238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE7240u;
}
