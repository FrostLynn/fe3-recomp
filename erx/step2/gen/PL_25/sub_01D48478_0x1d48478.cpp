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

// Function: sub_01D48478
// Address: 0x1d48478 - 0x1d48490
void sub_01D48478_0x1d48478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48478_0x1d48478");
#endif

    ctx->pc = 0x1d48478u;

    // 0x1d48478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4847c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4847cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d48480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d48480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48484: 0x8751b5c  j           func_1D46D70
    ctx->pc = 0x1D48484u;
    ctx->pc = 0x1D48488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48484u;
    // 0x1d48488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46D70u;
    sub_01D46D70_0x1d46d70(rdram, ctx, runtime); return;
    ctx->pc = 0x1D4848Cu;
    // 0x1d4848c: 0x0  nop
    ctx->pc = 0x1d4848cu;
    // NOP
    ctx->pc = 0x1d48490u;
}
