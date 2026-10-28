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

// Function: sub_01D7F378
// Address: 0x1d7f378 - 0x1d7f390
void sub_01D7F378_0x1d7f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F378_0x1d7f378");
#endif

    ctx->pc = 0x1d7f378u;

    // 0x1d7f378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7f380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f384: 0x875f5e0  j           func_1D7D780
    ctx->pc = 0x1D7F384u;
    ctx->pc = 0x1D7F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F384u;
    // 0x1d7f388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D780u;
    sub_01D7D780_0x1d7d780(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F38Cu;
    // 0x1d7f38c: 0x0  nop
    ctx->pc = 0x1d7f38cu;
    // NOP
    ctx->pc = 0x1d7f390u;
}
