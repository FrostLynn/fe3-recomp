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

// Function: sub_01CCF980
// Address: 0x1ccf980 - 0x1ccf9d0
void sub_01CCF980_0x1ccf980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF980_0x1ccf980");
#endif

    switch (ctx->pc) {
        case 0x1ccf9acu: goto label_1ccf9ac;
        case 0x1ccf9b8u: goto label_1ccf9b8;
        default: break;
    }

    ctx->pc = 0x1ccf980u;

    // 0x1ccf980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf984: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ccf984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ccf988: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccf988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccf98c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccf98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccf990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccf990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccf994: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccf994u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccf998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf99c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ccf99cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccf9a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ccf9a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf9a4: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCF9A4u;
    SET_GPR_U32(ctx, 31, 0x1CCF9ACu);
    ctx->pc = 0x1CCF9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF9A4u;
    // 0x1ccf9a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCF9A4u, 0x1CCF9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF9ACu;
label_1ccf9ac:
    // 0x1ccf9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccf9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccf9b0: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCF9B0u;
    SET_GPR_U32(ctx, 31, 0x1CCF9B8u);
    ctx->pc = 0x1CCF9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF9B0u;
    // 0x1ccf9b4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCF9B0u, 0x1CCF9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF9B8u;
label_1ccf9b8:
    // 0x1ccf9b8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1ccf9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1ccf9bc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ccf9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ccf9c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccf9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccf9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccf9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF9C8u;
        // 0x1ccf9cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF9D0u;
}
