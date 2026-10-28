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

// Function: sub_01CCFC38
// Address: 0x1ccfc38 - 0x1ccfc58
void sub_01CCFC38_0x1ccfc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFC38_0x1ccfc38");
#endif

    ctx->pc = 0x1ccfc38u;

    // 0x1ccfc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfc3c: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccfc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfc40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfc44: 0x24a541e0  addiu       $a1, $a1, 0x41E0
    ctx->pc = 0x1ccfc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16864));
    // 0x1ccfc48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfc4c: 0x87338fc  j           func_1CCE3F0
    ctx->pc = 0x1CCFC4Cu;
    ctx->pc = 0x1CCFC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFC4Cu;
    // 0x1ccfc50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE3F0u;
    sub_01CCE3F0_0x1cce3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFC54u;
    // 0x1ccfc54: 0x0  nop
    ctx->pc = 0x1ccfc54u;
    // NOP
    ctx->pc = 0x1ccfc58u;
}
