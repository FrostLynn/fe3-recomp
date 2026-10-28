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

// Function: sub_01D67C38
// Address: 0x1d67c38 - 0x1d67c90
void sub_01D67C38_0x1d67c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D67C38_0x1d67c38");
#endif

    switch (ctx->pc) {
        case 0x1d67c64u: goto label_1d67c64;
        case 0x1d67c70u: goto label_1d67c70;
        default: break;
    }

    ctx->pc = 0x1d67c38u;

    // 0x1d67c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d67c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d67c3c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d67c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d67c40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d67c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d67c44: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d67c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d67c48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d67c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d67c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d67c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d67c50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c54: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d67c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d67c58: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d67c58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c5c: 0xc7599d8  jal         func_1D66760
    ctx->pc = 0x1D67C5Cu;
    SET_GPR_U32(ctx, 31, 0x1D67C64u);
    ctx->pc = 0x1D67C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67C5Cu;
    // 0x1d67c60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66760u, 0x1D67C5Cu, 0x1D67C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67C64u;
label_1d67c64:
    // 0x1d67c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c68: 0xc7599d0  jal         func_1D66740
    ctx->pc = 0x1D67C68u;
    SET_GPR_U32(ctx, 31, 0x1D67C70u);
    ctx->pc = 0x1D67C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67C68u;
    // 0x1d67c6c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66740u, 0x1D67C68u, 0x1D67C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D67C70u;
label_1d67c70:
    // 0x1d67c70: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d67c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d67c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d67c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c78: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d67c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d67c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d67c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d67c80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d67c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d67c84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d67c84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d67c88: 0x8759c60  j           func_1D67180
    ctx->pc = 0x1D67C88u;
    ctx->pc = 0x1D67C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D67C88u;
    // 0x1d67c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D67180u;
    sub_01D67180_0x1d67180(rdram, ctx, runtime); return;
    ctx->pc = 0x1D67C90u;
}
