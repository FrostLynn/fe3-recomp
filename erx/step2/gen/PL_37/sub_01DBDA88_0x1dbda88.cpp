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

// Function: sub_01DBDA88
// Address: 0x1dbda88 - 0x1dbdaa0
void sub_01DBDA88_0x1dbda88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDA88_0x1dbda88");
#endif

    ctx->pc = 0x1dbda88u;

    // 0x1dbda88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbda88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbda8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbda8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbda90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbda90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbda94: 0x876f61a  j           func_1DBD868
    ctx->pc = 0x1DBDA94u;
    ctx->pc = 0x1DBDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDA94u;
    // 0x1dbda98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBD868u;
    sub_01DBD868_0x1dbd868(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBDA9Cu;
    // 0x1dbda9c: 0x0  nop
    ctx->pc = 0x1dbda9cu;
    // NOP
    ctx->pc = 0x1dbdaa0u;
}
