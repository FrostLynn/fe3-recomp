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

// Function: sub_01C52870
// Address: 0x1c52870 - 0x1c52888
void sub_01C52870_0x1c52870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C52870_0x1c52870");
#endif

    ctx->pc = 0x1c52870u;

    // 0x1c52870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c52870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c52874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c52874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c52878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c52878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5287c: 0x8714226  j           func_1C50898
    ctx->pc = 0x1C5287Cu;
    ctx->pc = 0x1C52880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5287Cu;
    // 0x1c52880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C50898u;
    sub_01C50898_0x1c50898(rdram, ctx, runtime); return;
    ctx->pc = 0x1C52884u;
    // 0x1c52884: 0x0  nop
    ctx->pc = 0x1c52884u;
    // NOP
    ctx->pc = 0x1c52888u;
}
