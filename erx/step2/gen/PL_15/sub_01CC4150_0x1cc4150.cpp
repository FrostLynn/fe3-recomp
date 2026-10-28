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

// Function: sub_01CC4150
// Address: 0x1cc4150 - 0x1cc4168
void sub_01CC4150_0x1cc4150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4150_0x1cc4150");
#endif

    ctx->pc = 0x1cc4150u;

    // 0x1cc4150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc4154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc4154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc4158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc415c: 0x8730922  j           func_1CC2488
    ctx->pc = 0x1CC415Cu;
    ctx->pc = 0x1CC4160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC415Cu;
    // 0x1cc4160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2488u;
    sub_01CC2488_0x1cc2488(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC4164u;
    // 0x1cc4164: 0x0  nop
    ctx->pc = 0x1cc4164u;
    // NOP
    ctx->pc = 0x1cc4168u;
}
