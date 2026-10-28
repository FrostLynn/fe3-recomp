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

// Function: sub_01CDBF58
// Address: 0x1cdbf58 - 0x1cdbf70
void sub_01CDBF58_0x1cdbf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDBF58_0x1cdbf58");
#endif

    ctx->pc = 0x1cdbf58u;

    // 0x1cdbf58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdbf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdbf5c: 0x24050092  addiu       $a1, $zero, 0x92
    ctx->pc = 0x1cdbf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x1cdbf60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdbf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdbf64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdbf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbf68: 0x8736b2e  j           func_1CDACB8
    ctx->pc = 0x1CDBF68u;
    ctx->pc = 0x1CDBF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDBF68u;
    // 0x1cdbf6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDACB8u;
    sub_01CDACB8_0x1cdacb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDBF70u;
}
