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

// Function: sub_01D70F40
// Address: 0x1d70f40 - 0x1d70f58
void sub_01D70F40_0x1d70f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D70F40_0x1d70f40");
#endif

    ctx->pc = 0x1d70f40u;

    // 0x1d70f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d70f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d70f44: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x1d70f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1d70f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d70f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d70f4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d70f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d70f50: 0x875c29a  j           func_1D70A68
    ctx->pc = 0x1D70F50u;
    ctx->pc = 0x1D70F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D70F50u;
    // 0x1d70f54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70A68u;
    sub_01D70A68_0x1d70a68(rdram, ctx, runtime); return;
    ctx->pc = 0x1D70F58u;
}
