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

// Function: sub_01C02410
// Address: 0x1c02410 - 0x1c02428
void sub_01C02410_0x1c02410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02410_0x1c02410");
#endif

    ctx->pc = 0x1c02410u;

    // 0x1c02410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c02414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02418: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0241c: 0x87003d4  j           func_1C00F50
    ctx->pc = 0x1C0241Cu;
    ctx->pc = 0x1C02420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0241Cu;
    // 0x1c02420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00F50u;
    sub_01C00F50_0x1c00f50(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02424u;
    // 0x1c02424: 0x0  nop
    ctx->pc = 0x1c02424u;
    // NOP
    ctx->pc = 0x1c02428u;
}
