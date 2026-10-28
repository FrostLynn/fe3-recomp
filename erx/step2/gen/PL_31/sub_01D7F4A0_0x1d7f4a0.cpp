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

// Function: sub_01D7F4A0
// Address: 0x1d7f4a0 - 0x1d7f4b8
void sub_01D7F4A0_0x1d7f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F4A0_0x1d7f4a0");
#endif

    ctx->pc = 0x1d7f4a0u;

    // 0x1d7f4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7f4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f4ac: 0x875f5e0  j           func_1D7D780
    ctx->pc = 0x1D7F4ACu;
    ctx->pc = 0x1D7F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F4ACu;
    // 0x1d7f4b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D780u;
    sub_01D7D780_0x1d7d780(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F4B4u;
    // 0x1d7f4b4: 0x0  nop
    ctx->pc = 0x1d7f4b4u;
    // NOP
    ctx->pc = 0x1d7f4b8u;
}
