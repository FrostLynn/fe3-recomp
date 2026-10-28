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

// Function: sub_01D51B40
// Address: 0x1d51b40 - 0x1d51b58
void sub_01D51B40_0x1d51b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51B40_0x1d51b40");
#endif

    ctx->pc = 0x1d51b40u;

    // 0x1d51b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d51b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d51b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d51b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d51b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d51b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51b4c: 0x87543e0  j           func_1D50F80
    ctx->pc = 0x1D51B4Cu;
    ctx->pc = 0x1D51B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51B4Cu;
    // 0x1d51b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F80u;
    sub_01D50F80_0x1d50f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D51B54u;
    // 0x1d51b54: 0x0  nop
    ctx->pc = 0x1d51b54u;
    // NOP
    ctx->pc = 0x1d51b58u;
}
