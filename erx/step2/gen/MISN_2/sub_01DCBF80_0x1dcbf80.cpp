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

// Function: sub_01DCBF80
// Address: 0x1dcbf80 - 0x1dcbfa0
void sub_01DCBF80_0x1dcbf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCBF80_0x1dcbf80");
#endif

    ctx->pc = 0x1dcbf80u;

    // 0x1dcbf80: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcbf80u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcbf84: 0xaf80802c  sw          $zero, -0x7FD4($gp)
    ctx->pc = 0x1dcbf84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934572), GPR_U32(ctx, 0));
    // 0x1dcbf88: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dcbf88u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dcbf8c: 0xadc00cd8  sw          $zero, 0xCD8($t6)
    ctx->pc = 0x1dcbf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
    // 0x1dcbf90: 0x240f0e10  addiu       $t7, $zero, 0xE10
    ctx->pc = 0x1dcbf90u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x1dcbf94: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCBF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCBF94u;
        // 0x1dcbf98: 0xaf8f8034  sw          $t7, -0x7FCC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934580), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCBF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCBF9Cu;
    // 0x1dcbf9c: 0x0  nop
    ctx->pc = 0x1dcbf9cu;
    // NOP
    ctx->pc = 0x1dcbfa0u;
}
