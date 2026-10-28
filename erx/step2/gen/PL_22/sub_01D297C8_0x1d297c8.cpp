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

// Function: sub_01D297C8
// Address: 0x1d297c8 - 0x1d297e0
void sub_01D297C8_0x1d297c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D297C8_0x1d297c8");
#endif

    ctx->pc = 0x1d297c8u;

    // 0x1d297c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d297c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d297cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d297ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d297d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d297d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d297d4: 0x8749ed4  j           func_1D27B50
    ctx->pc = 0x1D297D4u;
    ctx->pc = 0x1D297D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D297D4u;
    // 0x1d297d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27B50u;
    sub_01D27B50_0x1d27b50(rdram, ctx, runtime); return;
    ctx->pc = 0x1D297DCu;
    // 0x1d297dc: 0x0  nop
    ctx->pc = 0x1d297dcu;
    // NOP
    ctx->pc = 0x1d297e0u;
}
