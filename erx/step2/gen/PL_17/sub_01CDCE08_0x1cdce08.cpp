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

// Function: sub_01CDCE08
// Address: 0x1cdce08 - 0x1cdce20
void sub_01CDCE08_0x1cdce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCE08_0x1cdce08");
#endif

    ctx->pc = 0x1cdce08u;

    // 0x1cdce08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdce08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdce0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdce10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdce10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdce14: 0x8736ca4  j           func_1CDB290
    ctx->pc = 0x1CDCE14u;
    ctx->pc = 0x1CDCE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE14u;
    // 0x1cdce18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB290u;
    sub_01CDB290_0x1cdb290(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCE1Cu;
    // 0x1cdce1c: 0x0  nop
    ctx->pc = 0x1cdce1cu;
    // NOP
    ctx->pc = 0x1cdce20u;
}
