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

// Function: sub_01C77740
// Address: 0x1c77740 - 0x1c77758
void sub_01C77740_0x1c77740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C77740_0x1c77740");
#endif

    ctx->pc = 0x1c77740u;

    // 0x1c77740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c77740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c77744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c77744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c77748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c77748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7774c: 0x871d660  j           func_1C75980
    ctx->pc = 0x1C7774Cu;
    ctx->pc = 0x1C77750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7774Cu;
    // 0x1c77750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75980u;
    sub_01C75980_0x1c75980(rdram, ctx, runtime); return;
    ctx->pc = 0x1C77754u;
    // 0x1c77754: 0x0  nop
    ctx->pc = 0x1c77754u;
    // NOP
    ctx->pc = 0x1c77758u;
}
