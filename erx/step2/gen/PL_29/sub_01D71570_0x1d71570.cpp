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

// Function: sub_01D71570
// Address: 0x1d71570 - 0x1d71588
void sub_01D71570_0x1d71570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71570_0x1d71570");
#endif

    ctx->pc = 0x1d71570u;

    // 0x1d71570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d71570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d71574: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d71574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d71578: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d71578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7157c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7157cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d71580: 0x875c2a2  j           func_1D70A88
    ctx->pc = 0x1D71580u;
    ctx->pc = 0x1D71584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D71580u;
    // 0x1d71584: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D70A88u;
    sub_01D70A88_0x1d70a88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D71588u;
}
