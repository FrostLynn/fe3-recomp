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

// Function: sub_01DBD1F0
// Address: 0x1dbd1f0 - 0x1dbd208
void sub_01DBD1F0_0x1dbd1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD1F0_0x1dbd1f0");
#endif

    ctx->pc = 0x1dbd1f0u;

    // 0x1dbd1f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd1f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd1f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd1fc: 0x876eebc  j           func_1DBBAF0
    ctx->pc = 0x1DBD1FCu;
    ctx->pc = 0x1DBD200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD1FCu;
    // 0x1dbd200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBAF0u;
    sub_01DBBAF0_0x1dbbaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD204u;
    // 0x1dbd204: 0x0  nop
    ctx->pc = 0x1dbd204u;
    // NOP
    ctx->pc = 0x1dbd208u;
}
