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

// Function: sub_01D70F58
// Address: 0x1d70f58 - 0x1d70f70
void sub_01D70F58_0x1d70f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70F58_0x1d70f58");
#endif

    ctx->pc = 0x1d70f58u;

    // 0x1d70f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d70f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d70f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d70f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70f64: 0x875c29c  j           func_1D70A70
    ctx->pc = 0x1D70F64u;
    ctx->pc = 0x1D70F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70F64u;
    // 0x1d70f68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70A70u;
    sub_01D70A70_0x1d70a70(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70F6Cu;
    // 0x1d70f6c: 0x0  nop
    ctx->pc = 0x1d70f6cu;
    // NOP
    ctx->pc = 0x1d70f70u;
}
