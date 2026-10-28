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

// Function: sub_01C21B28
// Address: 0x1c21b28 - 0x1c21b40
void sub_01C21B28_0x1c21b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C21B28_0x1c21b28");
#endif

    ctx->pc = 0x1c21b28u;

    // 0x1c21b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c21b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c21b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c21b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c21b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c21b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c21b34: 0x870801e  j           func_1C20078
    ctx->pc = 0x1C21B34u;
    ctx->pc = 0x1C21B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C21B34u;
    // 0x1c21b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C20078u;
    sub_01C20078_0x1c20078(rdram, ctx, runtime); return;
    ctx->pc = 0x1C21B3Cu;
    // 0x1c21b3c: 0x0  nop
    ctx->pc = 0x1c21b3cu;
    // NOP
    ctx->pc = 0x1c21b40u;
}
