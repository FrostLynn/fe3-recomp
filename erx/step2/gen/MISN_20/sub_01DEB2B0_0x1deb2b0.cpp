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

// Function: sub_01DEB2B0
// Address: 0x1deb2b0 - 0x1deb2d0
void sub_01DEB2B0_0x1deb2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB2B0_0x1deb2b0");
#endif

    ctx->pc = 0x1deb2b0u;

    // 0x1deb2b0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb2b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb2b4: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1deb2b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb2b8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1deb2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1deb2bc: 0x8ded00dc  lw          $t5, 0xDC($t7)
    ctx->pc = 0x1deb2bcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1deb2c0: 0xa1ee0430  sb          $t6, 0x430($t7)
    ctx->pc = 0x1deb2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1072), (uint8_t)GPR_U32(ctx, 14));
    // 0x1deb2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB2C4u;
        // 0x1deb2c8: 0xada00cd8  sw          $zero, 0xCD8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB2CCu;
    // 0x1deb2cc: 0x0  nop
    ctx->pc = 0x1deb2ccu;
    // NOP
    ctx->pc = 0x1deb2d0u;
}
