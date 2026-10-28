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

// Function: sub_01C78748
// Address: 0x1c78748 - 0x1c78760
void sub_01C78748_0x1c78748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78748_0x1c78748");
#endif

    ctx->pc = 0x1c78748u;

    // 0x1c78748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7874c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c78750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c78750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78754: 0x871e0d6  j           func_1C78358
    ctx->pc = 0x1C78754u;
    ctx->pc = 0x1C78758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78754u;
    // 0x1c78758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C78358u;
    sub_01C78358_0x1c78358(rdram, ctx, runtime); return;
    ctx->pc = 0x1C7875Cu;
    // 0x1c7875c: 0x0  nop
    ctx->pc = 0x1c7875cu;
    // NOP
    ctx->pc = 0x1c78760u;
}
