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

// Function: sub_01D29728
// Address: 0x1d29728 - 0x1d29740
void sub_01D29728_0x1d29728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29728_0x1d29728");
#endif

    ctx->pc = 0x1d29728u;

    // 0x1d29728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2972c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d29730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d29734: 0x8749ed4  j           func_1D27B50
    ctx->pc = 0x1D29734u;
    ctx->pc = 0x1D29738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29734u;
    // 0x1d29738: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B50u;
    sub_01D27B50_0x1d27b50(rdram, ctx, runtime); return;
    ctx->pc = 0x1D2973Cu;
    // 0x1d2973c: 0x0  nop
    ctx->pc = 0x1d2973cu;
    // NOP
    ctx->pc = 0x1d29740u;
}
