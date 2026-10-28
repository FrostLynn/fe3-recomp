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

// Function: sub_01CC3050
// Address: 0x1cc3050 - 0x1cc3068
void sub_01CC3050_0x1cc3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3050_0x1cc3050");
#endif

    ctx->pc = 0x1cc3050u;

    // 0x1cc3050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc3054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc3054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc3058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc3058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc305c: 0x8730922  j           func_1CC2488
    ctx->pc = 0x1CC305Cu;
    ctx->pc = 0x1CC3060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC305Cu;
    // 0x1cc3060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2488u;
    sub_01CC2488_0x1cc2488(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC3064u;
    // 0x1cc3064: 0x0  nop
    ctx->pc = 0x1cc3064u;
    // NOP
    ctx->pc = 0x1cc3068u;
}
