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

// Function: sub_01C01F38
// Address: 0x1c01f38 - 0x1c01f50
void sub_01C01F38_0x1c01f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C01F38_0x1c01f38");
#endif

    ctx->pc = 0x1c01f38u;

    // 0x1c01f38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c01f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c01f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c01f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c01f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c01f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c01f44: 0x8700348  j           func_1C00D20
    ctx->pc = 0x1C01F44u;
    ctx->pc = 0x1C01F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C01F44u;
    // 0x1c01f48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00D20u;
    sub_01C00D20_0x1c00d20(rdram, ctx, runtime); return;
    ctx->pc = 0x1C01F4Cu;
    // 0x1c01f4c: 0x0  nop
    ctx->pc = 0x1c01f4cu;
    // NOP
    ctx->pc = 0x1c01f50u;
}
