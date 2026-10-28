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

// Function: sub_01D0EB48
// Address: 0x1d0eb48 - 0x1d0eb60
void sub_01D0EB48_0x1d0eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EB48_0x1d0eb48");
#endif

    ctx->pc = 0x1d0eb48u;

    // 0x1d0eb48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0eb4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0eb50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0eb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0eb54: 0x8743a36  j           func_1D0E8D8
    ctx->pc = 0x1D0EB54u;
    ctx->pc = 0x1D0EB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0EB54u;
    // 0x1d0eb58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E8D8u;
    sub_01D0E8D8_0x1d0e8d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0EB5Cu;
    // 0x1d0eb5c: 0x0  nop
    ctx->pc = 0x1d0eb5cu;
    // NOP
    ctx->pc = 0x1d0eb60u;
}
