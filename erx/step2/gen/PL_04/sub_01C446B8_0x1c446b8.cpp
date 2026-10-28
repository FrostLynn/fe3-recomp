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

// Function: sub_01C446B8
// Address: 0x1c446b8 - 0x1c446d0
void sub_01C446B8_0x1c446b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C446B8_0x1c446b8");
#endif

    ctx->pc = 0x1c446b8u;

    // 0x1c446b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c446b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c446bc: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x1c446bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x1c446c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c446c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c446c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c446c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c446c8: 0x8710bae  j           func_1C42EB8
    ctx->pc = 0x1C446C8u;
    ctx->pc = 0x1C446CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C446C8u;
    // 0x1c446cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42EB8u;
    sub_01C42EB8_0x1c42eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C446D0u;
}
