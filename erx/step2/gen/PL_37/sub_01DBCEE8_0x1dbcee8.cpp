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

// Function: sub_01DBCEE8
// Address: 0x1dbcee8 - 0x1dbcf00
void sub_01DBCEE8_0x1dbcee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCEE8_0x1dbcee8");
#endif

    ctx->pc = 0x1dbcee8u;

    // 0x1dbcee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbcee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbceec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbceecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbcef0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbcef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcef4: 0x876ee7a  j           func_1DBB9E8
    ctx->pc = 0x1DBCEF4u;
    ctx->pc = 0x1DBCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCEF4u;
    // 0x1dbcef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9E8u;
    sub_01DBB9E8_0x1dbb9e8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCEFCu;
    // 0x1dbcefc: 0x0  nop
    ctx->pc = 0x1dbcefcu;
    // NOP
    ctx->pc = 0x1dbcf00u;
}
