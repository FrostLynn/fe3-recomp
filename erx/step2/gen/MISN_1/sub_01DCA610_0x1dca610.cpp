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

// Function: sub_01DCA610
// Address: 0x1dca610 - 0x1dca638
void sub_01DCA610_0x1dca610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCA610_0x1dca610");
#endif

    ctx->pc = 0x1dca610u;

    // 0x1dca610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dca610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dca614: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dca614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dca618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dca618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dca61c: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dca61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dca620: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dca620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dca624: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dca624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dca628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dca628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dca62c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dca62cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dca630: 0x87728d6  j           func_1DCA358
    ctx->pc = 0x1DCA630u;
    ctx->pc = 0x1DCA634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCA630u;
    // 0x1dca634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA358u;
    sub_01DCA358_0x1dca358(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCA638u;
}
