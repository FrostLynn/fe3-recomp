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

// Function: sub_01C43070
// Address: 0x1c43070 - 0x1c43088
void sub_01C43070_0x1c43070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43070_0x1c43070");
#endif

    ctx->pc = 0x1c43070u;

    // 0x1c43070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c43074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c43074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c43078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c43078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4307c: 0x8710920  j           func_1C42480
    ctx->pc = 0x1C4307Cu;
    ctx->pc = 0x1C43080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4307Cu;
    // 0x1c43080: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42480u;
    sub_01C42480_0x1c42480(rdram, ctx, runtime); return;
    ctx->pc = 0x1C43084u;
    // 0x1c43084: 0x0  nop
    ctx->pc = 0x1c43084u;
    // NOP
    ctx->pc = 0x1c43088u;
}
