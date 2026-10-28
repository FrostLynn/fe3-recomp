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

// Function: sub_01C21170
// Address: 0x1c21170 - 0x1c21188
void sub_01C21170_0x1c21170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21170_0x1c21170");
#endif

    ctx->pc = 0x1c21170u;

    // 0x1c21170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2117c: 0x8707f10  j           func_1C1FC40
    ctx->pc = 0x1C2117Cu;
    ctx->pc = 0x1C21180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2117Cu;
    // 0x1c21180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1FC40u;
    sub_01C1FC40_0x1c1fc40(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21184u;
    // 0x1c21184: 0x0  nop
    ctx->pc = 0x1c21184u;
    // NOP
    ctx->pc = 0x1c21188u;
}
