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

// Function: sub_01D947A8
// Address: 0x1d947a8 - 0x1d947c0
void sub_01D947A8_0x1d947a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D947A8_0x1d947a8");
#endif

    ctx->pc = 0x1d947a8u;

    // 0x1d947a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d947a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d947ac: 0x2405008e  addiu       $a1, $zero, 0x8E
    ctx->pc = 0x1d947acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
    // 0x1d947b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d947b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d947b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d947b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d947b8: 0x8764cac  j           func_1D932B0
    ctx->pc = 0x1D947B8u;
    ctx->pc = 0x1D947BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D947B8u;
    // 0x1d947bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D932B0u;
    sub_01D932B0_0x1d932b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D947C0u;
}
