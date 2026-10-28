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

// Function: sub_01C21AA0
// Address: 0x1c21aa0 - 0x1c21ab8
void sub_01C21AA0_0x1c21aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21AA0_0x1c21aa0");
#endif

    ctx->pc = 0x1c21aa0u;

    // 0x1c21aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21aa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21aa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21aac: 0x870806c  j           func_1C201B0
    ctx->pc = 0x1C21AACu;
    ctx->pc = 0x1C21AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21AACu;
    // 0x1c21ab0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C201B0u;
    sub_01C201B0_0x1c201b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21AB4u;
    // 0x1c21ab4: 0x0  nop
    ctx->pc = 0x1c21ab4u;
    // NOP
    ctx->pc = 0x1c21ab8u;
}
