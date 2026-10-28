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

// Function: sub_01DBCF60
// Address: 0x1dbcf60 - 0x1dbcf88
void sub_01DBCF60_0x1dbcf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBCF60_0x1dbcf60");
#endif

    switch (ctx->pc) {
        case 0x1dbcf74u: goto label_1dbcf74;
        default: break;
    }

    ctx->pc = 0x1dbcf60u;

    // 0x1dbcf60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dbcf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dbcf64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbcf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbcf68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dbcf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dbcf6c: 0xc76ee8c  jal         func_1DBBA30
    ctx->pc = 0x1DBCF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBCF74u);
    ctx->pc = 0x1DBCF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCF6Cu;
    // 0x1dbcf70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBA30u, 0x1DBCF6Cu, 0x1DBCF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBCF74u;
label_1dbcf74:
    // 0x1dbcf74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbcf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcf78: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dbcf78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbcf7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbcf7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcf80: 0x876f37a  j           func_1DBCDE8
    ctx->pc = 0x1DBCF80u;
    ctx->pc = 0x1DBCF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBCF80u;
    // 0x1dbcf84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCDE8u;
    sub_01DBCDE8_0x1dbcde8(rdram, ctx, runtime); return;
    ctx->pc = 0x1DBCF88u;
}
