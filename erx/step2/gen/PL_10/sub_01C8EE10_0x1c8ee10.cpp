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

// Function: sub_01C8EE10
// Address: 0x1c8ee10 - 0x1c8ee28
void sub_01C8EE10_0x1c8ee10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8EE10_0x1c8ee10");
#endif

    ctx->pc = 0x1c8ee10u;

    // 0x1c8ee10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8ee10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8ee14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8ee18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8ee18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8ee1c: 0x872366c  j           func_1C8D9B0
    ctx->pc = 0x1C8EE1Cu;
    ctx->pc = 0x1C8EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8EE1Cu;
    // 0x1c8ee20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D9B0u;
    sub_01C8D9B0_0x1c8d9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8EE24u;
    // 0x1c8ee24: 0x0  nop
    ctx->pc = 0x1c8ee24u;
    // NOP
    ctx->pc = 0x1c8ee28u;
}
