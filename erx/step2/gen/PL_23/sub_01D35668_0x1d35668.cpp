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

// Function: sub_01D35668
// Address: 0x1d35668 - 0x1d35688
void sub_01D35668_0x1d35668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35668_0x1d35668");
#endif

    ctx->pc = 0x1d35668u;

    // 0x1d35668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3566c: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x1d3566cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x1d35670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d35670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35674: 0x24a561d0  addiu       $a1, $a1, 0x61D0
    ctx->pc = 0x1d35674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25040));
    // 0x1d35678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3567c: 0x874d13e  j           func_1D344F8
    ctx->pc = 0x1D3567Cu;
    ctx->pc = 0x1D35680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3567Cu;
    // 0x1d35680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D344F8u;
    sub_01D344F8_0x1d344f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D35684u;
    // 0x1d35684: 0x0  nop
    ctx->pc = 0x1d35684u;
    // NOP
    ctx->pc = 0x1d35688u;
}
