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

// Function: sub_01C9B468
// Address: 0x1c9b468 - 0x1c9b4b0
void sub_01C9B468_0x1c9b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B468_0x1c9b468");
#endif

    switch (ctx->pc) {
        case 0x1c9b494u: goto label_1c9b494;
        default: break;
    }

    ctx->pc = 0x1c9b468u;

    // 0x1c9b468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b46c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9b474: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9b474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9b47c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9b47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9b480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b484: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9b484u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b488: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9b488u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9b48c: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9B48Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B494u);
    ctx->pc = 0x1C9B490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B48Cu;
    // 0x1c9b490: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9B48Cu, 0x1C9B494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B494u;
label_1c9b494:
    // 0x1c9b494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9b494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9b498: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9b498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9b49c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9b49cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b4a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1c9b4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9b4a4: 0x87262da  j           func_1C98B68
    ctx->pc = 0x1C9B4A4u;
    ctx->pc = 0x1C9B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B4A4u;
    // 0x1c9b4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    sub_01C98B68_0x1c98b68(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9B4ACu;
    // 0x1c9b4ac: 0x0  nop
    ctx->pc = 0x1c9b4acu;
    // NOP
    ctx->pc = 0x1c9b4b0u;
}
