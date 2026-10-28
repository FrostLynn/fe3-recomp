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

// Function: sub_01CCFAB0
// Address: 0x1ccfab0 - 0x1ccfac8
void sub_01CCFAB0_0x1ccfab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFAB0_0x1ccfab0");
#endif

    ctx->pc = 0x1ccfab0u;

    // 0x1ccfab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfab8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfabc: 0x8733918  j           func_1CCE460
    ctx->pc = 0x1CCFABCu;
    ctx->pc = 0x1CCFAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFABCu;
    // 0x1ccfac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE460u;
    sub_01CCE460_0x1cce460(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFAC4u;
    // 0x1ccfac4: 0x0  nop
    ctx->pc = 0x1ccfac4u;
    // NOP
    ctx->pc = 0x1ccfac8u;
}
