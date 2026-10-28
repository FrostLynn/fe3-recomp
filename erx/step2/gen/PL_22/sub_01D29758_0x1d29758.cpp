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

// Function: sub_01D29758
// Address: 0x1d29758 - 0x1d29778
void sub_01D29758_0x1d29758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D29758_0x1d29758");
#endif

    ctx->pc = 0x1d29758u;

    // 0x1d29758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d29758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2975c: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x1d2975cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x1d29760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d29760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d29764: 0x24a5b5e0  addiu       $a1, $a1, -0x4A20
    ctx->pc = 0x1d29764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948320));
    // 0x1d29768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d29768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2976c: 0x8749f06  j           func_1D27C18
    ctx->pc = 0x1D2976Cu;
    ctx->pc = 0x1D29770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2976Cu;
    // 0x1d29770: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D27C18u;
    sub_01D27C18_0x1d27c18(rdram, ctx, runtime); return;
    ctx->pc = 0x1D29774u;
    // 0x1d29774: 0x0  nop
    ctx->pc = 0x1d29774u;
    // NOP
    ctx->pc = 0x1d29778u;
}
