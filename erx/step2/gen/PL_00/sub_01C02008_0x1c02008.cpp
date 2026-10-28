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

// Function: sub_01C02008
// Address: 0x1c02008 - 0x1c02020
void sub_01C02008_0x1c02008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02008_0x1c02008");
#endif

    ctx->pc = 0x1c02008u;

    // 0x1c02008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0200c: 0x2405003d  addiu       $a1, $zero, 0x3D
    ctx->pc = 0x1c0200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1c02010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c02010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02018: 0x8700380  j           func_1C00E00
    ctx->pc = 0x1C02018u;
    ctx->pc = 0x1C0201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02018u;
    // 0x1c0201c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E00u;
    sub_01C00E00_0x1c00e00(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02020u;
}
