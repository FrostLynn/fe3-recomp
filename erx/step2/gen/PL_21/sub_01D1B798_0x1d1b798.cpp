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

// Function: sub_01D1B798
// Address: 0x1d1b798 - 0x1d1b7b8
void sub_01D1B798_0x1d1b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B798_0x1d1b798");
#endif

    ctx->pc = 0x1d1b798u;

    // 0x1d1b798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b79c: 0x3c0501d2  lui         $a1, 0x1D2
    ctx->pc = 0x1d1b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)466 << 16));
    // 0x1d1b7a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b7a4: 0x24a5f600  addiu       $a1, $a1, -0xA00
    ctx->pc = 0x1d1b7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
    // 0x1d1b7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b7ac: 0x8746814  j           func_1D1A050
    ctx->pc = 0x1D1B7ACu;
    ctx->pc = 0x1D1B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B7ACu;
    // 0x1d1b7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A050u;
    sub_01D1A050_0x1d1a050(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1B7B4u;
    // 0x1d1b7b4: 0x0  nop
    ctx->pc = 0x1d1b7b4u;
    // NOP
    ctx->pc = 0x1d1b7b8u;
}
