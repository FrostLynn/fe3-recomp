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

// Function: sub_01D9D5E8
// Address: 0x1d9d5e8 - 0x1d9d600
void sub_01D9D5E8_0x1d9d5e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D5E8_0x1d9d5e8");
#endif

    ctx->pc = 0x1d9d5e8u;

    // 0x1d9d5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9d5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9d5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d5f4: 0x8767260  j           func_1D9C980
    ctx->pc = 0x1D9D5F4u;
    ctx->pc = 0x1D9D5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D5F4u;
    // 0x1d9d5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C980u;
    sub_01D9C980_0x1d9c980(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D5FCu;
    // 0x1d9d5fc: 0x0  nop
    ctx->pc = 0x1d9d5fcu;
    // NOP
    ctx->pc = 0x1d9d600u;
}
