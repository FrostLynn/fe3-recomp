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

// Function: sub_01C8EE28
// Address: 0x1c8ee28 - 0x1c8ee40
void sub_01C8EE28_0x1c8ee28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EE28_0x1c8ee28");
#endif

    ctx->pc = 0x1c8ee28u;

    // 0x1c8ee28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ee28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8ee2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8ee2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8ee30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8ee30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ee34: 0x8723686  j           func_1C8DA18
    ctx->pc = 0x1C8EE34u;
    ctx->pc = 0x1C8EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE34u;
    // 0x1c8ee38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8DA18u;
    sub_01C8DA18_0x1c8da18(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8EE3Cu;
    // 0x1c8ee3c: 0x0  nop
    ctx->pc = 0x1c8ee3cu;
    // NOP
    ctx->pc = 0x1c8ee40u;
}
