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

// Function: sub_01DA9270
// Address: 0x1da9270 - 0x1da9288
void sub_01DA9270_0x1da9270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA9270_0x1da9270");
#endif

    ctx->pc = 0x1da9270u;

    // 0x1da9270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da9274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da9274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da9278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da9278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da927c: 0x8769f9e  j           func_1DA7E78
    ctx->pc = 0x1DA927Cu;
    ctx->pc = 0x1DA9280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA927Cu;
    // 0x1da9280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA7E78u;
    sub_01DA7E78_0x1da7e78(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA9284u;
    // 0x1da9284: 0x0  nop
    ctx->pc = 0x1da9284u;
    // NOP
    ctx->pc = 0x1da9288u;
}
