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

// Function: sub_01CCFB98
// Address: 0x1ccfb98 - 0x1ccfbb8
void sub_01CCFB98_0x1ccfb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFB98_0x1ccfb98");
#endif

    ctx->pc = 0x1ccfb98u;

    // 0x1ccfb98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfb9c: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccfb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfba4: 0x24a534e0  addiu       $a1, $a1, 0x34E0
    ctx->pc = 0x1ccfba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13536));
    // 0x1ccfba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfbac: 0x87338fc  j           func_1CCE3F0
    ctx->pc = 0x1CCFBACu;
    ctx->pc = 0x1CCFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFBACu;
    // 0x1ccfbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE3F0u;
    sub_01CCE3F0_0x1cce3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFBB4u;
    // 0x1ccfbb4: 0x0  nop
    ctx->pc = 0x1ccfbb4u;
    // NOP
    ctx->pc = 0x1ccfbb8u;
}
