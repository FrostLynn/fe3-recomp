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

// Function: sub_01CB9298
// Address: 0x1cb9298 - 0x1cb92b0
void sub_01CB9298_0x1cb9298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9298_0x1cb9298");
#endif

    ctx->pc = 0x1cb9298u;

    // 0x1cb9298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb9298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb929c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb929cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb92a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb92a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb92a4: 0x872dddc  j           func_1CB7770
    ctx->pc = 0x1CB92A4u;
    ctx->pc = 0x1CB92A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB92A4u;
    // 0x1cb92a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7770u;
    sub_01CB7770_0x1cb7770(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB92ACu;
    // 0x1cb92ac: 0x0  nop
    ctx->pc = 0x1cb92acu;
    // NOP
    ctx->pc = 0x1cb92b0u;
}
