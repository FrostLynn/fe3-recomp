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

// Function: sub_01CFFEE0
// Address: 0x1cffee0 - 0x1cffef8
void sub_01CFFEE0_0x1cffee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFEE0_0x1cffee0");
#endif

    ctx->pc = 0x1cffee0u;

    // 0x1cffee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffeec: 0x873ff7c  j           func_1CFFDF0
    ctx->pc = 0x1CFFEECu;
    ctx->pc = 0x1CFFEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFEECu;
    // 0x1cffef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFFDF0u;
    sub_01CFFDF0_0x1cffdf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFEF4u;
    // 0x1cffef4: 0x0  nop
    ctx->pc = 0x1cffef4u;
    // NOP
    ctx->pc = 0x1cffef8u;
}
