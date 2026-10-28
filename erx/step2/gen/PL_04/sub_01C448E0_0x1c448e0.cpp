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

// Function: sub_01C448E0
// Address: 0x1c448e0 - 0x1c448f8
void sub_01C448E0_0x1c448e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C448E0_0x1c448e0");
#endif

    ctx->pc = 0x1c448e0u;

    // 0x1c448e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c448e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c448e4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x1c448e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1c448e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c448e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c448ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c448ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c448f0: 0x8710c84  j           func_1C43210
    ctx->pc = 0x1C448F0u;
    ctx->pc = 0x1C448F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C448F0u;
    // 0x1c448f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43210u;
    sub_01C43210_0x1c43210(rdram, ctx, runtime); return;
    ctx->pc = 0x1C448F8u;
}
