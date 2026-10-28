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

// Function: sub_01CC4998
// Address: 0x1cc4998 - 0x1cc49f0
void sub_01CC4998_0x1cc4998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4998_0x1cc4998");
#endif

    switch (ctx->pc) {
        case 0x1cc49c4u: goto label_1cc49c4;
        case 0x1cc49d0u: goto label_1cc49d0;
        default: break;
    }

    ctx->pc = 0x1cc4998u;

    // 0x1cc4998: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc4998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc499c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cc499cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc49a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc49a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc49a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cc49a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc49a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cc49a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cc49ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cc49acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc49b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49b4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cc49b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc49b8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cc49b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49bc: 0xc730924  jal         func_1CC2490
    ctx->pc = 0x1CC49BCu;
    SET_GPR_U32(ctx, 31, 0x1CC49C4u);
    ctx->pc = 0x1CC49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC49BCu;
    // 0x1cc49c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2490u, 0x1CC49BCu, 0x1CC49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC49C4u;
label_1cc49c4:
    // 0x1cc49c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc49c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49c8: 0xc73091c  jal         func_1CC2470
    ctx->pc = 0x1CC49C8u;
    SET_GPR_U32(ctx, 31, 0x1CC49D0u);
    ctx->pc = 0x1CC49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC49C8u;
    // 0x1cc49cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2470u, 0x1CC49C8u, 0x1CC49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC49D0u;
label_1cc49d0:
    // 0x1cc49d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cc49d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cc49d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc49d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49d8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cc49d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cc49dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc49dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc49e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cc49e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc49e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc49e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc49e8: 0x8730bae  j           func_1CC2EB8
    ctx->pc = 0x1CC49E8u;
    ctx->pc = 0x1CC49ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC49E8u;
    // 0x1cc49ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2EB8u;
    sub_01CC2EB8_0x1cc2eb8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CC49F0u;
}
