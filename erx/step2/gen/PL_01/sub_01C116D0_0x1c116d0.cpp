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

// Function: sub_01C116D0
// Address: 0x1c116d0 - 0x1c116e8
void sub_01C116D0_0x1c116d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C116D0_0x1c116d0");
#endif

    ctx->pc = 0x1c116d0u;

    // 0x1c116d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c116d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c116d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c116d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c116d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c116d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c116dc: 0x8704082  j           func_1C10208
    ctx->pc = 0x1C116DCu;
    ctx->pc = 0x1C116E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C116DCu;
    // 0x1c116e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10208u;
    sub_01C10208_0x1c10208(rdram, ctx, runtime); return;
    ctx->pc = 0x1C116E4u;
    // 0x1c116e4: 0x0  nop
    ctx->pc = 0x1c116e4u;
    // NOP
    ctx->pc = 0x1c116e8u;
}
