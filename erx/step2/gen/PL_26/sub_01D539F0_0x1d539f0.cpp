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

// Function: sub_01D539F0
// Address: 0x1d539f0 - 0x1d53a10
void sub_01D539F0_0x1d539f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D539F0_0x1d539f0");
#endif

    ctx->pc = 0x1d539f0u;

    // 0x1d539f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d539f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d539f4: 0x3c0501d5  lui         $a1, 0x1D5
    ctx->pc = 0x1d539f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)469 << 16));
    // 0x1d539f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d539f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d539fc: 0x24a55c80  addiu       $a1, $a1, 0x5C80
    ctx->pc = 0x1d539fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23680));
    // 0x1d53a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d53a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53a04: 0x87547be  j           func_1D51EF8
    ctx->pc = 0x1D53A04u;
    ctx->pc = 0x1D53A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53A04u;
    // 0x1d53a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51EF8u;
    sub_01D51EF8_0x1d51ef8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D53A0Cu;
    // 0x1d53a0c: 0x0  nop
    ctx->pc = 0x1d53a0cu;
    // NOP
    ctx->pc = 0x1d53a10u;
}
