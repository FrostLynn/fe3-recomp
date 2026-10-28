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

// Function: sub_01CA3360
// Address: 0x1ca3360 - 0x1ca3378
void sub_01CA3360_0x1ca3360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA3360_0x1ca3360");
#endif

    ctx->pc = 0x1ca3360u;

    // 0x1ca3360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca3360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca3364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca3364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca3368: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca3368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca336c: 0x87289e0  j           func_1CA2780
    ctx->pc = 0x1CA336Cu;
    ctx->pc = 0x1CA3370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA336Cu;
    // 0x1ca3370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2780u;
    sub_01CA2780_0x1ca2780(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA3374u;
    // 0x1ca3374: 0x0  nop
    ctx->pc = 0x1ca3374u;
    // NOP
    ctx->pc = 0x1ca3378u;
}
