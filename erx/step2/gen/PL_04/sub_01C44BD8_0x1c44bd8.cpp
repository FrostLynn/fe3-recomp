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

// Function: sub_01C44BD8
// Address: 0x1c44bd8 - 0x1c44bf0
void sub_01C44BD8_0x1c44bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44BD8_0x1c44bd8");
#endif

    ctx->pc = 0x1c44bd8u;

    // 0x1c44bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44bdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44be4: 0x8710cd8  j           func_1C43360
    ctx->pc = 0x1C44BE4u;
    ctx->pc = 0x1C44BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44BE4u;
    // 0x1c44be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C43360u;
    sub_01C43360_0x1c43360(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44BECu;
    // 0x1c44bec: 0x0  nop
    ctx->pc = 0x1c44becu;
    // NOP
    ctx->pc = 0x1c44bf0u;
}
