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

// Function: sub_01D0DD60
// Address: 0x1d0dd60 - 0x1d0dd78
void sub_01D0DD60_0x1d0dd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0DD60_0x1d0dd60");
#endif

    ctx->pc = 0x1d0dd60u;

    // 0x1d0dd60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0dd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0dd64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0dd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0dd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0dd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0dd6c: 0x87431f0  j           func_1D0C7C0
    ctx->pc = 0x1D0DD6Cu;
    ctx->pc = 0x1D0DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0DD6Cu;
    // 0x1d0dd70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C7C0u;
    sub_01D0C7C0_0x1d0c7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0DD74u;
    // 0x1d0dd74: 0x0  nop
    ctx->pc = 0x1d0dd74u;
    // NOP
    ctx->pc = 0x1d0dd78u;
}
