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

// Function: sub_01CDD0F8
// Address: 0x1cdd0f8 - 0x1cdd110
void sub_01CDD0F8_0x1cdd0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD0F8_0x1cdd0f8");
#endif

    ctx->pc = 0x1cdd0f8u;

    // 0x1cdd0f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdd0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdd0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdd0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdd100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdd100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdd104: 0x8736ca4  j           func_1CDB290
    ctx->pc = 0x1CDD104u;
    ctx->pc = 0x1CDD108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDD104u;
    // 0x1cdd108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB290u;
    sub_01CDB290_0x1cdb290(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDD10Cu;
    // 0x1cdd10c: 0x0  nop
    ctx->pc = 0x1cdd10cu;
    // NOP
    ctx->pc = 0x1cdd110u;
}
