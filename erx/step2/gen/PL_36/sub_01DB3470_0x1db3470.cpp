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

// Function: sub_01DB3470
// Address: 0x1db3470 - 0x1db34c8
void sub_01DB3470_0x1db3470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB3470_0x1db3470");
#endif

    switch (ctx->pc) {
        case 0x1db349cu: goto label_1db349c;
        case 0x1db34a8u: goto label_1db34a8;
        default: break;
    }

    ctx->pc = 0x1db3470u;

    // 0x1db3470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db3470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db3474: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1db3474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1db3478: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db3478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db347c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db347cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db3480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db3480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db3484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db3484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db3488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db348c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1db348cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1db3490: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db3490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db3494: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB3494u;
    SET_GPR_U32(ctx, 31, 0x1DB349Cu);
    ctx->pc = 0x1DB3498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB3494u;
    // 0x1db3498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB3494u, 0x1DB349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB349Cu;
label_1db349c:
    // 0x1db349c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db349cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db34a0: 0xc76c3da  jal         func_1DB0F68
    ctx->pc = 0x1DB34A0u;
    SET_GPR_U32(ctx, 31, 0x1DB34A8u);
    ctx->pc = 0x1DB34A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB34A0u;
    // 0x1db34a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F68u, 0x1DB34A0u, 0x1DB34A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB34A8u;
label_1db34a8:
    // 0x1db34a8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1db34a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1db34ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db34acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db34b0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1db34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1db34b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db34b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db34b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db34b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db34bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db34bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db34c0: 0x876c66c  j           func_1DB19B0
    ctx->pc = 0x1DB34C0u;
    ctx->pc = 0x1DB34C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB34C0u;
    // 0x1db34c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB19B0u;
    sub_01DB19B0_0x1db19b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB34C8u;
}
