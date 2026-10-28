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

// Function: sub_01D47D88
// Address: 0x1d47d88 - 0x1d47da0
void sub_01D47D88_0x1d47d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47D88_0x1d47d88");
#endif

    ctx->pc = 0x1d47d88u;

    // 0x1d47d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47d8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d47d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d47d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d47d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47d94: 0x8751a04  j           func_1D46810
    ctx->pc = 0x1D47D94u;
    ctx->pc = 0x1D47D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47D94u;
    // 0x1d47d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D46810u;
    sub_01D46810_0x1d46810(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47D9Cu;
    // 0x1d47d9c: 0x0  nop
    ctx->pc = 0x1d47d9cu;
    // NOP
    ctx->pc = 0x1d47da0u;
}
