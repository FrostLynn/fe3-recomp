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

// Function: sub_01DC4A68
// Address: 0x1dc4a68 - 0x1dc4a80
void sub_01DC4A68_0x1dc4a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4A68_0x1dc4a68");
#endif

    ctx->pc = 0x1dc4a68u;

    // 0x1dc4a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc4a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc4a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc4a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc4a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc4a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc4a74: 0x87710e6  j           func_1DC4398
    ctx->pc = 0x1DC4A74u;
    ctx->pc = 0x1DC4A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC4A74u;
    // 0x1dc4a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC4398u;
    sub_01DC4398_0x1dc4398(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC4A7Cu;
    // 0x1dc4a7c: 0x0  nop
    ctx->pc = 0x1dc4a7cu;
    // NOP
    ctx->pc = 0x1dc4a80u;
}
