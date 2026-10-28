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

// Function: sub_01C01C70
// Address: 0x1c01c70 - 0x1c01ca8
void sub_01C01C70_0x1c01c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01C70_0x1c01c70");
#endif

    switch (ctx->pc) {
        case 0x1c01c80u: goto label_1c01c80;
        default: break;
    }

    ctx->pc = 0x1c01c70u;

    // 0x1c01c70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01c74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c78: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C01C78u;
    {
        const bool branch_taken_0x1c01c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C78u;
        // 0x1c01c7c: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c78) {
            ctx->pc = 0x1C01C3Cu;
            return;
        }
    }
    ctx->pc = 0x1C01C80u;
label_1c01c80:
    // 0x1c01c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c01c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c01c84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c01c88: 0x1000ffec  b           . + 4 + (-0x14 << 2)
    ctx->pc = 0x1C01C88u;
    {
        const bool branch_taken_0x1c01c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01C88u;
        // 0x1c01c8c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01c88) {
            ctx->pc = 0x1C01C3Cu;
            return;
        }
    }
    ctx->pc = 0x1C01C90u;
    // 0x1c01c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c01c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c01c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c01c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01c9c: 0x8700318  j           func_1C00C60
    ctx->pc = 0x1C01C9Cu;
    ctx->pc = 0x1C01CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01C9Cu;
    // 0x1c01ca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00C60u;
    sub_01C00C60_0x1c00c60(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01CA4u;
    // 0x1c01ca4: 0x0  nop
    ctx->pc = 0x1c01ca4u;
    // NOP
    ctx->pc = 0x1c01ca8u;
}
