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

// Function: sub_01DC46A0
// Address: 0x1dc46a0 - 0x1dc46b8
void sub_01DC46A0_0x1dc46a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC46A0_0x1dc46a0");
#endif

    ctx->pc = 0x1dc46a0u;

    // 0x1dc46a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dc46a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dc46a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dc46a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dc46a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dc46a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dc46ac: 0x87710aa  j           func_1DC42A8
    ctx->pc = 0x1DC46ACu;
    ctx->pc = 0x1DC46B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DC46ACu;
    // 0x1dc46b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC42A8u;
    sub_01DC42A8_0x1dc42a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DC46B4u;
    // 0x1dc46b4: 0x0  nop
    ctx->pc = 0x1dc46b4u;
    // NOP
    ctx->pc = 0x1dc46b8u;
}
