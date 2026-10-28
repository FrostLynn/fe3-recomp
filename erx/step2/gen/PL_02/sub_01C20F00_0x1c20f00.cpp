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

// Function: sub_01C20F00
// Address: 0x1c20f00 - 0x1c20f18
void sub_01C20F00_0x1c20f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20F00_0x1c20f00");
#endif

    ctx->pc = 0x1c20f00u;

    // 0x1c20f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c20f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c20f08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20f0c: 0x8707c64  j           func_1C1F190
    ctx->pc = 0x1C20F0Cu;
    ctx->pc = 0x1C20F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20F0Cu;
    // 0x1c20f10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F190u;
    sub_01C1F190_0x1c1f190(rdram, ctx, runtime); return;
    ctx->pc = 0x1C20F14u;
    // 0x1c20f14: 0x0  nop
    ctx->pc = 0x1c20f14u;
    // NOP
    ctx->pc = 0x1c20f18u;
}
