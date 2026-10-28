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

// Function: sub_01C02370
// Address: 0x1c02370 - 0x1c02388
void sub_01C02370_0x1c02370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02370_0x1c02370");
#endif

    ctx->pc = 0x1c02370u;

    // 0x1c02370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c02374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0237c: 0x87003d4  j           func_1C00F50
    ctx->pc = 0x1C0237Cu;
    ctx->pc = 0x1C02380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0237Cu;
    // 0x1c02380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00F50u;
    sub_01C00F50_0x1c00f50(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02384u;
    // 0x1c02384: 0x0  nop
    ctx->pc = 0x1c02384u;
    // NOP
    ctx->pc = 0x1c02388u;
}
