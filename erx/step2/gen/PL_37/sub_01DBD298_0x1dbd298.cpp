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

// Function: sub_01DBD298
// Address: 0x1dbd298 - 0x1dbd2b0
void sub_01DBD298_0x1dbd298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD298_0x1dbd298");
#endif

    ctx->pc = 0x1dbd298u;

    // 0x1dbd298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd29c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd2a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd2a4: 0x876eeae  j           func_1DBBAB8
    ctx->pc = 0x1DBD2A4u;
    ctx->pc = 0x1DBD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD2A4u;
    // 0x1dbd2a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBAB8u;
    sub_01DBBAB8_0x1dbbab8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD2ACu;
    // 0x1dbd2ac: 0x0  nop
    ctx->pc = 0x1dbd2acu;
    // NOP
    ctx->pc = 0x1dbd2b0u;
}
