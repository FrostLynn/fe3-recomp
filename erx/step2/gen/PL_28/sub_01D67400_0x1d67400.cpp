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

// Function: sub_01D67400
// Address: 0x1d67400 - 0x1d67418
void sub_01D67400_0x1d67400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67400_0x1d67400");
#endif

    ctx->pc = 0x1d67400u;

    // 0x1d67400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d67404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d67408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d67408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6740c: 0x87599d6  j           func_1D66758
    ctx->pc = 0x1D6740Cu;
    ctx->pc = 0x1D67410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6740Cu;
    // 0x1d67410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66758u;
    sub_01D66758_0x1d66758(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67414u;
    // 0x1d67414: 0x0  nop
    ctx->pc = 0x1d67414u;
    // NOP
    ctx->pc = 0x1d67418u;
}
