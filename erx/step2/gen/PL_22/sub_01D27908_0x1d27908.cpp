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

// Function: sub_01D27908
// Address: 0x1d27908 - 0x1d27920
void sub_01D27908_0x1d27908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27908_0x1d27908");
#endif

    ctx->pc = 0x1d27908u;

    // 0x1d27908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2790c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2790cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d27910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d27910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27914: 0x8749b24  j           func_1D26C90
    ctx->pc = 0x1D27914u;
    ctx->pc = 0x1D27918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27914u;
    // 0x1d27918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C90u;
    sub_01D26C90_0x1d26c90(rdram, ctx, runtime); return;
    ctx->pc = 0x1D2791Cu;
    // 0x1d2791c: 0x0  nop
    ctx->pc = 0x1d2791cu;
    // NOP
    ctx->pc = 0x1d27920u;
}
