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

// Function: sub_01D3DB00
// Address: 0x1d3db00 - 0x1d3db18
void sub_01D3DB00_0x1d3db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D3DB00_0x1d3db00");
#endif

    ctx->pc = 0x1d3db00u;

    // 0x1d3db00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d3db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3db04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3db08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3db08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3db0c: 0x874f1ac  j           func_1D3C6B0
    ctx->pc = 0x1D3DB0Cu;
    ctx->pc = 0x1D3DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3DB0Cu;
    // 0x1d3db10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C6B0u;
    sub_01D3C6B0_0x1d3c6b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3DB14u;
    // 0x1d3db14: 0x0  nop
    ctx->pc = 0x1d3db14u;
    // NOP
    ctx->pc = 0x1d3db18u;
}
