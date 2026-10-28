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

// Function: sub_01CDD110
// Address: 0x1cdd110 - 0x1cdd130
void sub_01CDD110_0x1cdd110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD110_0x1cdd110");
#endif

    ctx->pc = 0x1cdd110u;

    // 0x1cdd110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd114: 0x3c0501ce  lui         $a1, 0x1CE
    ctx->pc = 0x1cdd114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd11c: 0x24a52bc0  addiu       $a1, $a1, 0x2BC0
    ctx->pc = 0x1cdd11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11200));
    // 0x1cdd120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd124: 0x8736c88  j           func_1CDB220
    ctx->pc = 0x1CDD124u;
    ctx->pc = 0x1CDD128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD124u;
    // 0x1cdd128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB220u;
    sub_01CDB220_0x1cdb220(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD12Cu;
    // 0x1cdd12c: 0x0  nop
    ctx->pc = 0x1cdd12cu;
    // NOP
    ctx->pc = 0x1cdd130u;
}
