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

// Function: sub_01D67678
// Address: 0x1d67678 - 0x1d67690
void sub_01D67678_0x1d67678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67678_0x1d67678");
#endif

    ctx->pc = 0x1d67678u;

    // 0x1d67678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d6767c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d67680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d67680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67684: 0x8759c5c  j           func_1D67170
    ctx->pc = 0x1D67684u;
    ctx->pc = 0x1D67688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67684u;
    // 0x1d67688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67170u;
    sub_01D67170_0x1d67170(rdram, ctx, runtime); return;
    ctx->pc = 0x1D6768Cu;
    // 0x1d6768c: 0x0  nop
    ctx->pc = 0x1d6768cu;
    // NOP
    ctx->pc = 0x1d67690u;
}
