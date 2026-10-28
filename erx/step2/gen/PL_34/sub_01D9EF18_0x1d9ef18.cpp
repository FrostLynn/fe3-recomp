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

// Function: sub_01D9EF18
// Address: 0x1d9ef18 - 0x1d9ef38
void sub_01D9EF18_0x1d9ef18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EF18_0x1d9ef18");
#endif

    ctx->pc = 0x1d9ef18u;

    // 0x1d9ef18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9ef18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9ef1c: 0x3c0501da  lui         $a1, 0x1DA
    ctx->pc = 0x1d9ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)474 << 16));
    // 0x1d9ef20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9ef20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9ef24: 0x24a5fb00  addiu       $a1, $a1, -0x500
    ctx->pc = 0x1d9ef24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966016));
    // 0x1d9ef28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9ef28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ef2c: 0x876763e  j           func_1D9D8F8
    ctx->pc = 0x1D9EF2Cu;
    ctx->pc = 0x1D9EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EF2Cu;
    // 0x1d9ef30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9D8F8u;
    sub_01D9D8F8_0x1d9d8f8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9EF34u;
    // 0x1d9ef34: 0x0  nop
    ctx->pc = 0x1d9ef34u;
    // NOP
    ctx->pc = 0x1d9ef38u;
}
