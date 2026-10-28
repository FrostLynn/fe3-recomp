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

// Function: sub_01CCFC20
// Address: 0x1ccfc20 - 0x1ccfc38
void sub_01CCFC20_0x1ccfc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFC20_0x1ccfc20");
#endif

    ctx->pc = 0x1ccfc20u;

    // 0x1ccfc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfc24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfc28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfc28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfc2c: 0x8733918  j           func_1CCE460
    ctx->pc = 0x1CCFC2Cu;
    ctx->pc = 0x1CCFC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFC2Cu;
    // 0x1ccfc30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE460u;
    sub_01CCE460_0x1cce460(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFC34u;
    // 0x1ccfc34: 0x0  nop
    ctx->pc = 0x1ccfc34u;
    // NOP
    ctx->pc = 0x1ccfc38u;
}
