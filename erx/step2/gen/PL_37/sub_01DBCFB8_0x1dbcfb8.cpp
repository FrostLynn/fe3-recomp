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

// Function: sub_01DBCFB8
// Address: 0x1dbcfb8 - 0x1dbcfd0
void sub_01DBCFB8_0x1dbcfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCFB8_0x1dbcfb8");
#endif

    ctx->pc = 0x1dbcfb8u;

    // 0x1dbcfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbcfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbcfbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbcfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbcfc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbcfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcfc4: 0x876ee8c  j           func_1DBBA30
    ctx->pc = 0x1DBCFC4u;
    ctx->pc = 0x1DBCFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCFC4u;
    // 0x1dbcfc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA30u;
    sub_01DBBA30_0x1dbba30(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCFCCu;
    // 0x1dbcfcc: 0x0  nop
    ctx->pc = 0x1dbcfccu;
    // NOP
    ctx->pc = 0x1dbcfd0u;
}
