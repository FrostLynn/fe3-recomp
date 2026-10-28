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

// Function: sub_01D35638
// Address: 0x1d35638 - 0x1d35650
void sub_01D35638_0x1d35638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35638_0x1d35638");
#endif

    ctx->pc = 0x1d35638u;

    // 0x1d35638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3563c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35644: 0x874d0e4  j           func_1D34390
    ctx->pc = 0x1D35644u;
    ctx->pc = 0x1D35648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35644u;
    // 0x1d35648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34390u;
    sub_01D34390_0x1d34390(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3564Cu;
    // 0x1d3564c: 0x0  nop
    ctx->pc = 0x1d3564cu;
    // NOP
    ctx->pc = 0x1d35650u;
}
