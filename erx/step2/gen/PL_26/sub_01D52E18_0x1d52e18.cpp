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

// Function: sub_01D52E18
// Address: 0x1d52e18 - 0x1d52e30
void sub_01D52E18_0x1d52e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D52E18_0x1d52e18");
#endif

    ctx->pc = 0x1d52e18u;

    // 0x1d52e18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d52e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d52e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d52e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d52e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d52e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52e24: 0x8754682  j           func_1D51A08
    ctx->pc = 0x1D52E24u;
    ctx->pc = 0x1D52E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52E24u;
    // 0x1d52e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A08u;
    sub_01D51A08_0x1d51a08(rdram, ctx, runtime); return;
    ctx->pc = 0x1D52E2Cu;
    // 0x1d52e2c: 0x0  nop
    ctx->pc = 0x1d52e2cu;
    // NOP
    ctx->pc = 0x1d52e30u;
}
