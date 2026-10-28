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

// Function: sub_01CC4A40
// Address: 0x1cc4a40 - 0x1cc4a58
void sub_01CC4A40_0x1cc4a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4A40_0x1cc4a40");
#endif

    ctx->pc = 0x1cc4a40u;

    // 0x1cc4a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc4a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc4a4c: 0x8730d1e  j           func_1CC3478
    ctx->pc = 0x1CC4A4Cu;
    ctx->pc = 0x1CC4A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC4A4Cu;
    // 0x1cc4a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC3478u;
    sub_01CC3478_0x1cc3478(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4A54u;
    // 0x1cc4a54: 0x0  nop
    ctx->pc = 0x1cc4a54u;
    // NOP
    ctx->pc = 0x1cc4a58u;
}
