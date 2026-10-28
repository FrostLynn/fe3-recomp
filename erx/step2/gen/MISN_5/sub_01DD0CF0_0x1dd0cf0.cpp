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

// Function: sub_01DD0CF0
// Address: 0x1dd0cf0 - 0x1dd0d40
void sub_01DD0CF0_0x1dd0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0CF0_0x1dd0cf0");
#endif

    ctx->pc = 0x1dd0cf0u;

    // 0x1dd0cf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd0cf4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd0cf4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0cfc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd0cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0d00: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd0d00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd0d04: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1dd0d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1dd0d08: 0x8de400dc  lw          $a0, 0xDC($t7)
    ctx->pc = 0x1dd0d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd0d0c: 0xa1ee0430  sb          $t6, 0x430($t7)
    ctx->pc = 0x1dd0d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1072), (uint8_t)GPR_U32(ctx, 14));
    // 0x1dd0d10: 0xac800cd8  sw          $zero, 0xCD8($a0)
    ctx->pc = 0x1dd0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3288), GPR_U32(ctx, 0));
    // 0x1dd0d14: 0xa1e00431  sb          $zero, 0x431($t7)
    ctx->pc = 0x1dd0d14u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1073), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd0d18: 0xa1e00432  sb          $zero, 0x432($t7)
    ctx->pc = 0x1dd0d18u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1074), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd0d1c: 0x248408c8  addiu       $a0, $a0, 0x8C8
    ctx->pc = 0x1dd0d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2248));
    // 0x1dd0d20: 0xa1e00433  sb          $zero, 0x433($t7)
    ctx->pc = 0x1dd0d20u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1075), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd0d24: 0xa1e00434  sb          $zero, 0x434($t7)
    ctx->pc = 0x1dd0d24u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1076), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd0d28: 0xa1e00435  sb          $zero, 0x435($t7)
    ctx->pc = 0x1dd0d28u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1077), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dd0d2c: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd0d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd0d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0d34: 0x8774296  j           func_1DD0A58
    ctx->pc = 0x1DD0D34u;
    ctx->pc = 0x1DD0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0D34u;
    // 0x1dd0d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A58u;
    sub_01DD0A58_0x1dd0a58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD0D3Cu;
    // 0x1dd0d3c: 0x0  nop
    ctx->pc = 0x1dd0d3cu;
    // NOP
    ctx->pc = 0x1dd0d40u;
}
