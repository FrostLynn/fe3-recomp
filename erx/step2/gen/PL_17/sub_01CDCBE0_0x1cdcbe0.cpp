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

// Function: sub_01CDCBE0
// Address: 0x1cdcbe0 - 0x1cdcc30
void sub_01CDCBE0_0x1cdcbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCBE0_0x1cdcbe0");
#endif

    switch (ctx->pc) {
        case 0x1cdcc0cu: goto label_1cdcc0c;
        case 0x1cdcc18u: goto label_1cdcc18;
        default: break;
    }

    ctx->pc = 0x1cdcbe0u;

    // 0x1cdcbe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdcbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdcbe4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cdcbe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdcbe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdcbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdcbec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdcbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcbf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cdcbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cdcbf4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdcbf4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcbf8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdcbf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcbfc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdcbfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdcc00: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cdcc00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcc04: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDCC04u;
    SET_GPR_U32(ctx, 31, 0x1CDCC0Cu);
    ctx->pc = 0x1CDCC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC04u;
    // 0x1cdcc08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDCC04u, 0x1CDCC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC0Cu;
label_1cdcc0c:
    // 0x1cdcc0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcc0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcc10: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDCC10u;
    SET_GPR_U32(ctx, 31, 0x1CDCC18u);
    ctx->pc = 0x1CDCC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCC10u;
    // 0x1cdcc14: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDCC10u, 0x1CDCC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCC18u;
label_1cdcc18:
    // 0x1cdcc18: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cdcc18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cdcc1c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cdcc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cdcc20: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdcc20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdcc24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdcc24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcc28: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDCC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCC28u;
        // 0x1cdcc2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDCC30u;
}
