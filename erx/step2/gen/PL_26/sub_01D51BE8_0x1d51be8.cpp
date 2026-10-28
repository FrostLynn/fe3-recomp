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

// Function: sub_01D51BE8
// Address: 0x1d51be8 - 0x1d51c00
void sub_01D51BE8_0x1d51be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D51BE8_0x1d51be8");
#endif

    ctx->pc = 0x1d51be8u;

    // 0x1d51be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d51be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d51bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d51becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d51bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d51bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d51bf4: 0x87543e0  j           func_1D50F80
    ctx->pc = 0x1D51BF4u;
    ctx->pc = 0x1D51BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D51BF4u;
    // 0x1d51bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F80u;
    sub_01D50F80_0x1d50f80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D51BFCu;
    // 0x1d51bfc: 0x0  nop
    ctx->pc = 0x1d51bfcu;
    // NOP
    ctx->pc = 0x1d51c00u;
}
