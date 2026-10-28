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

// Function: sub_01DBDA00
// Address: 0x1dbda00 - 0x1dbda18
void sub_01DBDA00_0x1dbda00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDA00_0x1dbda00");
#endif

    ctx->pc = 0x1dbda00u;

    // 0x1dbda00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbda00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbda04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbda04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbda08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbda08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbda0c: 0x876f600  j           func_1DBD800
    ctx->pc = 0x1DBDA0Cu;
    ctx->pc = 0x1DBDA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDA0Cu;
    // 0x1dbda10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD800u;
    sub_01DBD800_0x1dbd800(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBDA14u;
    // 0x1dbda14: 0x0  nop
    ctx->pc = 0x1dbda14u;
    // NOP
    ctx->pc = 0x1dbda18u;
}
