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

// Function: sub_01CFFA70
// Address: 0x1cffa70 - 0x1cffa88
void sub_01CFFA70_0x1cffa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFFA70_0x1cffa70");
#endif

    ctx->pc = 0x1cffa70u;

    // 0x1cffa70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cffa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cffa74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cffa74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cffa78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cffa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cffa7c: 0x873f8ae  j           func_1CFE2B8
    ctx->pc = 0x1CFFA7Cu;
    ctx->pc = 0x1CFFA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFFA7Cu;
    // 0x1cffa80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFE2B8u;
    sub_01CFE2B8_0x1cfe2b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFFA84u;
    // 0x1cffa84: 0x0  nop
    ctx->pc = 0x1cffa84u;
    // NOP
    ctx->pc = 0x1cffa88u;
}
