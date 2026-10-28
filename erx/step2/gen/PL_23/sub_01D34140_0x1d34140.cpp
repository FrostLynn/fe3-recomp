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

// Function: sub_01D34140
// Address: 0x1d34140 - 0x1d34158
void sub_01D34140_0x1d34140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34140_0x1d34140");
#endif

    ctx->pc = 0x1d34140u;

    // 0x1d34140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d34140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d34144: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d34144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d34148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d34148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3414c: 0x874cd60  j           func_1D33580
    ctx->pc = 0x1D3414Cu;
    ctx->pc = 0x1D34150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3414Cu;
    // 0x1d34150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33580u;
    sub_01D33580_0x1d33580(rdram, ctx, runtime); return;
    ctx->pc = 0x1D34154u;
    // 0x1d34154: 0x0  nop
    ctx->pc = 0x1d34154u;
    // NOP
    ctx->pc = 0x1d34158u;
}
