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

// Function: sub_01DBD960
// Address: 0x1dbd960 - 0x1dbd978
void sub_01DBD960_0x1dbd960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD960_0x1dbd960");
#endif

    ctx->pc = 0x1dbd960u;

    // 0x1dbd960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd96c: 0x876f600  j           func_1DBD800
    ctx->pc = 0x1DBD96Cu;
    ctx->pc = 0x1DBD970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD96Cu;
    // 0x1dbd970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD800u;
    sub_01DBD800_0x1dbd800(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD974u;
    // 0x1dbd974: 0x0  nop
    ctx->pc = 0x1dbd974u;
    // NOP
    ctx->pc = 0x1dbd978u;
}
