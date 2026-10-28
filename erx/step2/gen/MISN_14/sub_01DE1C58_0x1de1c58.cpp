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

// Function: sub_01DE1C58
// Address: 0x1de1c58 - 0x1de1c70
void sub_01DE1C58_0x1de1c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1C58_0x1de1c58");
#endif

    ctx->pc = 0x1de1c58u;

    // 0x1de1c58: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1de1c58u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de1c5c: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de1c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de1c60: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1de1c60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1de1c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C64u;
        // 0x1de1c68: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1C6Cu;
    // 0x1de1c6c: 0x0  nop
    ctx->pc = 0x1de1c6cu;
    // NOP
    ctx->pc = 0x1de1c70u;
}
