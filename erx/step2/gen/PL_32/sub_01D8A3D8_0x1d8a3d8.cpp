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

// Function: sub_01D8A3D8
// Address: 0x1d8a3d8 - 0x1d8a428
void sub_01D8A3D8_0x1d8a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A3D8_0x1d8a3d8");
#endif

    switch (ctx->pc) {
        case 0x1d8a404u: goto label_1d8a404;
        default: break;
    }

    ctx->pc = 0x1d8a3d8u;

    // 0x1d8a3d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a3e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a3e4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8a3e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8a3ec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8a3ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a3f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8a3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a3f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a3f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a3f8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d8a3f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d8a3fc: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A3FCu;
    SET_GPR_U32(ctx, 31, 0x1D8A404u);
    ctx->pc = 0x1D8A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A3FCu;
    // 0x1d8a400: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A3FCu, 0x1D8A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A404u;
label_1d8a404:
    // 0x1d8a404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a408: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8a408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a40c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a40cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a410: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x1d8a410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x1d8a414: 0x24060106  addiu       $a2, $zero, 0x106
    ctx->pc = 0x1d8a414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x1d8a418: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8a418u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a41c: 0x8762522  j           func_1D89488
    ctx->pc = 0x1D8A41Cu;
    ctx->pc = 0x1D8A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A41Cu;
    // 0x1d8a420: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D89488u;
    sub_01D89488_0x1d89488(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8A424u;
    // 0x1d8a424: 0x0  nop
    ctx->pc = 0x1d8a424u;
    // NOP
    ctx->pc = 0x1d8a428u;
}
