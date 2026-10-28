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

// Function: sub_01DD5C80
// Address: 0x1dd5c80 - 0x1dd5ca0
void sub_01DD5C80_0x1dd5c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD5C80_0x1dd5c80");
#endif

    ctx->pc = 0x1dd5c80u;

    // 0x1dd5c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd5c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd5c84: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd5c84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd5c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd5c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd5c8c: 0x8f848018  lw          $a0, -0x7FE8($gp)
    ctx->pc = 0x1dd5c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
    // 0x1dd5c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd5c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd5c94: 0x8775694  j           func_1DD5A50
    ctx->pc = 0x1DD5C94u;
    ctx->pc = 0x1DD5C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD5C94u;
    // 0x1dd5c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A50u;
    sub_01DD5A50_0x1dd5a50(rdram, ctx, runtime); return;
    ctx->pc = 0x1DD5C9Cu;
    // 0x1dd5c9c: 0x0  nop
    ctx->pc = 0x1dd5c9cu;
    // NOP
    ctx->pc = 0x1dd5ca0u;
}
