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

// Function: sub_01C505A8
// Address: 0x1c505a8 - 0x1c505c0
void sub_01C505A8_0x1c505a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C505A8_0x1c505a8");
#endif

    ctx->pc = 0x1c505a8u;

    // 0x1c505a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c505a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c505ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c505acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c505b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c505b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c505b4: 0x8713e6c  j           func_1C4F9B0
    ctx->pc = 0x1C505B4u;
    ctx->pc = 0x1C505B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C505B4u;
    // 0x1c505b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4F9B0u;
    sub_01C4F9B0_0x1c4f9b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C505BCu;
    // 0x1c505bc: 0x0  nop
    ctx->pc = 0x1c505bcu;
    // NOP
    ctx->pc = 0x1c505c0u;
}
