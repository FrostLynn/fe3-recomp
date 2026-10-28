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

// Function: sub_01D0E4F0
// Address: 0x1d0e4f0 - 0x1d0e540
void sub_01D0E4F0_0x1d0e4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0E4F0_0x1d0e4f0");
#endif

    switch (ctx->pc) {
        case 0x1d0e51cu: goto label_1d0e51c;
        case 0x1d0e528u: goto label_1d0e528;
        default: break;
    }

    ctx->pc = 0x1d0e4f0u;

    // 0x1d0e4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d0e4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d0e4f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d0e4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d0e4f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0e4fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d0e4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d0e500: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d0e500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d0e504: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d0e504u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0e508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e50c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d0e50cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0e510: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d0e510u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e514: 0xc742f62  jal         func_1D0BD88
    ctx->pc = 0x1D0E514u;
    SET_GPR_U32(ctx, 31, 0x1D0E51Cu);
    ctx->pc = 0x1D0E518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E514u;
    // 0x1d0e518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD88u, 0x1D0E514u, 0x1D0E51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E51Cu;
label_1d0e51c:
    // 0x1d0e51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0e51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0e520: 0xc742f5a  jal         func_1D0BD68
    ctx->pc = 0x1D0E520u;
    SET_GPR_U32(ctx, 31, 0x1D0E528u);
    ctx->pc = 0x1D0E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0E520u;
    // 0x1d0e524: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0BD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BD68u, 0x1D0E520u, 0x1D0E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0E528u;
label_1d0e528:
    // 0x1d0e528: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d0e528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d0e52c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d0e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d0e530: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d0e530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0e534: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0e534u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0e538: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0E538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0E538u;
        // 0x1d0e53c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0E538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0E540u;
}
