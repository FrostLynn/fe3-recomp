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

// Function: sub_01D48460
// Address: 0x1d48460 - 0x1d48478
void sub_01D48460_0x1d48460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48460_0x1d48460");
#endif

    ctx->pc = 0x1d48460u;

    // 0x1d48460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d48464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d48464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d48468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d48468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4846c: 0x8751b0e  j           func_1D46C38
    ctx->pc = 0x1D4846Cu;
    ctx->pc = 0x1D48470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4846Cu;
    // 0x1d48470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46C38u;
    sub_01D46C38_0x1d46c38(rdram, ctx, runtime); return;
    ctx->pc = 0x1D48474u;
    // 0x1d48474: 0x0  nop
    ctx->pc = 0x1d48474u;
    // NOP
    ctx->pc = 0x1d48478u;
}
