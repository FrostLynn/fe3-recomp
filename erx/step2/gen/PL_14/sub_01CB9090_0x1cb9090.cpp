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

// Function: sub_01CB9090
// Address: 0x1cb9090 - 0x1cb90b0
void sub_01CB9090_0x1cb9090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB9090_0x1cb9090");
#endif

    ctx->pc = 0x1cb9090u;

    // 0x1cb9090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb9090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb9094: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cb9094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1cb9098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb9098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb909c: 0x3c0501cc  lui         $a1, 0x1CC
    ctx->pc = 0x1cb909cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)460 << 16));
    // 0x1cb90a0: 0x24a5a040  addiu       $a1, $a1, -0x5FC0
    ctx->pc = 0x1cb90a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942784));
    // 0x1cb90a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb90a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb90a8: 0x872d9ea  j           func_1CB67A8
    ctx->pc = 0x1CB90A8u;
    ctx->pc = 0x1CB90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB90A8u;
    // 0x1cb90ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67A8u;
    sub_01CB67A8_0x1cb67a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB90B0u;
}
