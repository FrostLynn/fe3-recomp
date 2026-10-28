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

// Function: sub_01D353E0
// Address: 0x1d353e0 - 0x1d35408
void sub_01D353E0_0x1d353e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D353E0_0x1d353e0");
#endif

    switch (ctx->pc) {
        case 0x1d353f4u: goto label_1d353f4;
        default: break;
    }

    ctx->pc = 0x1d353e0u;

    // 0x1d353e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d353e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d353e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d353e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d353e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d353e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d353ec: 0xc74cd60  jal         func_1D33580
    ctx->pc = 0x1D353ECu;
    SET_GPR_U32(ctx, 31, 0x1D353F4u);
    ctx->pc = 0x1D353F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D353ECu;
    // 0x1d353f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33580u, 0x1D353ECu, 0x1D353F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D353F4u;
label_1d353f4:
    // 0x1d353f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d353f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d353f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d353f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d353fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d353fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35400: 0x874cfee  j           func_1D33FB8
    ctx->pc = 0x1D35400u;
    ctx->pc = 0x1D35404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35400u;
    // 0x1d35404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33FB8u;
    sub_01D33FB8_0x1d33fb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D35408u;
}
