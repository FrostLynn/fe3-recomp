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

// Function: sub_01D9E8C8
// Address: 0x1d9e8c8 - 0x1d9e8e0
void sub_01D9E8C8_0x1d9e8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E8C8_0x1d9e8c8");
#endif

    ctx->pc = 0x1d9e8c8u;

    // 0x1d9e8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e8cc: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x1d9e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x1d9e8d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9e8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9e8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9e8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e8d8: 0x87674ec  j           func_1D9D3B0
    ctx->pc = 0x1D9E8D8u;
    ctx->pc = 0x1D9E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E8D8u;
    // 0x1d9e8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D3B0u;
    sub_01D9D3B0_0x1d9d3b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E8E0u;
}
