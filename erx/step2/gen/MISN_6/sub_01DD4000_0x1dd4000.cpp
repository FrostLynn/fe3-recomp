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

// Function: sub_01DD4000
// Address: 0x1dd4000 - 0x1dd4028
void sub_01DD4000_0x1dd4000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD4000_0x1dd4000");
#endif

    ctx->pc = 0x1dd4000u;

    // 0x1dd4000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd4000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd4004: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1dd4004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd4008: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd4008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd400c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd400cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd4010: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd4010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd4014: 0x8c8e00dc  lw          $t6, 0xDC($a0)
    ctx->pc = 0x1dd4014u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x1dd4018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd4018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd401c: 0xadcf0cd8  sw          $t7, 0xCD8($t6)
    ctx->pc = 0x1dd401cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 15));
    // 0x1dd4020: 0x8774f54  j           func_1DD3D50
    ctx->pc = 0x1DD4020u;
    ctx->pc = 0x1DD4024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD4020u;
    // 0x1dd4024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D50u;
    sub_01DD3D50_0x1dd3d50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD4028u;
}
