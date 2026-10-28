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

// Function: sub_01CDCD50
// Address: 0x1cdcd50 - 0x1cdcd68
void sub_01CDCD50_0x1cdcd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCD50_0x1cdcd50");
#endif

    ctx->pc = 0x1cdcd50u;

    // 0x1cdcd50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcd54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdcd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdcd58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdcd58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcd5c: 0x8736c56  j           func_1CDB158
    ctx->pc = 0x1CDCD5Cu;
    ctx->pc = 0x1CDCD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCD5Cu;
    // 0x1cdcd60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB158u;
    sub_01CDB158_0x1cdb158(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCD64u;
    // 0x1cdcd64: 0x0  nop
    ctx->pc = 0x1cdcd64u;
    // NOP
    ctx->pc = 0x1cdcd68u;
}
