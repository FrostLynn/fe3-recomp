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

// Function: sub_01DCA4D8
// Address: 0x1dca4d8 - 0x1dca4f0
void sub_01DCA4D8_0x1dca4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA4D8_0x1dca4d8");
#endif

    ctx->pc = 0x1dca4d8u;

    // 0x1dca4d8: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dca4d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca4dc: 0xaf808014  sw          $zero, -0x7FEC($gp)
    ctx->pc = 0x1dca4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934548), GPR_U32(ctx, 0));
    // 0x1dca4e0: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dca4e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dca4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCA4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCA4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCA4E4u;
        // 0x1dca4e8: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCA4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCA4ECu;
    // 0x1dca4ec: 0x0  nop
    ctx->pc = 0x1dca4ecu;
    // NOP
    ctx->pc = 0x1dca4f0u;
}
