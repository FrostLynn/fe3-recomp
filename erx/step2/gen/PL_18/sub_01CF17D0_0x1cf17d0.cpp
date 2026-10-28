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

// Function: sub_01CF17D0
// Address: 0x1cf17d0 - 0x1cf17e8
void sub_01CF17D0_0x1cf17d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF17D0_0x1cf17d0");
#endif

    ctx->pc = 0x1cf17d0u;

    // 0x1cf17d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf17d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf17d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf17d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf17d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf17d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf17dc: 0x873c10c  j           func_1CF0430
    ctx->pc = 0x1CF17DCu;
    ctx->pc = 0x1CF17E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF17DCu;
    // 0x1cf17e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0430u;
    sub_01CF0430_0x1cf0430(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF17E4u;
    // 0x1cf17e4: 0x0  nop
    ctx->pc = 0x1cf17e4u;
    // NOP
    ctx->pc = 0x1cf17e8u;
}
