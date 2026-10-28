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

// Function: sub_01C77888
// Address: 0x1c77888 - 0x1c778a0
void sub_01C77888_0x1c77888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77888_0x1c77888");
#endif

    ctx->pc = 0x1c77888u;

    // 0x1c77888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7788c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7788cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c77890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c77890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c77894: 0x871d8e2  j           func_1C76388
    ctx->pc = 0x1C77894u;
    ctx->pc = 0x1C77898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C77894u;
    // 0x1c77898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76388u;
    sub_01C76388_0x1c76388(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7789Cu;
    // 0x1c7789c: 0x0  nop
    ctx->pc = 0x1c7789cu;
    // NOP
    ctx->pc = 0x1c778a0u;
}
