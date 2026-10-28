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

// Function: sub_01C01BA8
// Address: 0x1c01ba8 - 0x1c01bc0
void sub_01C01BA8_0x1c01ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01BA8_0x1c01ba8");
#endif

    ctx->pc = 0x1c01ba8u;

    // 0x1c01ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c01bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c01bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c01bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01bb4: 0x8700318  j           func_1C00C60
    ctx->pc = 0x1C01BB4u;
    ctx->pc = 0x1C01BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01BB4u;
    // 0x1c01bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00C60u;
    sub_01C00C60_0x1c00c60(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01BBCu;
    // 0x1c01bbc: 0x0  nop
    ctx->pc = 0x1c01bbcu;
    // NOP
    ctx->pc = 0x1c01bc0u;
}
