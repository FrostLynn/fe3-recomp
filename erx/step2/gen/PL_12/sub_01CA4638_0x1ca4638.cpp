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

// Function: sub_01CA4638
// Address: 0x1ca4638 - 0x1ca4650
void sub_01CA4638_0x1ca4638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4638_0x1ca4638");
#endif

    ctx->pc = 0x1ca4638u;

    // 0x1ca4638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca463c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca463cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca4640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca4640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4644: 0x8728c8a  j           func_1CA3228
    ctx->pc = 0x1CA4644u;
    ctx->pc = 0x1CA4648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4644u;
    // 0x1ca4648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA3228u;
    sub_01CA3228_0x1ca3228(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA464Cu;
    // 0x1ca464c: 0x0  nop
    ctx->pc = 0x1ca464cu;
    // NOP
    ctx->pc = 0x1ca4650u;
}
