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

// Function: sub_01C31F60
// Address: 0x1c31f60 - 0x1c31f78
void sub_01C31F60_0x1c31f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31F60_0x1c31f60");
#endif

    ctx->pc = 0x1c31f60u;

    // 0x1c31f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31f6c: 0x870c190  j           func_1C30640
    ctx->pc = 0x1C31F6Cu;
    ctx->pc = 0x1C31F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F6Cu;
    // 0x1c31f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30640u;
    sub_01C30640_0x1c30640(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31F74u;
    // 0x1c31f74: 0x0  nop
    ctx->pc = 0x1c31f74u;
    // NOP
    ctx->pc = 0x1c31f78u;
}
