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

// Function: sub_01D48410
// Address: 0x1d48410 - 0x1d48428
void sub_01D48410_0x1d48410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48410_0x1d48410");
#endif

    ctx->pc = 0x1d48410u;

    // 0x1d48410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d48414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d48414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d48418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d48418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4841c: 0x8751b0e  j           func_1D46C38
    ctx->pc = 0x1D4841Cu;
    ctx->pc = 0x1D48420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4841Cu;
    // 0x1d48420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46C38u;
    sub_01D46C38_0x1d46c38(rdram, ctx, runtime); return;
    ctx->pc = 0x1D48424u;
    // 0x1d48424: 0x0  nop
    ctx->pc = 0x1d48424u;
    // NOP
    ctx->pc = 0x1d48428u;
}
