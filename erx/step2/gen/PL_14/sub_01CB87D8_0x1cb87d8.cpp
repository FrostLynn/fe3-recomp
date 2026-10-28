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

// Function: sub_01CB87D8
// Address: 0x1cb87d8 - 0x1cb87f0
void sub_01CB87D8_0x1cb87d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB87D8_0x1cb87d8");
#endif

    ctx->pc = 0x1cb87d8u;

    // 0x1cb87d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb87d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb87dc: 0x24050094  addiu       $a1, $zero, 0x94
    ctx->pc = 0x1cb87dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
    // 0x1cb87e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb87e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb87e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb87e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb87e8: 0x872dc6e  j           func_1CB71B8
    ctx->pc = 0x1CB87E8u;
    ctx->pc = 0x1CB87ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB87E8u;
    // 0x1cb87ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB71B8u;
    sub_01CB71B8_0x1cb71b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB87F0u;
}
