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

// Function: sub_01D35528
// Address: 0x1d35528 - 0x1d35540
void sub_01D35528_0x1d35528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35528_0x1d35528");
#endif

    ctx->pc = 0x1d35528u;

    // 0x1d35528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3552c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3552cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35534: 0x874d080  j           func_1D34200
    ctx->pc = 0x1D35534u;
    ctx->pc = 0x1D35538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35534u;
    // 0x1d35538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34200u;
    sub_01D34200_0x1d34200(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3553Cu;
    // 0x1d3553c: 0x0  nop
    ctx->pc = 0x1d3553cu;
    // NOP
    ctx->pc = 0x1d35540u;
}
