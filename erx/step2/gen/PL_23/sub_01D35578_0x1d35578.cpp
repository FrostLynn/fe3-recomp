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

// Function: sub_01D35578
// Address: 0x1d35578 - 0x1d35590
void sub_01D35578_0x1d35578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35578_0x1d35578");
#endif

    ctx->pc = 0x1d35578u;

    // 0x1d35578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d3557c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3557cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d35580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35584: 0x874d0b6  j           func_1D342D8
    ctx->pc = 0x1D35584u;
    ctx->pc = 0x1D35588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35584u;
    // 0x1d35588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D342D8u;
    sub_01D342D8_0x1d342d8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D3558Cu;
    // 0x1d3558c: 0x0  nop
    ctx->pc = 0x1d3558cu;
    // NOP
    ctx->pc = 0x1d35590u;
}
