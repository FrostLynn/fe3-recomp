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

// Function: sub_01D469F0
// Address: 0x1d469f0 - 0x1d46a08
void sub_01D469F0_0x1d469f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D469F0_0x1d469f0");
#endif

    ctx->pc = 0x1d469f0u;

    // 0x1d469f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d469f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d469f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d469f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d469f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d469f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d469fc: 0x8751760  j           func_1D45D80
    ctx->pc = 0x1D469FCu;
    ctx->pc = 0x1D46A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D469FCu;
    // 0x1d46a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D80u;
    sub_01D45D80_0x1d45d80(rdram, ctx, runtime); return;
    ctx->pc = 0x1D46A04u;
    // 0x1d46a04: 0x0  nop
    ctx->pc = 0x1d46a04u;
    // NOP
    ctx->pc = 0x1d46a08u;
}
