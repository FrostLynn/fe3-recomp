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

// Function: sub_01D1AC38
// Address: 0x1d1ac38 - 0x1d1ac50
void sub_01D1AC38_0x1d1ac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1AC38_0x1d1ac38");
#endif

    ctx->pc = 0x1d1ac38u;

    // 0x1d1ac38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1ac3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1ac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1ac40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1ac40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1ac44: 0x8746424  j           func_1D19090
    ctx->pc = 0x1D1AC44u;
    ctx->pc = 0x1D1AC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1AC44u;
    // 0x1d1ac48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19090u;
    sub_01D19090_0x1d19090(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1AC4Cu;
    // 0x1d1ac4c: 0x0  nop
    ctx->pc = 0x1d1ac4cu;
    // NOP
    ctx->pc = 0x1d1ac50u;
}
