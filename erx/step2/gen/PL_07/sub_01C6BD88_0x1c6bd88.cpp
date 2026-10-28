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

// Function: sub_01C6BD88
// Address: 0x1c6bd88 - 0x1c6bda0
void sub_01C6BD88_0x1c6bd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BD88_0x1c6bd88");
#endif

    ctx->pc = 0x1c6bd88u;

    // 0x1c6bd88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6bd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6bd8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6bd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6bd90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6bd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bd94: 0x871aa2e  j           func_1C6A8B8
    ctx->pc = 0x1C6BD94u;
    ctx->pc = 0x1C6BD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD94u;
    // 0x1c6bd98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8B8u;
    sub_01C6A8B8_0x1c6a8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BD9Cu;
    // 0x1c6bd9c: 0x0  nop
    ctx->pc = 0x1c6bd9cu;
    // NOP
    ctx->pc = 0x1c6bda0u;
}
