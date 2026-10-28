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

// Function: sub_01C8F460
// Address: 0x1c8f460 - 0x1c8f478
void sub_01C8F460_0x1c8f460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F460_0x1c8f460");
#endif

    ctx->pc = 0x1c8f460u;

    // 0x1c8f460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8f468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8f468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f46c: 0x8723790  j           func_1C8DE40
    ctx->pc = 0x1C8F46Cu;
    ctx->pc = 0x1C8F470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F46Cu;
    // 0x1c8f470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DE40u;
    sub_01C8DE40_0x1c8de40(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8F474u;
    // 0x1c8f474: 0x0  nop
    ctx->pc = 0x1c8f474u;
    // NOP
    ctx->pc = 0x1c8f478u;
}
