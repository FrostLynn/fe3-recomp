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

// Function: sub_01D70E00
// Address: 0x1d70e00 - 0x1d70e18
void sub_01D70E00_0x1d70e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70E00_0x1d70e00");
#endif

    ctx->pc = 0x1d70e00u;

    // 0x1d70e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d70e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d70e08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d70e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70e0c: 0x875c016  j           func_1D70058
    ctx->pc = 0x1D70E0Cu;
    ctx->pc = 0x1D70E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70E0Cu;
    // 0x1d70e10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70058u;
    sub_01D70058_0x1d70058(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70E14u;
    // 0x1d70e14: 0x0  nop
    ctx->pc = 0x1d70e14u;
    // NOP
    ctx->pc = 0x1d70e18u;
}
