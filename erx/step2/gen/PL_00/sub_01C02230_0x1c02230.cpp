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

// Function: sub_01C02230
// Address: 0x1c02230 - 0x1c02248
void sub_01C02230_0x1c02230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02230_0x1c02230");
#endif

    ctx->pc = 0x1c02230u;

    // 0x1c02230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c02234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0223c: 0x87003d4  j           func_1C00F50
    ctx->pc = 0x1C0223Cu;
    ctx->pc = 0x1C02240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0223Cu;
    // 0x1c02240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00F50u;
    sub_01C00F50_0x1c00f50(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02244u;
    // 0x1c02244: 0x0  nop
    ctx->pc = 0x1c02244u;
    // NOP
    ctx->pc = 0x1c02248u;
}
