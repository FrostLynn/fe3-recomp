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

// Function: sub_01C022E8
// Address: 0x1c022e8 - 0x1c02300
void sub_01C022E8_0x1c022e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C022E8_0x1c022e8");
#endif

    ctx->pc = 0x1c022e8u;

    // 0x1c022e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c022e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c022ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c022ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c022f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c022f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c022f4: 0x8700422  j           func_1C01088
    ctx->pc = 0x1C022F4u;
    ctx->pc = 0x1C022F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C022F4u;
    // 0x1c022f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01088u;
    sub_01C01088_0x1c01088(rdram, ctx, runtime); return;
    ctx->pc = 0x1C022FCu;
    // 0x1c022fc: 0x0  nop
    ctx->pc = 0x1c022fcu;
    // NOP
    ctx->pc = 0x1c02300u;
}
