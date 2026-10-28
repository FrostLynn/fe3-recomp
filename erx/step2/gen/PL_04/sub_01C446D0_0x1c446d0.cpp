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

// Function: sub_01C446D0
// Address: 0x1c446d0 - 0x1c446e8
void sub_01C446D0_0x1c446d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C446D0_0x1c446d0");
#endif

    ctx->pc = 0x1c446d0u;

    // 0x1c446d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c446d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c446d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c446d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c446d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c446d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c446dc: 0x8710bb0  j           func_1C42EC0
    ctx->pc = 0x1C446DCu;
    ctx->pc = 0x1C446E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C446DCu;
    // 0x1c446e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42EC0u;
    sub_01C42EC0_0x1c42ec0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C446E4u;
    // 0x1c446e4: 0x0  nop
    ctx->pc = 0x1c446e4u;
    // NOP
    ctx->pc = 0x1c446e8u;
}
