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

// Function: sub_01DBD090
// Address: 0x1dbd090 - 0x1dbd0a8
void sub_01DBD090_0x1dbd090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD090_0x1dbd090");
#endif

    ctx->pc = 0x1dbd090u;

    // 0x1dbd090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd09c: 0x876ee92  j           func_1DBBA48
    ctx->pc = 0x1DBD09Cu;
    ctx->pc = 0x1DBD0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD09Cu;
    // 0x1dbd0a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA48u;
    sub_01DBBA48_0x1dbba48(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD0A4u;
    // 0x1dbd0a4: 0x0  nop
    ctx->pc = 0x1dbd0a4u;
    // NOP
    ctx->pc = 0x1dbd0a8u;
}
