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

// Function: sub_01C31F78
// Address: 0x1c31f78 - 0x1c31f90
void sub_01C31F78_0x1c31f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31F78_0x1c31f78");
#endif

    ctx->pc = 0x1c31f78u;

    // 0x1c31f78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31f7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31f84: 0x870c1de  j           func_1C30778
    ctx->pc = 0x1C31F84u;
    ctx->pc = 0x1C31F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31F84u;
    // 0x1c31f88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C30778u;
    sub_01C30778_0x1c30778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31F8Cu;
    // 0x1c31f8c: 0x0  nop
    ctx->pc = 0x1c31f8cu;
    // NOP
    ctx->pc = 0x1c31f90u;
}
