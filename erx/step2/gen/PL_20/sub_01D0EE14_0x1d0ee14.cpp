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

// Function: sub_01D0EE14
// Address: 0x1d0ee14 - 0x1d0ee28
void sub_01D0EE14_0x1d0ee14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EE14_0x1d0ee14");
#endif

    switch (ctx->pc) {
        case 0x1d0ee20u: goto label_1d0ee20;
        default: break;
    }

    ctx->pc = 0x1d0ee14u;

    // 0x1d0ee14: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d0ee14u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d0ee18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EE18u;
        // 0x1d0ee1c: 0x25e27ff0  addiu       $v0, $t7, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 32752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EE20u;
label_1d0ee20:
    // 0x1d0ee20: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EE20u;
        // 0x1d0ee24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EE28u;
}
