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

// Function: sub_01C21AD8
// Address: 0x1c21ad8 - 0x1c21af0
void sub_01C21AD8_0x1c21ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21AD8_0x1c21ad8");
#endif

    ctx->pc = 0x1c21ad8u;

    // 0x1c21ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21ae0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21ae4: 0x870801e  j           func_1C20078
    ctx->pc = 0x1C21AE4u;
    ctx->pc = 0x1C21AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21AE4u;
    // 0x1c21ae8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20078u;
    sub_01C20078_0x1c20078(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21AECu;
    // 0x1c21aec: 0x0  nop
    ctx->pc = 0x1c21aecu;
    // NOP
    ctx->pc = 0x1c21af0u;
}
