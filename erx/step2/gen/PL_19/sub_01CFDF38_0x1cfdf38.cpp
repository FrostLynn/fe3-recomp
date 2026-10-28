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

// Function: sub_01CFDF38
// Address: 0x1cfdf38 - 0x1cfdf50
void sub_01CFDF38_0x1cfdf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CFDF38_0x1cfdf38");
#endif

    ctx->pc = 0x1cfdf38u;

    // 0x1cfdf38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfdf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfdf3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfdf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfdf40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfdf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfdf44: 0x873f4a4  j           func_1CFD290
    ctx->pc = 0x1CFDF44u;
    ctx->pc = 0x1CFDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFDF44u;
    // 0x1cfdf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFD290u;
    sub_01CFD290_0x1cfd290(rdram, ctx, runtime); return;
    ctx->pc = 0x1CFDF4Cu;
    // 0x1cfdf4c: 0x0  nop
    ctx->pc = 0x1cfdf4cu;
    // NOP
    ctx->pc = 0x1cfdf50u;
}
