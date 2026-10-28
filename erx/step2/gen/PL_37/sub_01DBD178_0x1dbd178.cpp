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

// Function: sub_01DBD178
// Address: 0x1dbd178 - 0x1dbd190
void sub_01DBD178_0x1dbd178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD178_0x1dbd178");
#endif

    ctx->pc = 0x1dbd178u;

    // 0x1dbd178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd184: 0x876eeba  j           func_1DBBAE8
    ctx->pc = 0x1DBD184u;
    ctx->pc = 0x1DBD188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD184u;
    // 0x1dbd188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBAE8u;
    sub_01DBBAE8_0x1dbbae8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD18Cu;
    // 0x1dbd18c: 0x0  nop
    ctx->pc = 0x1dbd18cu;
    // NOP
    ctx->pc = 0x1dbd190u;
}
