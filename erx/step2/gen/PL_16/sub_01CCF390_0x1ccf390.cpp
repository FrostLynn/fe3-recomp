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

// Function: sub_01CCF390
// Address: 0x1ccf390 - 0x1ccf3a8
void sub_01CCF390_0x1ccf390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF390_0x1ccf390");
#endif

    ctx->pc = 0x1ccf390u;

    // 0x1ccf390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf39c: 0x87337ac  j           func_1CCDEB0
    ctx->pc = 0x1CCF39Cu;
    ctx->pc = 0x1CCF3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF39Cu;
    // 0x1ccf3a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDEB0u;
    sub_01CCDEB0_0x1ccdeb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF3A4u;
    // 0x1ccf3a4: 0x0  nop
    ctx->pc = 0x1ccf3a4u;
    // NOP
    ctx->pc = 0x1ccf3a8u;
}
