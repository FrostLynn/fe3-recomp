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

// Function: sub_01C78358
// Address: 0x1c78358 - 0x1c78398
void sub_01C78358_0x1c78358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78358_0x1c78358");
#endif

    switch (ctx->pc) {
        case 0x1c7836cu: goto label_1c7836c;
        default: break;
    }

    ctx->pc = 0x1c78358u;

    // 0x1c78358: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c78358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7835c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c78360: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c78360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c78364: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C78364u;
    SET_GPR_U32(ctx, 31, 0x1C7836Cu);
    ctx->pc = 0x1C78368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C78364u;
    // 0x1c78368: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C78364u, 0x1C7836Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7836Cu;
label_1c7836c:
    // 0x1c7836c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7836cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c78370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c78370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c78374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78378: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c78378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c7837c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1c7837cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c78380: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c78380u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78384: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1c78384u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c78388: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c78388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7838c: 0x871d8e4  j           func_1C76390
    ctx->pc = 0x1C7838Cu;
    ctx->pc = 0x1C78390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7838Cu;
    // 0x1c78390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C76390u;
    sub_01C76390_0x1c76390(rdram, ctx, runtime); return;
    ctx->pc = 0x1C78394u;
    // 0x1c78394: 0x0  nop
    ctx->pc = 0x1c78394u;
    // NOP
    ctx->pc = 0x1c78398u;
}
