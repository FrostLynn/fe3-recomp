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

// Function: sub_01DD0DB8
// Address: 0x1dd0db8 - 0x1dd0df0
void sub_01DD0DB8_0x1dd0db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0DB8_0x1dd0db8");
#endif

    ctx->pc = 0x1dd0db8u;

    // 0x1dd0db8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd0db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd0dbc: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd0dbcu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0dc4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd0dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0dc8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd0dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd0dcc: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1dd0dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1dd0dd0: 0x8dae00dc  lw          $t6, 0xDC($t5)
    ctx->pc = 0x1dd0dd0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dd0dd4: 0xa1af0430  sb          $t7, 0x430($t5)
    ctx->pc = 0x1dd0dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1072), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dd0dd8: 0xadc00cd8  sw          $zero, 0xCD8($t6)
    ctx->pc = 0x1dd0dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
    // 0x1dd0ddc: 0x25c408c8  addiu       $a0, $t6, 0x8C8
    ctx->pc = 0x1dd0ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 2248));
    // 0x1dd0de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0de4: 0x8774296  j           func_1DD0A58
    ctx->pc = 0x1DD0DE4u;
    ctx->pc = 0x1DD0DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0DE4u;
    // 0x1dd0de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A58u;
    sub_01DD0A58_0x1dd0a58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD0DECu;
    // 0x1dd0dec: 0x0  nop
    ctx->pc = 0x1dd0decu;
    // NOP
    ctx->pc = 0x1dd0df0u;
}
