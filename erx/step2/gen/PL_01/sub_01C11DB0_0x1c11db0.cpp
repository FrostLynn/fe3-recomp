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

// Function: sub_01C11DB0
// Address: 0x1c11db0 - 0x1c11dc8
void sub_01C11DB0_0x1c11db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11DB0_0x1c11db0");
#endif

    ctx->pc = 0x1c11db0u;

    // 0x1c11db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11db8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11dbc: 0x870418c  j           func_1C10630
    ctx->pc = 0x1C11DBCu;
    ctx->pc = 0x1C11DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11DBCu;
    // 0x1c11dc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10630u;
    sub_01C10630_0x1c10630(rdram, ctx, runtime); return;
    ctx->pc = 0x1C11DC4u;
    // 0x1c11dc4: 0x0  nop
    ctx->pc = 0x1c11dc4u;
    // NOP
    ctx->pc = 0x1c11dc8u;
}
