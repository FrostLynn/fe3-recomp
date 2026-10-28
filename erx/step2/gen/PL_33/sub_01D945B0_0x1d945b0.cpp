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

// Function: sub_01D945B0
// Address: 0x1d945b0 - 0x1d945c8
void sub_01D945B0_0x1d945b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D945B0_0x1d945b0");
#endif

    ctx->pc = 0x1d945b0u;

    // 0x1d945b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d945b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d945b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d945b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d945b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d945b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d945bc: 0x8764a20  j           func_1D92880
    ctx->pc = 0x1D945BCu;
    ctx->pc = 0x1D945C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D945BCu;
    // 0x1d945c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92880u;
    sub_01D92880_0x1d92880(rdram, ctx, runtime); return;
    ctx->pc = 0x1D945C4u;
    // 0x1d945c4: 0x0  nop
    ctx->pc = 0x1d945c4u;
    // NOP
    ctx->pc = 0x1d945c8u;
}
