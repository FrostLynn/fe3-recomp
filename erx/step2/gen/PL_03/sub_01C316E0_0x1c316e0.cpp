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

// Function: sub_01C316E0
// Address: 0x1c316e0 - 0x1c316f8
void sub_01C316E0_0x1c316e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C316E0_0x1c316e0");
#endif

    ctx->pc = 0x1c316e0u;

    // 0x1c316e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c316e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c316e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c316e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c316e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c316e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c316ec: 0x870c070  j           func_1C301C0
    ctx->pc = 0x1C316ECu;
    ctx->pc = 0x1C316F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C316ECu;
    // 0x1c316f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C301C0u;
    sub_01C301C0_0x1c301c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C316F4u;
    // 0x1c316f4: 0x0  nop
    ctx->pc = 0x1c316f4u;
    // NOP
    ctx->pc = 0x1c316f8u;
}
