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

// Function: sub_01D5F1B8
// Address: 0x1d5f1b8 - 0x1d5f1d0
void sub_01D5F1B8_0x1d5f1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5F1B8_0x1d5f1b8");
#endif

    ctx->pc = 0x1d5f1b8u;

    // 0x1d5f1b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5f1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5f1bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5f1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5f1c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5f1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5f1c4: 0x87576fa  j           func_1D5DBE8
    ctx->pc = 0x1D5F1C4u;
    ctx->pc = 0x1D5F1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F1C4u;
    // 0x1d5f1c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DBE8u;
    sub_01D5DBE8_0x1d5dbe8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5F1CCu;
    // 0x1d5f1cc: 0x0  nop
    ctx->pc = 0x1d5f1ccu;
    // NOP
    ctx->pc = 0x1d5f1d0u;
}
