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

// Function: sub_01D29740
// Address: 0x1d29740 - 0x1d29758
void sub_01D29740_0x1d29740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29740_0x1d29740");
#endif

    ctx->pc = 0x1d29740u;

    // 0x1d29740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d29744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d29744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d29748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2974c: 0x8749f22  j           func_1D27C88
    ctx->pc = 0x1D2974Cu;
    ctx->pc = 0x1D29750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2974Cu;
    // 0x1d29750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27C88u;
    sub_01D27C88_0x1d27c88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D29754u;
    // 0x1d29754: 0x0  nop
    ctx->pc = 0x1d29754u;
    // NOP
    ctx->pc = 0x1d29758u;
}
