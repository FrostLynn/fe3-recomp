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

// Function: sub_01D35490
// Address: 0x1d35490 - 0x1d354a8
void sub_01D35490_0x1d35490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35490_0x1d35490");
#endif

    ctx->pc = 0x1d35490u;

    // 0x1d35490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d35494: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d35494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3549c: 0x874cfec  j           func_1D33FB0
    ctx->pc = 0x1D3549Cu;
    ctx->pc = 0x1D354A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3549Cu;
    // 0x1d354a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33FB0u;
    sub_01D33FB0_0x1d33fb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D354A4u;
    // 0x1d354a4: 0x0  nop
    ctx->pc = 0x1d354a4u;
    // NOP
    ctx->pc = 0x1d354a8u;
}
