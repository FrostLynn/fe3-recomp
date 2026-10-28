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

// Function: sub_01D9E8F8
// Address: 0x1d9e8f8 - 0x1d9e910
void sub_01D9E8F8_0x1d9e8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E8F8_0x1d9e8f8");
#endif

    ctx->pc = 0x1d9e8f8u;

    // 0x1d9e8f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9e8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9e900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9e900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e904: 0x8767502  j           func_1D9D408
    ctx->pc = 0x1D9E904u;
    ctx->pc = 0x1D9E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E904u;
    // 0x1d9e908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D408u;
    sub_01D9D408_0x1d9d408(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E90Cu;
    // 0x1d9e90c: 0x0  nop
    ctx->pc = 0x1d9e90cu;
    // NOP
    ctx->pc = 0x1d9e910u;
}
