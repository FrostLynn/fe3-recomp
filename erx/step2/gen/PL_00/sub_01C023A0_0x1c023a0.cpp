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

// Function: sub_01C023A0
// Address: 0x1c023a0 - 0x1c023c0
void sub_01C023A0_0x1c023a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C023A0_0x1c023a0");
#endif

    ctx->pc = 0x1c023a0u;

    // 0x1c023a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c023a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c023a4: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x1c023a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
    // 0x1c023a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c023a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c023ac: 0x24a58f60  addiu       $a1, $a1, -0x70A0
    ctx->pc = 0x1c023acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938464));
    // 0x1c023b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c023b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c023b4: 0x8700406  j           func_1C01018
    ctx->pc = 0x1C023B4u;
    ctx->pc = 0x1C023B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C023B4u;
    // 0x1c023b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C01018u;
    sub_01C01018_0x1c01018(rdram, ctx, runtime); return;
    ctx->pc = 0x1C023BCu;
    // 0x1c023bc: 0x0  nop
    ctx->pc = 0x1c023bcu;
    // NOP
    ctx->pc = 0x1c023c0u;
}
