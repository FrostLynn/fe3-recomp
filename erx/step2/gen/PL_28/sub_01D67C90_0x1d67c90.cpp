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

// Function: sub_01D67C90
// Address: 0x1d67c90 - 0x1d67ca8
void sub_01D67C90_0x1d67c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67C90_0x1d67c90");
#endif

    ctx->pc = 0x1d67c90u;

    // 0x1d67c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67c94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d67c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d67c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d67c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67ca0: 0x8759c62  j           func_1D67188
    ctx->pc = 0x1D67CA0u;
    ctx->pc = 0x1D67CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67CA0u;
    // 0x1d67ca4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67188u;
    sub_01D67188_0x1d67188(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67CA8u;
}
