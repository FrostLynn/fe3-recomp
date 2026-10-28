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

// Function: sub_01C61C98
// Address: 0x1c61c98 - 0x1c61cb8
void sub_01C61C98_0x1c61c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61C98_0x1c61c98");
#endif

    ctx->pc = 0x1c61c98u;

    // 0x1c61c98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c61c9c: 0x3c0501c6  lui         $a1, 0x1C6
    ctx->pc = 0x1c61c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)454 << 16));
    // 0x1c61ca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c61ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c61ca4: 0x24a53750  addiu       $a1, $a1, 0x3750
    ctx->pc = 0x1c61ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14160));
    // 0x1c61ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c61ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c61cac: 0x871813c  j           func_1C604F0
    ctx->pc = 0x1C61CACu;
    ctx->pc = 0x1C61CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61CACu;
    // 0x1c61cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C604F0u;
    sub_01C604F0_0x1c604f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C61CB4u;
    // 0x1c61cb4: 0x0  nop
    ctx->pc = 0x1c61cb4u;
    // NOP
    ctx->pc = 0x1c61cb8u;
}
