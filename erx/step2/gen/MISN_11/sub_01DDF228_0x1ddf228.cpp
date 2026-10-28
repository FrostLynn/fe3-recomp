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

// Function: sub_01DDF228
// Address: 0x1ddf228 - 0x1ddf238
void sub_01DDF228_0x1ddf228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DDF228_0x1ddf228");
#endif

    ctx->pc = 0x1ddf228u;

    // 0x1ddf228: 0xaf848014  sw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1ddf228u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 4));
    // 0x1ddf22c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1ddf22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1ddf230: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF230u;
        // 0x1ddf234: 0x2442f788  addiu       $v0, $v0, -0x878 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDF238u;
}
