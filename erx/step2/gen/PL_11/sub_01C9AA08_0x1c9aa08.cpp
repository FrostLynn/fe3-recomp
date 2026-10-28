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

// Function: sub_01C9AA08
// Address: 0x1c9aa08 - 0x1c9aa20
void sub_01C9AA08_0x1c9aa08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AA08_0x1c9aa08");
#endif

    ctx->pc = 0x1c9aa08u;

    // 0x1c9aa08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9aa08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9aa0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9aa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9aa10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9aa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9aa14: 0x8726586  j           func_1C99618
    ctx->pc = 0x1C9AA14u;
    ctx->pc = 0x1C9AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9AA14u;
    // 0x1c9aa18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99618u;
    sub_01C99618_0x1c99618(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9AA1Cu;
    // 0x1c9aa1c: 0x0  nop
    ctx->pc = 0x1c9aa1cu;
    // NOP
    ctx->pc = 0x1c9aa20u;
}
