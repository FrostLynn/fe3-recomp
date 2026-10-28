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

// Function: sub_01CB7348
// Address: 0x1cb7348 - 0x1cb7360
void sub_01CB7348_0x1cb7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7348_0x1cb7348");
#endif

    ctx->pc = 0x1cb7348u;

    // 0x1cb7348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb734c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb7350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb7350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7354: 0x872d9e0  j           func_1CB6780
    ctx->pc = 0x1CB7354u;
    ctx->pc = 0x1CB7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7354u;
    // 0x1cb7358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6780u;
    sub_01CB6780_0x1cb6780(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB735Cu;
    // 0x1cb735c: 0x0  nop
    ctx->pc = 0x1cb735cu;
    // NOP
    ctx->pc = 0x1cb7360u;
}
