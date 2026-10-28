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

// Function: sub_01CB8808
// Address: 0x1cb8808 - 0x1cb8820
void sub_01CB8808_0x1cb8808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8808_0x1cb8808");
#endif

    ctx->pc = 0x1cb8808u;

    // 0x1cb8808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb880c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb880cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb8810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8814: 0x872dc84  j           func_1CB7210
    ctx->pc = 0x1CB8814u;
    ctx->pc = 0x1CB8818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8814u;
    // 0x1cb8818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7210u;
    sub_01CB7210_0x1cb7210(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB881Cu;
    // 0x1cb881c: 0x0  nop
    ctx->pc = 0x1cb881cu;
    // NOP
    ctx->pc = 0x1cb8820u;
}
