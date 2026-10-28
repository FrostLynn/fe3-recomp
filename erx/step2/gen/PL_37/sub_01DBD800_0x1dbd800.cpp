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

// Function: sub_01DBD800
// Address: 0x1dbd800 - 0x1dbd820
void sub_01DBD800_0x1dbd800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD800_0x1dbd800");
#endif

    ctx->pc = 0x1dbd800u;

    // 0x1dbd800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd804: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dbd804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dbd808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd80c: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1dbd80cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1dbd810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd814: 0x876ee8a  j           func_1DBBA28
    ctx->pc = 0x1DBD814u;
    ctx->pc = 0x1DBD818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD814u;
    // 0x1dbd818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA28u;
    sub_01DBBA28_0x1dbba28(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD81Cu;
    // 0x1dbd81c: 0x0  nop
    ctx->pc = 0x1dbd81cu;
    // NOP
    ctx->pc = 0x1dbd820u;
}
