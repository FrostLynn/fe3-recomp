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

// Function: sub_01DBD148
// Address: 0x1dbd148 - 0x1dbd160
void sub_01DBD148_0x1dbd148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD148_0x1dbd148");
#endif

    ctx->pc = 0x1dbd148u;

    // 0x1dbd148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd14c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd154: 0x876ee9a  j           func_1DBBA68
    ctx->pc = 0x1DBD154u;
    ctx->pc = 0x1DBD158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD154u;
    // 0x1dbd158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA68u;
    sub_01DBBA68_0x1dbba68(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD15Cu;
    // 0x1dbd15c: 0x0  nop
    ctx->pc = 0x1dbd15cu;
    // NOP
    ctx->pc = 0x1dbd160u;
}
