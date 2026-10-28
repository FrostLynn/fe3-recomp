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

// Function: sub_01C6C410
// Address: 0x1c6c410 - 0x1c6c428
void sub_01C6C410_0x1c6c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6C410_0x1c6c410");
#endif

    ctx->pc = 0x1c6c410u;

    // 0x1c6c410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6c414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6c414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6c418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6c418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6c41c: 0x871aba0  j           func_1C6AE80
    ctx->pc = 0x1C6C41Cu;
    ctx->pc = 0x1C6C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6C41Cu;
    // 0x1c6c420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6AE80u;
    sub_01C6AE80_0x1c6ae80(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6C424u;
    // 0x1c6c424: 0x0  nop
    ctx->pc = 0x1c6c424u;
    // NOP
    ctx->pc = 0x1c6c428u;
}
