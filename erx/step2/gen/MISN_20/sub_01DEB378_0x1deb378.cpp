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

// Function: sub_01DEB378
// Address: 0x1deb378 - 0x1deb390
void sub_01DEB378_0x1deb378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB378_0x1deb378");
#endif

    ctx->pc = 0x1deb378u;

    // 0x1deb378: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb378u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb37c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1deb37cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb380: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1deb380u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1deb384: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1deb384u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1deb388: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB388u;
        // 0x1deb38c: 0xadae0cd8  sw          $t6, 0xCD8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB390u;
}
