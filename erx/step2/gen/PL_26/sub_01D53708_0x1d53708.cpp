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

// Function: sub_01D53708
// Address: 0x1d53708 - 0x1d53720
void sub_01D53708_0x1d53708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53708_0x1d53708");
#endif

    ctx->pc = 0x1d53708u;

    // 0x1d53708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5370c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d53710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d53710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53714: 0x8754662  j           func_1D51988
    ctx->pc = 0x1D53714u;
    ctx->pc = 0x1D53718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53714u;
    // 0x1d53718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51988u;
    sub_01D51988_0x1d51988(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5371Cu;
    // 0x1d5371c: 0x0  nop
    ctx->pc = 0x1d5371cu;
    // NOP
    ctx->pc = 0x1d53720u;
}
