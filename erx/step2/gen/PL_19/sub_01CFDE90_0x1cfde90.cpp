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

// Function: sub_01CFDE90
// Address: 0x1cfde90 - 0x1cfdea8
void sub_01CFDE90_0x1cfde90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDE90_0x1cfde90");
#endif

    ctx->pc = 0x1cfde90u;

    // 0x1cfde90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfde90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfde94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfde94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfde98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfde98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfde9c: 0x873f4a4  j           func_1CFD290
    ctx->pc = 0x1CFDE9Cu;
    ctx->pc = 0x1CFDEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDE9Cu;
    // 0x1cfdea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD290u;
    sub_01CFD290_0x1cfd290(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFDEA4u;
    // 0x1cfdea4: 0x0  nop
    ctx->pc = 0x1cfdea4u;
    // NOP
    ctx->pc = 0x1cfdea8u;
}
