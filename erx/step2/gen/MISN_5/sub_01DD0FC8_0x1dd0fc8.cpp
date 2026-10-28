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

// Function: sub_01DD0FC8
// Address: 0x1dd0fc8 - 0x1dd1000
void sub_01DD0FC8_0x1dd0fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD0FC8_0x1dd0fc8");
#endif

    ctx->pc = 0x1dd0fc8u;

    // 0x1dd0fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd0fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd0fcc: 0x8f8d8014  lw          $t5, -0x7FEC($gp)
    ctx->pc = 0x1dd0fccu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd0fd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd0fd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd0fd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0fd8: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd0fdc: 0x24052a6c  addiu       $a1, $zero, 0x2A6C
    ctx->pc = 0x1dd0fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10860));
    // 0x1dd0fe0: 0x8dae00dc  lw          $t6, 0xDC($t5)
    ctx->pc = 0x1dd0fe0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 220)));
    // 0x1dd0fe4: 0xa1af0430  sb          $t7, 0x430($t5)
    ctx->pc = 0x1dd0fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1072), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dd0fe8: 0xadc00cd8  sw          $zero, 0xCD8($t6)
    ctx->pc = 0x1dd0fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
    // 0x1dd0fec: 0x25c408c8  addiu       $a0, $t6, 0x8C8
    ctx->pc = 0x1dd0fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 2248));
    // 0x1dd0ff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd0ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0ff4: 0x8774296  j           func_1DD0A58
    ctx->pc = 0x1DD0FF4u;
    ctx->pc = 0x1DD0FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0FF4u;
    // 0x1dd0ff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD0A58u;
    sub_01DD0A58_0x1dd0a58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD0FFCu;
    // 0x1dd0ffc: 0x0  nop
    ctx->pc = 0x1dd0ffcu;
    // NOP
    ctx->pc = 0x1dd1000u;
}
