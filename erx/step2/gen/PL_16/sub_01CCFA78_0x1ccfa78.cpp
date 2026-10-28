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

// Function: sub_01CCFA78
// Address: 0x1ccfa78 - 0x1ccfa98
void sub_01CCFA78_0x1ccfa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFA78_0x1ccfa78");
#endif

    ctx->pc = 0x1ccfa78u;

    // 0x1ccfa78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfa7c: 0x3c0501cd  lui         $a1, 0x1CD
    ctx->pc = 0x1ccfa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)461 << 16));
    // 0x1ccfa80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccfa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccfa84: 0x24a52760  addiu       $a1, $a1, 0x2760
    ctx->pc = 0x1ccfa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10080));
    // 0x1ccfa88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccfa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfa8c: 0x87338fc  j           func_1CCE3F0
    ctx->pc = 0x1CCFA8Cu;
    ctx->pc = 0x1CCFA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFA8Cu;
    // 0x1ccfa90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCE3F0u;
    sub_01CCE3F0_0x1cce3f0(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCFA94u;
    // 0x1ccfa94: 0x0  nop
    ctx->pc = 0x1ccfa94u;
    // NOP
    ctx->pc = 0x1ccfa98u;
}
