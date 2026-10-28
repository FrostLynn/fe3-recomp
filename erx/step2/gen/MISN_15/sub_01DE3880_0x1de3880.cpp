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

// Function: sub_01DE3880
// Address: 0x1de3880 - 0x1de3898
void sub_01DE3880_0x1de3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3880_0x1de3880");
#endif

    ctx->pc = 0x1de3880u;

    // 0x1de3880: 0x8c8f081c  lw          $t7, 0x81C($a0)
    ctx->pc = 0x1de3880u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2076)));
    // 0x1de3884: 0xaf282a  slt         $a1, $a1, $t7
    ctx->pc = 0x1de3884u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1de3888: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x1de3888u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1de388c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE388Cu;
        // 0x1de3890: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE3894u;
    // 0x1de3894: 0x0  nop
    ctx->pc = 0x1de3894u;
    // NOP
    ctx->pc = 0x1de3898u;
}
