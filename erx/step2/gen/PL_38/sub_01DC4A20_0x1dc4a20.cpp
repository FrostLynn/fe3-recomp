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

// Function: sub_01DC4A20
// Address: 0x1dc4a20 - 0x1dc4a38
void sub_01DC4A20_0x1dc4a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4A20_0x1dc4a20");
#endif

    ctx->pc = 0x1dc4a20u;

    // 0x1dc4a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc4a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc4a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4a2c: 0x87710da  j           func_1DC4368
    ctx->pc = 0x1DC4A2Cu;
    ctx->pc = 0x1DC4A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4A2Cu;
    // 0x1dc4a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4368u;
    sub_01DC4368_0x1dc4368(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4A34u;
    // 0x1dc4a34: 0x0  nop
    ctx->pc = 0x1dc4a34u;
    // NOP
    ctx->pc = 0x1dc4a38u;
}
