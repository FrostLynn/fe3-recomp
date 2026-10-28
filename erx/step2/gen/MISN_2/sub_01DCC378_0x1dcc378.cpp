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

// Function: sub_01DCC378
// Address: 0x1dcc378 - 0x1dcc3d0
void sub_01DCC378_0x1dcc378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DCC378_0x1dcc378");
#endif

    switch (ctx->pc) {
        case 0x1dcc398u: goto label_1dcc398;
        case 0x1dcc3a8u: goto label_1dcc3a8;
        default: break;
    }

    ctx->pc = 0x1dcc378u;

    // 0x1dcc378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dcc378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dcc37c: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc37cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1dcc380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1dcc384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dcc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dcc388: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1dcc388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1dcc38c: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x1dcc38cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1dcc390: 0xc772ecc  jal         func_1DCBB30
    ctx->pc = 0x1DCC390u;
    SET_GPR_U32(ctx, 31, 0x1DCC398u);
    ctx->pc = 0x1DCC394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC390u;
    // 0x1dcc394: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB30u, 0x1DCC390u, 0x1DCC398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC398u;
label_1dcc398:
    // 0x1dcc398: 0x8f8f8030  lw          $t7, -0x7FD0($gp)
    ctx->pc = 0x1dcc398u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc39c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1dcc39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dcc3a0: 0xc772ed0  jal         func_1DCBB40
    ctx->pc = 0x1DCC3A0u;
    SET_GPR_U32(ctx, 31, 0x1DCC3A8u);
    ctx->pc = 0x1DCC3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC3A0u;
    // 0x1dcc3a4: 0x8de400e0  lw          $a0, 0xE0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DCBB40u, 0x1DCC3A0u, 0x1DCC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCC3A8u;
label_1dcc3a8:
    // 0x1dcc3a8: 0x8f848030  lw          $a0, -0x7FD0($gp)
    ctx->pc = 0x1dcc3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934576)));
    // 0x1dcc3ac: 0x2405270f  addiu       $a1, $zero, 0x270F
    ctx->pc = 0x1dcc3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dcc3b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dcc3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcc3b4: 0x2406270f  addiu       $a2, $zero, 0x270F
    ctx->pc = 0x1dcc3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
    // 0x1dcc3b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1dcc3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dcc3bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1dcc3bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dcc3c0: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1dcc3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1dcc3c4: 0x8772ee0  j           func_1DCBB80
    ctx->pc = 0x1DCC3C4u;
    ctx->pc = 0x1DCC3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCC3C4u;
    // 0x1dcc3c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB80u;
    sub_01DCBB80_0x1dcbb80(rdram, ctx, runtime); return;
    ctx->pc = 0x1DCC3CCu;
    // 0x1dcc3cc: 0x0  nop
    ctx->pc = 0x1dcc3ccu;
    // NOP
    ctx->pc = 0x1dcc3d0u;
}
