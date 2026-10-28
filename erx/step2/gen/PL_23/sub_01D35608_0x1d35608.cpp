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

// Function: sub_01D35608
// Address: 0x1d35608 - 0x1d35620
void sub_01D35608_0x1d35608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35608_0x1d35608");
#endif

    ctx->pc = 0x1d35608u;

    // 0x1d35608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3560c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3560cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35614: 0x874d102  j           func_1D34408
    ctx->pc = 0x1D35614u;
    ctx->pc = 0x1D35618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35614u;
    // 0x1d35618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34408u;
    sub_01D34408_0x1d34408(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3561Cu;
    // 0x1d3561c: 0x0  nop
    ctx->pc = 0x1d3561cu;
    // NOP
    ctx->pc = 0x1d35620u;
}
