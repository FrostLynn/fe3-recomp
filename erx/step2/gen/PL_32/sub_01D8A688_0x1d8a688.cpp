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

// Function: sub_01D8A688
// Address: 0x1d8a688 - 0x1d8a6a0
void sub_01D8A688_0x1d8a688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A688_0x1d8a688");
#endif

    ctx->pc = 0x1d8a688u;

    // 0x1d8a688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a68c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8a68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8a690: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8a690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a694: 0x87624ee  j           func_1D893B8
    ctx->pc = 0x1D8A694u;
    ctx->pc = 0x1D8A698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A694u;
    // 0x1d8a698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D893B8u;
    sub_01D893B8_0x1d893b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A69Cu;
    // 0x1d8a69c: 0x0  nop
    ctx->pc = 0x1d8a69cu;
    // NOP
    ctx->pc = 0x1d8a6a0u;
}
