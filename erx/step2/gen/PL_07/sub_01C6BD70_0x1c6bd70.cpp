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

// Function: sub_01C6BD70
// Address: 0x1c6bd70 - 0x1c6bd88
void sub_01C6BD70_0x1c6bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6BD70_0x1c6bd70");
#endif

    ctx->pc = 0x1c6bd70u;

    // 0x1c6bd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c6bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6bd74: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x1c6bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1c6bd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6bd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6bd7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6bd7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6bd80: 0x871aa2c  j           func_1C6A8B0
    ctx->pc = 0x1C6BD80u;
    ctx->pc = 0x1C6BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6BD80u;
    // 0x1c6bd84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6A8B0u;
    sub_01C6A8B0_0x1c6a8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C6BD88u;
}
