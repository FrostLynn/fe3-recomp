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

// Function: sub_01DBDF38
// Address: 0x1dbdf38 - 0x1dbdf50
void sub_01DBDF38_0x1dbdf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDF38_0x1dbdf38");
#endif

    ctx->pc = 0x1dbdf38u;

    // 0x1dbdf38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbdf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbdf3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbdf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbdf40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbdf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdf44: 0x876ee8e  j           func_1DBBA38
    ctx->pc = 0x1DBDF44u;
    ctx->pc = 0x1DBDF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDF44u;
    // 0x1dbdf48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA38u;
    sub_01DBBA38_0x1dbba38(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBDF4Cu;
    // 0x1dbdf4c: 0x0  nop
    ctx->pc = 0x1dbdf4cu;
    // NOP
    ctx->pc = 0x1dbdf50u;
}
