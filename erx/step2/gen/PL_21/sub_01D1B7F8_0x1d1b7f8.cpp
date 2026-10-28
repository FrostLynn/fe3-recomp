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

// Function: sub_01D1B7F8
// Address: 0x1d1b7f8 - 0x1d1b810
void sub_01D1B7F8_0x1d1b7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1B7F8_0x1d1b7f8");
#endif

    ctx->pc = 0x1d1b7f8u;

    // 0x1d1b7f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1b7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1b7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d1b7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d1b800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d1b800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1b804: 0x8746830  j           func_1D1A0C0
    ctx->pc = 0x1D1B804u;
    ctx->pc = 0x1D1B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1B804u;
    // 0x1d1b808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1A0C0u;
    sub_01D1A0C0_0x1d1a0c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D1B80Cu;
    // 0x1d1b80c: 0x0  nop
    ctx->pc = 0x1d1b80cu;
    // NOP
    ctx->pc = 0x1d1b810u;
}
