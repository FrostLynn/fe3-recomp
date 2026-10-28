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

// Function: sub_01CFF080
// Address: 0x1cff080 - 0x1cff098
void sub_01CFF080_0x1cff080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFF080_0x1cff080");
#endif

    ctx->pc = 0x1cff080u;

    // 0x1cff080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cff080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cff084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cff084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cff088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cff088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cff08c: 0x873f734  j           func_1CFDCD0
    ctx->pc = 0x1CFF08Cu;
    ctx->pc = 0x1CFF090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFF08Cu;
    // 0x1cff090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFDCD0u;
    sub_01CFDCD0_0x1cfdcd0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFF094u;
    // 0x1cff094: 0x0  nop
    ctx->pc = 0x1cff094u;
    // NOP
    ctx->pc = 0x1cff098u;
}
