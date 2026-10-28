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

// Function: sub_01C21B40
// Address: 0x1c21b40 - 0x1c21b58
void sub_01C21B40_0x1c21b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21B40_0x1c21b40");
#endif

    ctx->pc = 0x1c21b40u;

    // 0x1c21b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21b4c: 0x870806c  j           func_1C201B0
    ctx->pc = 0x1C21B4Cu;
    ctx->pc = 0x1C21B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21B4Cu;
    // 0x1c21b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C201B0u;
    sub_01C201B0_0x1c201b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21B54u;
    // 0x1c21b54: 0x0  nop
    ctx->pc = 0x1c21b54u;
    // NOP
    ctx->pc = 0x1c21b58u;
}
