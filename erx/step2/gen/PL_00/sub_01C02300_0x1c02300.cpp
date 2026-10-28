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

// Function: sub_01C02300
// Address: 0x1c02300 - 0x1c02320
void sub_01C02300_0x1c02300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02300_0x1c02300");
#endif

    ctx->pc = 0x1c02300u;

    // 0x1c02300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c02304: 0x3c0501c0  lui         $a1, 0x1C0
    ctx->pc = 0x1c02304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)448 << 16));
    // 0x1c02308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0230c: 0x24a57fe0  addiu       $a1, $a1, 0x7FE0
    ctx->pc = 0x1c0230cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32736));
    // 0x1c02310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02314: 0x8700406  j           func_1C01018
    ctx->pc = 0x1C02314u;
    ctx->pc = 0x1C02318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02314u;
    // 0x1c02318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01018u;
    sub_01C01018_0x1c01018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C0231Cu;
    // 0x1c0231c: 0x0  nop
    ctx->pc = 0x1c0231cu;
    // NOP
    ctx->pc = 0x1c02320u;
}
