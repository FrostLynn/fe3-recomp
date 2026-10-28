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

// Function: sub_01DCF680
// Address: 0x1dcf680 - 0x1dcf6a8
void sub_01DCF680_0x1dcf680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCF680_0x1dcf680");
#endif

    ctx->pc = 0x1dcf680u;

    // 0x1dcf680: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dcf680u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dcf684: 0x240f0080  addiu       $t7, $zero, 0x80
    ctx->pc = 0x1dcf684u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1dcf688: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1dcf688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
    // 0x1dcf68c: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dcf68cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dcf690: 0x8dae00dc  lw          $t6, 0xDC($t5)
    ctx->pc = 0x1dcf690u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dcf694: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dcf694u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dcf698: 0xa1af0430  sb          $t7, 0x430($t5)
    ctx->pc = 0x1dcf698u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1072), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dcf69c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCF69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCF69Cu;
        // 0x1dcf6a0: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCF69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCF6A4u;
    // 0x1dcf6a4: 0x0  nop
    ctx->pc = 0x1dcf6a4u;
    // NOP
    ctx->pc = 0x1dcf6a8u;
}
