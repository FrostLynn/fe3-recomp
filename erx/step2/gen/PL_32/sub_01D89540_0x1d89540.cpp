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

// Function: sub_01D89540
// Address: 0x1d89540 - 0x1d89558
void sub_01D89540_0x1d89540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D89540_0x1d89540");
#endif

    ctx->pc = 0x1d89540u;

    // 0x1d89540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d89540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d89544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d89544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d89548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d89548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8954c: 0x8762260  j           func_1D88980
    ctx->pc = 0x1D8954Cu;
    ctx->pc = 0x1D89550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8954Cu;
    // 0x1d89550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88980u;
    sub_01D88980_0x1d88980(rdram, ctx, runtime); return;
    ctx->pc = 0x1D89554u;
    // 0x1d89554: 0x0  nop
    ctx->pc = 0x1d89554u;
    // NOP
    ctx->pc = 0x1d89558u;
}
