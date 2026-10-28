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

// Function: sub_01CCFA10
// Address: 0x1ccfa10 - 0x1ccfa28
void sub_01CCFA10_0x1ccfa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFA10_0x1ccfa10");
#endif

    ctx->pc = 0x1ccfa10u;

    // 0x1ccfa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfa14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfa18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfa18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfa1c: 0x8733918  j           func_1CCE460
    ctx->pc = 0x1CCFA1Cu;
    ctx->pc = 0x1CCFA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA1Cu;
    // 0x1ccfa20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE460u;
    sub_01CCE460_0x1cce460(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFA24u;
    // 0x1ccfa24: 0x0  nop
    ctx->pc = 0x1ccfa24u;
    // NOP
    ctx->pc = 0x1ccfa28u;
}
