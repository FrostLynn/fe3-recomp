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

// Function: sub_01DD3F40
// Address: 0x1dd3f40 - 0x1dd3f58
void sub_01DD3F40_0x1dd3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3F40_0x1dd3f40");
#endif

    ctx->pc = 0x1dd3f40u;

    // 0x1dd3f40: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd3f40u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd3f44: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd3f44u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd3f48: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dd3f48u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd3f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3F4Cu;
        // 0x1dd3f50: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3F54u;
    // 0x1dd3f54: 0x0  nop
    ctx->pc = 0x1dd3f54u;
    // NOP
    ctx->pc = 0x1dd3f58u;
}
