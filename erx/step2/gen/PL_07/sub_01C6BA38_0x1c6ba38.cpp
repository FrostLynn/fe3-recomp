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

// Function: sub_01C6BA38
// Address: 0x1c6ba38 - 0x1c6ba50
void sub_01C6BA38_0x1c6ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BA38_0x1c6ba38");
#endif

    ctx->pc = 0x1c6ba38u;

    // 0x1c6ba38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6ba38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6ba3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6ba40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6ba40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6ba44: 0x871a7a2  j           func_1C69E88
    ctx->pc = 0x1C6BA44u;
    ctx->pc = 0x1C6BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BA44u;
    // 0x1c6ba48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E88u;
    sub_01C69E88_0x1c69e88(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BA4Cu;
    // 0x1c6ba4c: 0x0  nop
    ctx->pc = 0x1c6ba4cu;
    // NOP
    ctx->pc = 0x1c6ba50u;
}
