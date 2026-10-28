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

// Function: sub_01DC49F0
// Address: 0x1dc49f0 - 0x1dc4a08
void sub_01DC49F0_0x1dc49f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC49F0_0x1dc49f0");
#endif

    ctx->pc = 0x1dc49f0u;

    // 0x1dc49f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc49f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc49f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc49f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc49f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc49fc: 0x87710d8  j           func_1DC4360
    ctx->pc = 0x1DC49FCu;
    ctx->pc = 0x1DC4A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC49FCu;
    // 0x1dc4a00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4360u;
    sub_01DC4360_0x1dc4360(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4A04u;
    // 0x1dc4a04: 0x0  nop
    ctx->pc = 0x1dc4a04u;
    // NOP
    ctx->pc = 0x1dc4a08u;
}
