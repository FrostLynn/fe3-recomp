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

// Function: sub_01C449D0
// Address: 0x1c449d0 - 0x1c44a20
void sub_01C449D0_0x1c449d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C449D0_0x1c449d0");
#endif

    switch (ctx->pc) {
        case 0x1c449fcu: goto label_1c449fc;
        case 0x1c44a08u: goto label_1c44a08;
        default: break;
    }

    ctx->pc = 0x1c449d0u;

    // 0x1c449d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c449d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c449d4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c449d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c449d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c449d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c449dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c449dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c449e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c449e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c449e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c449e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c449e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c449e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c449ec: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c449ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c449f0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c449f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c449f4: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C449F4u;
    SET_GPR_U32(ctx, 31, 0x1C449FCu);
    ctx->pc = 0x1C449F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C449F4u;
    // 0x1c449f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C449F4u, 0x1C449FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C449FCu;
label_1c449fc:
    // 0x1c449fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c449fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44a00: 0xc71091a  jal         func_1C42468
    ctx->pc = 0x1C44A00u;
    SET_GPR_U32(ctx, 31, 0x1C44A08u);
    ctx->pc = 0x1C44A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A00u;
    // 0x1c44a04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42468u, 0x1C44A00u, 0x1C44A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44A08u;
label_1c44a08:
    // 0x1c44a08: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1c44a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1c44a0c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c44a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c44a10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44A18u;
        // 0x1c44a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44A20u;
}
