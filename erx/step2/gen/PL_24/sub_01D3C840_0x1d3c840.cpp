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

// Function: sub_01D3C840
// Address: 0x1d3c840 - 0x1d3c858
void sub_01D3C840_0x1d3c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3C840_0x1d3c840");
#endif

    ctx->pc = 0x1d3c840u;

    // 0x1d3c840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3c844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3c844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3c848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3c848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3c84c: 0x874ef20  j           func_1D3BC80
    ctx->pc = 0x1D3C84Cu;
    ctx->pc = 0x1D3C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3C84Cu;
    // 0x1d3c850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BC80u;
    sub_01D3BC80_0x1d3bc80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3C854u;
    // 0x1d3c854: 0x0  nop
    ctx->pc = 0x1d3c854u;
    // NOP
    ctx->pc = 0x1d3c858u;
}
