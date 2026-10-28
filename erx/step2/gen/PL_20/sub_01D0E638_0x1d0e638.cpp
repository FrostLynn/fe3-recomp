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

// Function: sub_01D0E638
// Address: 0x1d0e638 - 0x1d0e650
void sub_01D0E638_0x1d0e638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E638_0x1d0e638");
#endif

    ctx->pc = 0x1d0e638u;

    // 0x1d0e638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e644: 0x8743314  j           func_1D0CC50
    ctx->pc = 0x1D0E644u;
    ctx->pc = 0x1D0E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E644u;
    // 0x1d0e648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CC50u;
    sub_01D0CC50_0x1d0cc50(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E64Cu;
    // 0x1d0e64c: 0x0  nop
    ctx->pc = 0x1d0e64cu;
    // NOP
    ctx->pc = 0x1d0e650u;
}
