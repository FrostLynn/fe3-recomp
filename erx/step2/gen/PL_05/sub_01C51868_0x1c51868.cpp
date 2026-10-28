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

// Function: sub_01C51868
// Address: 0x1c51868 - 0x1c51880
void sub_01C51868_0x1c51868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51868_0x1c51868");
#endif

    ctx->pc = 0x1c51868u;

    // 0x1c51868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c5186c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c5186cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c51870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c51870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51874: 0x87140f4  j           func_1C503D0
    ctx->pc = 0x1C51874u;
    ctx->pc = 0x1C51878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51874u;
    // 0x1c51878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503D0u;
    sub_01C503D0_0x1c503d0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C5187Cu;
    // 0x1c5187c: 0x0  nop
    ctx->pc = 0x1c5187cu;
    // NOP
    ctx->pc = 0x1c51880u;
}
