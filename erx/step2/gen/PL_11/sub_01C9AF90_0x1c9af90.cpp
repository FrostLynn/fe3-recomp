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

// Function: sub_01C9AF90
// Address: 0x1c9af90 - 0x1c9afb0
void sub_01C9AF90_0x1c9af90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9AF90_0x1c9af90");
#endif

    switch (ctx->pc) {
        case 0x1c9afa0u: goto label_1c9afa0;
        default: break;
    }

    ctx->pc = 0x1c9af90u;

    // 0x1c9af90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9af90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9af94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9af94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9af98: 0xc726568  jal         func_1C995A0
    ctx->pc = 0x1C9AF98u;
    SET_GPR_U32(ctx, 31, 0x1C9AFA0u);
    ctx->pc = 0x1C995A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C995A0u, 0x1C9AF98u, 0x1C9AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9AFA0u;
label_1c9afa0:
    // 0x1c9afa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9afa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9afa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c9afa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9afa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9AFA8u;
        // 0x1c9afac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9AFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9AFB0u;
}
