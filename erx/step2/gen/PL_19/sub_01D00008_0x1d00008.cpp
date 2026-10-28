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

// Function: sub_01D00008
// Address: 0x1d00008 - 0x1d00020
void sub_01D00008_0x1d00008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D00008_0x1d00008");
#endif

    ctx->pc = 0x1d00008u;

    // 0x1d00008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d00008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0000c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0000cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d00010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d00010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d00014: 0x873ff86  j           func_1CFFE18
    ctx->pc = 0x1D00014u;
    ctx->pc = 0x1D00018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D00014u;
    // 0x1d00018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFE18u;
    sub_01CFFE18_0x1cffe18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0001Cu;
    // 0x1d0001c: 0x0  nop
    ctx->pc = 0x1d0001cu;
    // NOP
    ctx->pc = 0x1d00020u;
}
