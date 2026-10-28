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

// Function: sub_01D8AF08
// Address: 0x1d8af08 - 0x1d8af20
void sub_01D8AF08_0x1d8af08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AF08_0x1d8af08");
#endif

    ctx->pc = 0x1d8af08u;

    // 0x1d8af08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8af08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8af0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8af0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8af10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8af10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8af14: 0x876265a  j           func_1D89968
    ctx->pc = 0x1D8AF14u;
    ctx->pc = 0x1D8AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AF14u;
    // 0x1d8af18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89968u;
    sub_01D89968_0x1d89968(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8AF1Cu;
    // 0x1d8af1c: 0x0  nop
    ctx->pc = 0x1d8af1cu;
    // NOP
    ctx->pc = 0x1d8af20u;
}
