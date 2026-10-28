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

// Function: sub_01DBD358
// Address: 0x1dbd358 - 0x1dbd370
void sub_01DBD358_0x1dbd358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD358_0x1dbd358");
#endif

    ctx->pc = 0x1dbd358u;

    // 0x1dbd358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd35c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd364: 0x876ef18  j           func_1DBBC60
    ctx->pc = 0x1DBD364u;
    ctx->pc = 0x1DBD368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD364u;
    // 0x1dbd368: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBC60u;
    sub_01DBBC60_0x1dbbc60(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD36Cu;
    // 0x1dbd36c: 0x0  nop
    ctx->pc = 0x1dbd36cu;
    // NOP
    ctx->pc = 0x1dbd370u;
}
