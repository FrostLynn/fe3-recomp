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

// Function: sub_01DE51F8
// Address: 0x1de51f8 - 0x1de5228
void sub_01DE51F8_0x1de51f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE51F8_0x1de51f8");
#endif

    ctx->pc = 0x1de51f8u;

    // 0x1de51f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de51f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de51fc: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1de51fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1de5200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de5200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de5204: 0x240f0180  addiu       $t7, $zero, 0x180
    ctx->pc = 0x1de5204u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1de5208: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1de5208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1de520c: 0x8c8e00dc  lw          $t6, 0xDC($a0)
    ctx->pc = 0x1de520cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1de5210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de5210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de5214: 0xadc00cd8  sw          $zero, 0xCD8($t6)
    ctx->pc = 0x1de5214u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
    // 0x1de5218: 0xaf8f801c  sw          $t7, -0x7FE4($gp)
    ctx->pc = 0x1de5218u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 15));
    // 0x1de521c: 0x8779396  j           func_1DE4E58
    ctx->pc = 0x1DE521Cu;
    ctx->pc = 0x1DE5220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE521Cu;
    // 0x1de5220: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4E58u;
    sub_01DE4E58_0x1de4e58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DE5224u;
    // 0x1de5224: 0x0  nop
    ctx->pc = 0x1de5224u;
    // NOP
    ctx->pc = 0x1de5228u;
}
