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

// Function: sub_01CDAE68
// Address: 0x1cdae68 - 0x1cdae80
void sub_01CDAE68_0x1cdae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDAE68_0x1cdae68");
#endif

    ctx->pc = 0x1cdae68u;

    // 0x1cdae68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdae6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdae6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdae70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdae70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdae74: 0x87368a0  j           func_1CDA280
    ctx->pc = 0x1CDAE74u;
    ctx->pc = 0x1CDAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDAE74u;
    // 0x1cdae78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA280u;
    sub_01CDA280_0x1cda280(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDAE7Cu;
    // 0x1cdae7c: 0x0  nop
    ctx->pc = 0x1cdae7cu;
    // NOP
    ctx->pc = 0x1cdae80u;
}
