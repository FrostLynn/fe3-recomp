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

// Function: sub_01D48428
// Address: 0x1d48428 - 0x1d48440
void sub_01D48428_0x1d48428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48428_0x1d48428");
#endif

    ctx->pc = 0x1d48428u;

    // 0x1d48428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4842c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4842cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d48430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d48430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48434: 0x8751b5c  j           func_1D46D70
    ctx->pc = 0x1D48434u;
    ctx->pc = 0x1D48438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48434u;
    // 0x1d48438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46D70u;
    sub_01D46D70_0x1d46d70(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4843Cu;
    // 0x1d4843c: 0x0  nop
    ctx->pc = 0x1d4843cu;
    // NOP
    ctx->pc = 0x1d48440u;
}
