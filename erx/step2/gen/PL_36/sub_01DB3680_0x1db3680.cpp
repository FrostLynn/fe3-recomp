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

// Function: sub_01DB3680
// Address: 0x1db3680 - 0x1db36a0
void sub_01DB3680_0x1db3680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3680_0x1db3680");
#endif

    ctx->pc = 0x1db3680u;

    // 0x1db3680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db3684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db3688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db368c: 0x876c7da  j           func_1DB1F68
    ctx->pc = 0x1DB368Cu;
    ctx->pc = 0x1DB3690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB368Cu;
    // 0x1db3690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1F68u;
    sub_01DB1F68_0x1db1f68(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB3694u;
    // 0x1db3694: 0x0  nop
    ctx->pc = 0x1db3694u;
    // NOP
    // 0x1db3698: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB3698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB3698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB36A0u;
}
