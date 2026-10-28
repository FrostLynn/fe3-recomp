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

// Function: sub_01D48330
// Address: 0x1d48330 - 0x1d48388
void sub_01D48330_0x1d48330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D48330_0x1d48330");
#endif

    switch (ctx->pc) {
        case 0x1d4835cu: goto label_1d4835c;
        case 0x1d48368u: goto label_1d48368;
        default: break;
    }

    ctx->pc = 0x1d48330u;

    // 0x1d48330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d48330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d48334: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d48334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d48338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d48338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d4833c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d4833cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d48340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d48340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d48344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d48344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48348: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d48348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4834c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d4834cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d48350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d48350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48354: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D48354u;
    SET_GPR_U32(ctx, 31, 0x1D4835Cu);
    ctx->pc = 0x1D48358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48354u;
    // 0x1d48358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D48354u, 0x1D4835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4835Cu;
label_1d4835c:
    // 0x1d4835c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4835cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48360: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D48360u;
    SET_GPR_U32(ctx, 31, 0x1D48368u);
    ctx->pc = 0x1D48364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48360u;
    // 0x1d48364: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D48360u, 0x1D48368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D48368u;
label_1d48368:
    // 0x1d48368: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d48368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d4836c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4836cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48370: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d48370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d48374: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d48374u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d48378: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d48378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d4837c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d4837cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d48380: 0x87519ec  j           func_1D467B0
    ctx->pc = 0x1D48380u;
    ctx->pc = 0x1D48384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48380u;
    // 0x1d48384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D467B0u;
    sub_01D467B0_0x1d467b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D48388u;
}
