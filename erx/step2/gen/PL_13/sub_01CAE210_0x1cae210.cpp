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

// Function: sub_01CAE210
// Address: 0x1cae210 - 0x1cae228
void sub_01CAE210_0x1cae210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAE210_0x1cae210");
#endif

    ctx->pc = 0x1cae210u;

    // 0x1cae210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cae210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cae214: 0x24050084  addiu       $a1, $zero, 0x84
    ctx->pc = 0x1cae214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1cae218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cae218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cae21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cae21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cae220: 0x872b6da  j           func_1CADB68
    ctx->pc = 0x1CAE220u;
    ctx->pc = 0x1CAE224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE220u;
    // 0x1cae224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CADB68u;
    sub_01CADB68_0x1cadb68(rdram, ctx, runtime); return;
    ctx->pc = 0x1CAE228u;
}
