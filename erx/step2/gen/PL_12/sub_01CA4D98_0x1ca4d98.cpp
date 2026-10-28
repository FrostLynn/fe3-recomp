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

// Function: sub_01CA4D98
// Address: 0x1ca4d98 - 0x1ca4db0
void sub_01CA4D98_0x1ca4d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4D98_0x1ca4d98");
#endif

    ctx->pc = 0x1ca4d98u;

    // 0x1ca4d98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca4d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca4da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4da4: 0x8728d94  j           func_1CA3650
    ctx->pc = 0x1CA4DA4u;
    ctx->pc = 0x1CA4DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4DA4u;
    // 0x1ca4da8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3650u;
    sub_01CA3650_0x1ca3650(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4DACu;
    // 0x1ca4dac: 0x0  nop
    ctx->pc = 0x1ca4dacu;
    // NOP
    ctx->pc = 0x1ca4db0u;
}
