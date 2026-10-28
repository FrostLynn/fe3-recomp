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

// Function: sub_01D1B768
// Address: 0x1d1b768 - 0x1d1b780
void sub_01D1B768_0x1d1b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B768_0x1d1b768");
#endif

    ctx->pc = 0x1d1b768u;

    // 0x1d1b768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b76c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b770: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b774: 0x87467e2  j           func_1D19F88
    ctx->pc = 0x1D1B774u;
    ctx->pc = 0x1D1B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B774u;
    // 0x1d1b778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19F88u;
    sub_01D19F88_0x1d19f88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1B77Cu;
    // 0x1d1b77c: 0x0  nop
    ctx->pc = 0x1d1b77cu;
    // NOP
    ctx->pc = 0x1d1b780u;
}
