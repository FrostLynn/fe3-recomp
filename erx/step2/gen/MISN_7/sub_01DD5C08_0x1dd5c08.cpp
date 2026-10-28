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

// Function: sub_01DD5C08
// Address: 0x1dd5c08 - 0x1dd5c20
void sub_01DD5C08_0x1dd5c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5C08_0x1dd5c08");
#endif

    ctx->pc = 0x1dd5c08u;

    // 0x1dd5c08: 0x8f8f8018  lw          $t7, -0x7FE8($gp)
    ctx->pc = 0x1dd5c08u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5c0c: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd5c10: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dd5c10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd5c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD5C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD5C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD5C14u;
        // 0x1dd5c18: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD5C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD5C1Cu;
    // 0x1dd5c1c: 0x0  nop
    ctx->pc = 0x1dd5c1cu;
    // NOP
    ctx->pc = 0x1dd5c20u;
}
