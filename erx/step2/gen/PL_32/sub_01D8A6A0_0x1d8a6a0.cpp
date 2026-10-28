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

// Function: sub_01D8A6A0
// Address: 0x1d8a6a0 - 0x1d8a6b8
void sub_01D8A6A0_0x1d8a6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A6A0_0x1d8a6a0");
#endif

    ctx->pc = 0x1d8a6a0u;

    // 0x1d8a6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a6a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8a6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8a6a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8a6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a6ac: 0x8762502  j           func_1D89408
    ctx->pc = 0x1D8A6ACu;
    ctx->pc = 0x1D8A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A6ACu;
    // 0x1d8a6b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89408u;
    sub_01D89408_0x1d89408(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A6B4u;
    // 0x1d8a6b4: 0x0  nop
    ctx->pc = 0x1d8a6b4u;
    // NOP
    ctx->pc = 0x1d8a6b8u;
}
