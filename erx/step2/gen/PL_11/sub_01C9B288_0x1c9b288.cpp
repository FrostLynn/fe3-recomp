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

// Function: sub_01C9B288
// Address: 0x1c9b288 - 0x1c9b2b0
void sub_01C9B288_0x1c9b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B288_0x1c9b288");
#endif

    ctx->pc = 0x1c9b288u;

    // 0x1c9b288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9b290: 0x8c8e0024  lw          $t6, 0x24($a0)
    ctx->pc = 0x1c9b290u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c9b294: 0x15c00003  bnez        $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9B294u;
    {
        const bool branch_taken_0x1c9b294 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B294u;
        // 0x1c9b298: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b294) {
            ctx->pc = 0x1C9B2A4u;
            goto label_1c9b2a4;
        }
    }
    ctx->pc = 0x1C9B29Cu;
    // 0x1c9b29c: 0x8726c66  j           func_1C9B198
    ctx->pc = 0x1C9B29Cu;
    ctx->pc = 0x1C9B2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B29Cu;
    // 0x1c9b2a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9B198u;
    sub_01C9B198_0x1c9b198(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B2A4u;
label_1c9b2a4:
    // 0x1c9b2a4: 0x87266de  j           func_1C99B78
    ctx->pc = 0x1C9B2A4u;
    ctx->pc = 0x1C9B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B2A4u;
    // 0x1c9b2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99B78u;
    sub_01C99B78_0x1c99b78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B2ACu;
    // 0x1c9b2ac: 0x0  nop
    ctx->pc = 0x1c9b2acu;
    // NOP
    ctx->pc = 0x1c9b2b0u;
}
