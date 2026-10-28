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

// Function: sub_01D355F0
// Address: 0x1d355f0 - 0x1d35608
void sub_01D355F0_0x1d355f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D355F0_0x1d355f0");
#endif

    ctx->pc = 0x1d355f0u;

    // 0x1d355f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d355f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d355f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d355f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d355f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d355f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d355fc: 0x874d0e4  j           func_1D34390
    ctx->pc = 0x1D355FCu;
    ctx->pc = 0x1D35600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D355FCu;
    // 0x1d35600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D34390u;
    sub_01D34390_0x1d34390(rdram, ctx, runtime); return;
    ctx->pc = 0x1D35604u;
    // 0x1d35604: 0x0  nop
    ctx->pc = 0x1d35604u;
    // NOP
    ctx->pc = 0x1d35608u;
}
