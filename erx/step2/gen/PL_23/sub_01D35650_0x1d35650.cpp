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

// Function: sub_01D35650
// Address: 0x1d35650 - 0x1d35668
void sub_01D35650_0x1d35650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35650_0x1d35650");
#endif

    ctx->pc = 0x1d35650u;

    // 0x1d35650: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d35654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d35654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3565c: 0x874d102  j           func_1D34408
    ctx->pc = 0x1D3565Cu;
    ctx->pc = 0x1D35660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3565Cu;
    // 0x1d35660: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34408u;
    sub_01D34408_0x1d34408(rdram, ctx, runtime); return;
    ctx->pc = 0x1D35664u;
    // 0x1d35664: 0x0  nop
    ctx->pc = 0x1d35664u;
    // NOP
    ctx->pc = 0x1d35668u;
}
