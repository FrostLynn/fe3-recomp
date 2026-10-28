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

// Function: sub_01DE3B80
// Address: 0x1de3b80 - 0x1de3ba0
void sub_01DE3B80_0x1de3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3B80_0x1de3b80");
#endif

    ctx->pc = 0x1de3b80u;

    // 0x1de3b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de3b84: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de3b84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de3b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de3b8c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3b90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de3b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3b94: 0x8778dda  j           func_1DE3768
    ctx->pc = 0x1DE3B94u;
    ctx->pc = 0x1DE3B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3B94u;
    // 0x1de3b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3768u;
    sub_01DE3768_0x1de3768(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE3B9Cu;
    // 0x1de3b9c: 0x0  nop
    ctx->pc = 0x1de3b9cu;
    // NOP
    ctx->pc = 0x1de3ba0u;
}
