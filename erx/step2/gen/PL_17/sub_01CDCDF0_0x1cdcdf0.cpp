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

// Function: sub_01CDCDF0
// Address: 0x1cdcdf0 - 0x1cdce08
void sub_01CDCDF0_0x1cdcdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCDF0_0x1cdcdf0");
#endif

    ctx->pc = 0x1cdcdf0u;

    // 0x1cdcdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcdf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdcdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdcdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdcdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcdfc: 0x8736c56  j           func_1CDB158
    ctx->pc = 0x1CDCDFCu;
    ctx->pc = 0x1CDCE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCDFCu;
    // 0x1cdce00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB158u;
    sub_01CDB158_0x1cdb158(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCE04u;
    // 0x1cdce04: 0x0  nop
    ctx->pc = 0x1cdce04u;
    // NOP
    ctx->pc = 0x1cdce08u;
}
