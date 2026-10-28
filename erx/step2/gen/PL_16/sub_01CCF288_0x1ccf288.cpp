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

// Function: sub_01CCF288
// Address: 0x1ccf288 - 0x1ccf2a0
void sub_01CCF288_0x1ccf288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF288_0x1ccf288");
#endif

    ctx->pc = 0x1ccf288u;

    // 0x1ccf288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf290: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf294: 0x8733520  j           func_1CCD480
    ctx->pc = 0x1CCF294u;
    ctx->pc = 0x1CCF298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF294u;
    // 0x1ccf298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD480u;
    sub_01CCD480_0x1ccd480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCF29Cu;
    // 0x1ccf29c: 0x0  nop
    ctx->pc = 0x1ccf29cu;
    // NOP
    ctx->pc = 0x1ccf2a0u;
}
