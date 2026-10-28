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

// Function: sub_01C31F28
// Address: 0x1c31f28 - 0x1c31f40
void sub_01C31F28_0x1c31f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31F28_0x1c31f28");
#endif

    ctx->pc = 0x1c31f28u;

    // 0x1c31f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31f30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31f34: 0x870c1de  j           func_1C30778
    ctx->pc = 0x1C31F34u;
    ctx->pc = 0x1C31F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F34u;
    // 0x1c31f38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30778u;
    sub_01C30778_0x1c30778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31F3Cu;
    // 0x1c31f3c: 0x0  nop
    ctx->pc = 0x1c31f3cu;
    // NOP
    ctx->pc = 0x1c31f40u;
}
