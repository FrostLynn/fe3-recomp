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

// Function: sub_01CCE0E0
// Address: 0x1cce0e0 - 0x1cce0f8
void sub_01CCE0E0_0x1cce0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE0E0_0x1cce0e0");
#endif

    ctx->pc = 0x1cce0e0u;

    // 0x1cce0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cce0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cce0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cce0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cce0e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cce0e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce0ec: 0x8733520  j           func_1CCD480
    ctx->pc = 0x1CCE0ECu;
    ctx->pc = 0x1CCE0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE0ECu;
    // 0x1cce0f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD480u;
    sub_01CCD480_0x1ccd480(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCE0F4u;
    // 0x1cce0f4: 0x0  nop
    ctx->pc = 0x1cce0f4u;
    // NOP
    ctx->pc = 0x1cce0f8u;
}
