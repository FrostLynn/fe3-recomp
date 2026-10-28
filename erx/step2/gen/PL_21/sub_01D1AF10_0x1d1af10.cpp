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

// Function: sub_01D1AF10
// Address: 0x1d1af10 - 0x1d1af28
void sub_01D1AF10_0x1d1af10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1AF10_0x1d1af10");
#endif

    ctx->pc = 0x1d1af10u;

    // 0x1d1af10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1af10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1af14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1af14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1af18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1af1c: 0x87466d6  j           func_1D19B58
    ctx->pc = 0x1D1AF1Cu;
    ctx->pc = 0x1D1AF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AF1Cu;
    // 0x1d1af20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B58u;
    sub_01D19B58_0x1d19b58(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1AF24u;
    // 0x1d1af24: 0x0  nop
    ctx->pc = 0x1d1af24u;
    // NOP
    ctx->pc = 0x1d1af28u;
}
