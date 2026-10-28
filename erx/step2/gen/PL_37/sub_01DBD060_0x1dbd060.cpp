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

// Function: sub_01DBD060
// Address: 0x1dbd060 - 0x1dbd078
void sub_01DBD060_0x1dbd060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBD060_0x1dbd060");
#endif

    ctx->pc = 0x1dbd060u;

    // 0x1dbd060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbd060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbd064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbd064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbd068: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbd068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbd06c: 0x876ee90  j           func_1DBBA40
    ctx->pc = 0x1DBD06Cu;
    ctx->pc = 0x1DBD070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBD06Cu;
    // 0x1dbd070: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA40u;
    sub_01DBBA40_0x1dbba40(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBD074u;
    // 0x1dbd074: 0x0  nop
    ctx->pc = 0x1dbd074u;
    // NOP
    ctx->pc = 0x1dbd078u;
}
