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

// Function: sub_01CF1400
// Address: 0x1cf1400 - 0x1cf1418
void sub_01CF1400_0x1cf1400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF1400_0x1cf1400");
#endif

    ctx->pc = 0x1cf1400u;

    // 0x1cf1400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf1400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf1404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf1404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf1408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf1408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf140c: 0x873c016  j           func_1CF0058
    ctx->pc = 0x1CF140Cu;
    ctx->pc = 0x1CF1410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF140Cu;
    // 0x1cf1410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF0058u;
    sub_01CF0058_0x1cf0058(rdram, ctx, runtime); return;
    ctx->pc = 0x1CF1414u;
    // 0x1cf1414: 0x0  nop
    ctx->pc = 0x1cf1414u;
    // NOP
    ctx->pc = 0x1cf1418u;
}
