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

// Function: sub_01DB3668
// Address: 0x1db3668 - 0x1db3680
void sub_01DB3668_0x1db3668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3668_0x1db3668");
#endif

    ctx->pc = 0x1db3668u;

    // 0x1db3668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db366c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db366cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db3670: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1db3670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db3674: 0x876c78c  j           func_1DB1E30
    ctx->pc = 0x1DB3674u;
    ctx->pc = 0x1DB3678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3674u;
    // 0x1db3678: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB1E30u;
    sub_01DB1E30_0x1db1e30(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB367Cu;
    // 0x1db367c: 0x0  nop
    ctx->pc = 0x1db367cu;
    // NOP
    ctx->pc = 0x1db3680u;
}
