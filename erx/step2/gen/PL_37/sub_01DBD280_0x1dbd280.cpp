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

// Function: sub_01DBD280
// Address: 0x1dbd280 - 0x1dbd298
void sub_01DBD280_0x1dbd280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD280_0x1dbd280");
#endif

    ctx->pc = 0x1dbd280u;

    // 0x1dbd280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd28c: 0x876ee86  j           func_1DBBA18
    ctx->pc = 0x1DBD28Cu;
    ctx->pc = 0x1DBD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD28Cu;
    // 0x1dbd290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA18u;
    sub_01DBBA18_0x1dbba18(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD294u;
    // 0x1dbd294: 0x0  nop
    ctx->pc = 0x1dbd294u;
    // NOP
    ctx->pc = 0x1dbd298u;
}
