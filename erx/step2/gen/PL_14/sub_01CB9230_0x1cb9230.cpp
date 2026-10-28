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

// Function: sub_01CB9230
// Address: 0x1cb9230 - 0x1cb9250
void sub_01CB9230_0x1cb9230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9230_0x1cb9230");
#endif

    ctx->pc = 0x1cb9230u;

    // 0x1cb9230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb9230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb9234: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1cb9234u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1cb9238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb9238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb923c: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x1cb923cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x1cb9240: 0x24a5ad40  addiu       $a1, $a1, -0x52C0
    ctx->pc = 0x1cb9240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946112));
    // 0x1cb9244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb9244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb9248: 0x872ddc0  j           func_1CB7700
    ctx->pc = 0x1CB9248u;
    ctx->pc = 0x1CB924Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9248u;
    // 0x1cb924c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7700u;
    sub_01CB7700_0x1cb7700(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB9250u;
}
