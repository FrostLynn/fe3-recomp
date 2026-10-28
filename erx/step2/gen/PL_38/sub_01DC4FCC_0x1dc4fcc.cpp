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

// Function: sub_01DC4FCC
// Address: 0x1dc4fcc - 0x1dc4fe0
void sub_01DC4FCC_0x1dc4fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4FCC_0x1dc4fcc");
#endif

    switch (ctx->pc) {
        case 0x1dc4fd8u: goto label_1dc4fd8;
        default: break;
    }

    ctx->pc = 0x1dc4fccu;

    // 0x1dc4fcc: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dc4fccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dc4fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FD0u;
        // 0x1dc4fd4: 0x25e29a88  addiu       $v0, $t7, -0x6578 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4FD8u;
label_1dc4fd8:
    // 0x1dc4fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4FD8u;
        // 0x1dc4fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4FE0u;
}
