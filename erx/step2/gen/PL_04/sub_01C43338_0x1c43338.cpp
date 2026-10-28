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

// Function: sub_01C43338
// Address: 0x1c43338 - 0x1c43360
void sub_01C43338_0x1c43338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43338_0x1c43338");
#endif

    switch (ctx->pc) {
        case 0x1c4334cu: goto label_1c4334c;
        default: break;
    }

    ctx->pc = 0x1c43338u;

    // 0x1c43338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c43338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4333c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4333cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c43340: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c43340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c43344: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43344u;
    SET_GPR_U32(ctx, 31, 0x1C4334Cu);
    ctx->pc = 0x1C43348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43344u;
    // 0x1c43348: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43344u, 0x1C4334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4334Cu;
label_1c4334c:
    // 0x1c4334c: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c4334cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c43350: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c43350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c43354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c43354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c43358: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43358u;
        // 0x1c4335c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43360u;
}
