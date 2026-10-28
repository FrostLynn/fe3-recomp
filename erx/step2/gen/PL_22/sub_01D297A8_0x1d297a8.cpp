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

// Function: sub_01D297A8
// Address: 0x1d297a8 - 0x1d297c8
void sub_01D297A8_0x1d297a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D297A8_0x1d297a8");
#endif

    ctx->pc = 0x1d297a8u;

    // 0x1d297a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d297a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d297ac: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x1d297acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x1d297b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d297b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d297b4: 0x24a5c320  addiu       $a1, $a1, -0x3CE0
    ctx->pc = 0x1d297b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951712));
    // 0x1d297b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d297b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d297bc: 0x8749f06  j           func_1D27C18
    ctx->pc = 0x1D297BCu;
    ctx->pc = 0x1D297C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D297BCu;
    // 0x1d297c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27C18u;
    sub_01D27C18_0x1d27c18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D297C4u;
    // 0x1d297c4: 0x0  nop
    ctx->pc = 0x1d297c4u;
    // NOP
    ctx->pc = 0x1d297c8u;
}
