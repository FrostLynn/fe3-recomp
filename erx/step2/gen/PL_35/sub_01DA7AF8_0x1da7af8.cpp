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

// Function: sub_01DA7AF8
// Address: 0x1da7af8 - 0x1da7b10
void sub_01DA7AF8_0x1da7af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7AF8_0x1da7af8");
#endif

    ctx->pc = 0x1da7af8u;

    // 0x1da7af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da7afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da7b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da7b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7b04: 0x8769ba2  j           func_1DA6E88
    ctx->pc = 0x1DA7B04u;
    ctx->pc = 0x1DA7B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7B04u;
    // 0x1da7b08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E88u;
    sub_01DA6E88_0x1da6e88(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA7B0Cu;
    // 0x1da7b0c: 0x0  nop
    ctx->pc = 0x1da7b0cu;
    // NOP
    ctx->pc = 0x1da7b10u;
}
