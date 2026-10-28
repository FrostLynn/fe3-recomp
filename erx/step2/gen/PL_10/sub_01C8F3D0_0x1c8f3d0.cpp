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

// Function: sub_01C8F3D0
// Address: 0x1c8f3d0 - 0x1c8f428
void sub_01C8F3D0_0x1c8f3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F3D0_0x1c8f3d0");
#endif

    switch (ctx->pc) {
        case 0x1c8f3fcu: goto label_1c8f3fc;
        case 0x1c8f408u: goto label_1c8f408;
        default: break;
    }

    ctx->pc = 0x1c8f3d0u;

    // 0x1c8f3d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c8f3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c8f3d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c8f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c8f3d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c8f3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c8f3dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c8f3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c8f3e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c8f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c8f3e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c8f3e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f3e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c8f3e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f3ec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c8f3ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c8f3f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c8f3f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f3f4: 0xc7233e2  jal         func_1C8CF88
    ctx->pc = 0x1C8F3F4u;
    SET_GPR_U32(ctx, 31, 0x1C8F3FCu);
    ctx->pc = 0x1C8F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F3F4u;
    // 0x1c8f3f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF88u, 0x1C8F3F4u, 0x1C8F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F3FCu;
label_1c8f3fc:
    // 0x1c8f3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f400: 0xc7233da  jal         func_1C8CF68
    ctx->pc = 0x1C8F400u;
    SET_GPR_U32(ctx, 31, 0x1C8F408u);
    ctx->pc = 0x1C8F404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F400u;
    // 0x1c8f404: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C8CF68u, 0x1C8F400u, 0x1C8F408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C8F408u;
label_1c8f408:
    // 0x1c8f408: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c8f408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c8f40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c8f40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f410: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c8f410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c8f414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c8f414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8f418: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c8f418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c8f41c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c8f41cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8f420: 0x8723670  j           func_1C8D9C0
    ctx->pc = 0x1C8F420u;
    ctx->pc = 0x1C8F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8F420u;
    // 0x1c8f424: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C8D9C0u;
    sub_01C8D9C0_0x1c8d9c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C8F428u;
}
