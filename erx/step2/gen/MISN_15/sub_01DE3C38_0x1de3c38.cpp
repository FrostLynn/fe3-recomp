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

// Function: sub_01DE3C38
// Address: 0x1de3c38 - 0x1de3c60
void sub_01DE3C38_0x1de3c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE3C38_0x1de3c38");
#endif

    ctx->pc = 0x1de3c38u;

    // 0x1de3c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de3c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de3c3c: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de3c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de3c44: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1de3c44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de3c48: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de3c48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de3c4c: 0x8c8e00dc  lw          $t6, 0xDC($a0)
    ctx->pc = 0x1de3c4cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1de3c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de3c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de3c54: 0xadcf0cd8  sw          $t7, 0xCD8($t6)
    ctx->pc = 0x1de3c54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 15));
    // 0x1de3c58: 0x8778dda  j           func_1DE3768
    ctx->pc = 0x1DE3C58u;
    ctx->pc = 0x1DE3C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE3C58u;
    // 0x1de3c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE3768u;
    sub_01DE3768_0x1de3768(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE3C60u;
}
