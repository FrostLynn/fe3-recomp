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

// Function: sub_01C51880
// Address: 0x1c51880 - 0x1c51898
void sub_01C51880_0x1c51880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51880_0x1c51880");
#endif

    ctx->pc = 0x1c51880u;

    // 0x1c51880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c51884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c51888: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c51888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5188c: 0x8714118  j           func_1C50460
    ctx->pc = 0x1C5188Cu;
    ctx->pc = 0x1C51890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5188Cu;
    // 0x1c51890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50460u;
    sub_01C50460_0x1c50460(rdram, ctx, runtime); return;
    ctx->pc = 0x1C51894u;
    // 0x1c51894: 0x0  nop
    ctx->pc = 0x1c51894u;
    // NOP
    ctx->pc = 0x1c51898u;
}
