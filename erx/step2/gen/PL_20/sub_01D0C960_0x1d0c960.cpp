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

// Function: sub_01D0C960
// Address: 0x1d0c960 - 0x1d0c978
void sub_01D0C960_0x1d0c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0C960_0x1d0c960");
#endif

    ctx->pc = 0x1d0c960u;

    // 0x1d0c960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0c964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0c968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0c968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0c96c: 0x8742f60  j           func_1D0BD80
    ctx->pc = 0x1D0C96Cu;
    ctx->pc = 0x1D0C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0C96Cu;
    // 0x1d0c970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD80u;
    sub_01D0BD80_0x1d0bd80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0C974u;
    // 0x1d0c974: 0x0  nop
    ctx->pc = 0x1d0c974u;
    // NOP
    ctx->pc = 0x1d0c978u;
}
