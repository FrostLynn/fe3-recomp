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

// Function: sub_01D0E5C8
// Address: 0x1d0e5c8 - 0x1d0e5e8
void sub_01D0E5C8_0x1d0e5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E5C8_0x1d0e5c8");
#endif

    ctx->pc = 0x1d0e5c8u;

    // 0x1d0e5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e5cc: 0x3c0501d1  lui         $a1, 0x1D1
    ctx->pc = 0x1d0e5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)465 << 16));
    // 0x1d0e5d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0e5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0e5d4: 0x24a50a50  addiu       $a1, $a1, 0xA50
    ctx->pc = 0x1d0e5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
    // 0x1d0e5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0e5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e5dc: 0x8743346  j           func_1D0CD18
    ctx->pc = 0x1D0E5DCu;
    ctx->pc = 0x1D0E5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E5DCu;
    // 0x1d0e5e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0CD18u;
    sub_01D0CD18_0x1d0cd18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D0E5E4u;
    // 0x1d0e5e4: 0x0  nop
    ctx->pc = 0x1d0e5e4u;
    // NOP
    ctx->pc = 0x1d0e5e8u;
}
