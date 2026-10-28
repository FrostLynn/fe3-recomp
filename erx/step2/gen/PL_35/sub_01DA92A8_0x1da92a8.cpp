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

// Function: sub_01DA92A8
// Address: 0x1da92a8 - 0x1da92c8
void sub_01DA92A8_0x1da92a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA92A8_0x1da92a8");
#endif

    ctx->pc = 0x1da92a8u;

    // 0x1da92a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da92a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da92ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da92acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da92b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da92b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da92b4: 0x8769f9e  j           func_1DA7E78
    ctx->pc = 0x1DA92B4u;
    ctx->pc = 0x1DA92B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA92B4u;
    // 0x1da92b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7E78u;
    sub_01DA7E78_0x1da7e78(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA92BCu;
    // 0x1da92bc: 0x0  nop
    ctx->pc = 0x1da92bcu;
    // NOP
    // 0x1da92c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA92C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA92C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA92C8u;
}
