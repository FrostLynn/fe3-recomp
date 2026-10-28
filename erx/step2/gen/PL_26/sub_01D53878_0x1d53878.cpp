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

// Function: sub_01D53878
// Address: 0x1d53878 - 0x1d538a8
void sub_01D53878_0x1d53878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53878_0x1d53878");
#endif

    ctx->pc = 0x1d53878u;

    // 0x1d53878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5387c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d53880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d53884: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d53884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d53888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d53888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5388c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5388cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d53890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53894: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d53894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d53898: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d53898u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5389c: 0x87543e2  j           func_1D50F88
    ctx->pc = 0x1D5389Cu;
    ctx->pc = 0x1D538A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5389Cu;
    // 0x1d538a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F88u;
    sub_01D50F88_0x1d50f88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D538A4u;
    // 0x1d538a4: 0x0  nop
    ctx->pc = 0x1d538a4u;
    // NOP
    ctx->pc = 0x1d538a8u;
}
