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

// Function: sub_01D9D540
// Address: 0x1d9d540 - 0x1d9d558
void sub_01D9D540_0x1d9d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D540_0x1d9d540");
#endif

    ctx->pc = 0x1d9d540u;

    // 0x1d9d540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9d548: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9d548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d54c: 0x8767260  j           func_1D9C980
    ctx->pc = 0x1D9D54Cu;
    ctx->pc = 0x1D9D550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D54Cu;
    // 0x1d9d550: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C980u;
    sub_01D9C980_0x1d9c980(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9D554u;
    // 0x1d9d554: 0x0  nop
    ctx->pc = 0x1d9d554u;
    // NOP
    ctx->pc = 0x1d9d558u;
}
