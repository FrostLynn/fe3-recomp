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

// Function: sub_01CC49F0
// Address: 0x1cc49f0 - 0x1cc4a08
void sub_01CC49F0_0x1cc49f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC49F0_0x1cc49f0");
#endif

    ctx->pc = 0x1cc49f0u;

    // 0x1cc49f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc49f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc49f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc49f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc49fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc49fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4a00: 0x8730bb0  j           func_1CC2EC0
    ctx->pc = 0x1CC4A00u;
    ctx->pc = 0x1CC4A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4A00u;
    // 0x1cc4a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2EC0u;
    sub_01CC2EC0_0x1cc2ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4A08u;
}
