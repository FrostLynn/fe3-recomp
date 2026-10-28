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

// Function: sub_01C51850
// Address: 0x1c51850 - 0x1c51868
void sub_01C51850_0x1c51850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C51850_0x1c51850");
#endif

    ctx->pc = 0x1c51850u;

    // 0x1c51850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c51850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c51854: 0x24050085  addiu       $a1, $zero, 0x85
    ctx->pc = 0x1c51854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x1c51858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c51858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c5185c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c5185cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c51860: 0x87140f2  j           func_1C503C8
    ctx->pc = 0x1C51860u;
    ctx->pc = 0x1C51864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C51860u;
    // 0x1c51864: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C503C8u;
    sub_01C503C8_0x1c503c8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C51868u;
}
