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

// Function: sub_01C020B0
// Address: 0x1c020b0 - 0x1c020c8
void sub_01C020B0_0x1c020b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C020B0_0x1c020b0");
#endif

    ctx->pc = 0x1c020b0u;

    // 0x1c020b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c020b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c020b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c020b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c020b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c020b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c020bc: 0x87003ac  j           func_1C00EB0
    ctx->pc = 0x1C020BCu;
    ctx->pc = 0x1C020C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C020BCu;
    // 0x1c020c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00EB0u;
    sub_01C00EB0_0x1c00eb0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C020C4u;
    // 0x1c020c4: 0x0  nop
    ctx->pc = 0x1c020c4u;
    // NOP
    ctx->pc = 0x1c020c8u;
}
