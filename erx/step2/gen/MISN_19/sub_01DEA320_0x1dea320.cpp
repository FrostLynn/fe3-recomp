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

// Function: sub_01DEA320
// Address: 0x1dea320 - 0x1dea348
void sub_01DEA320_0x1dea320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEA320_0x1dea320");
#endif

    ctx->pc = 0x1dea320u;

    // 0x1dea320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dea320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dea324: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dea324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dea328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dea328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dea32c: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dea32cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dea330: 0x8c8f00dc  lw          $t7, 0xDC($a0)
    ctx->pc = 0x1dea330u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dea334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dea334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dea338: 0xade00cd8  sw          $zero, 0xCD8($t7)
    ctx->pc = 0x1dea338u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 3288), GPR_U32(ctx, 0));
    // 0x1dea33c: 0x877a818  j           func_1DEA060
    ctx->pc = 0x1DEA33Cu;
    ctx->pc = 0x1DEA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEA33Cu;
    // 0x1dea340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA060u;
    sub_01DEA060_0x1dea060(rdram, ctx, runtime); return;
    ctx->pc = 0x1DEA344u;
    // 0x1dea344: 0x0  nop
    ctx->pc = 0x1dea344u;
    // NOP
    ctx->pc = 0x1dea348u;
}
