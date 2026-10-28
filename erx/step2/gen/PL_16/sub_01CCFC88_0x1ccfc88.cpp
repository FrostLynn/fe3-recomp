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

// Function: sub_01CCFC88
// Address: 0x1ccfc88 - 0x1ccfca8
void sub_01CCFC88_0x1ccfc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFC88_0x1ccfc88");
#endif

    ctx->pc = 0x1ccfc88u;

    // 0x1ccfc88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfc8c: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccfc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfc90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfc94: 0x24a50bc0  addiu       $a1, $a1, 0xBC0
    ctx->pc = 0x1ccfc94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3008));
    // 0x1ccfc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfc9c: 0x87338fc  j           func_1CCE3F0
    ctx->pc = 0x1CCFC9Cu;
    ctx->pc = 0x1CCFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFC9Cu;
    // 0x1ccfca0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE3F0u;
    sub_01CCE3F0_0x1cce3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFCA4u;
    // 0x1ccfca4: 0x0  nop
    ctx->pc = 0x1ccfca4u;
    // NOP
    ctx->pc = 0x1ccfca8u;
}
