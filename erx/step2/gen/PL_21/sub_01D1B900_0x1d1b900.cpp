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

// Function: sub_01D1B900
// Address: 0x1d1b900 - 0x1d1b938
void sub_01D1B900_0x1d1b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B900_0x1d1b900");
#endif

    switch (ctx->pc) {
        case 0x1d1b928u: goto label_1d1b928;
        default: break;
    }

    ctx->pc = 0x1d1b900u;

    // 0x1d1b900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b908: 0x8c8f0018  lw          $t7, 0x18($a0)
    ctx->pc = 0x1d1b908u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1d1b90c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1d1b90cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1d1b910: 0xac8f0018  sw          $t7, 0x18($a0)
    ctx->pc = 0x1d1b910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 15));
    // 0x1d1b914: 0x29ef000a  slti        $t7, $t7, 0xA
    ctx->pc = 0x1d1b914u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d1b918: 0x15e00004  bnez        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D1B918u;
    {
        const bool branch_taken_0x1d1b918 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D1B91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B918u;
        // 0x1d1b91c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1b918) {
            ctx->pc = 0x1D1B92Cu;
            goto label_1d1b92c;
        }
    }
    ctx->pc = 0x1D1B920u;
    // 0x1d1b920: 0xc746418  jal         func_1D19060
    ctx->pc = 0x1D1B920u;
    SET_GPR_U32(ctx, 31, 0x1D1B928u);
    ctx->pc = 0x1D19060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19060u, 0x1D1B920u, 0x1D1B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1B928u;
label_1d1b928:
    // 0x1d1b928: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d1b928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d1b92c:
    // 0x1d1b92c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b930: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1B930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1B930u;
        // 0x1d1b934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1B930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1B938u;
}
