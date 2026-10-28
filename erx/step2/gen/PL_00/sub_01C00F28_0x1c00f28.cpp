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

// Function: sub_01C00F28
// Address: 0x1c00f28 - 0x1c00f50
void sub_01C00F28_0x1c00f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C00F28_0x1c00f28");
#endif

    switch (ctx->pc) {
        case 0x1c00f3cu: goto label_1c00f3c;
        default: break;
    }

    ctx->pc = 0x1c00f28u;

    // 0x1c00f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c00f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c00f2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c00f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c00f30: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c00f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c00f34: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C00F34u;
    SET_GPR_U32(ctx, 31, 0x1C00F3Cu);
    ctx->pc = 0x1C00F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F34u;
    // 0x1c00f38: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C00F34u, 0x1C00F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C00F3Cu;
label_1c00f3c:
    // 0x1c00f3c: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c00f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c00f40: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c00f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c00f44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c00f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c00f48: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00F48u;
        // 0x1c00f4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C00F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C00F50u;
}
