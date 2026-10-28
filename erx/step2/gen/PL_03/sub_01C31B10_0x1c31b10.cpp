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

// Function: sub_01C31B10
// Address: 0x1c31b10 - 0x1c31b38
void sub_01C31B10_0x1c31b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31B10_0x1c31b10");
#endif

    switch (ctx->pc) {
        case 0x1c31b24u: goto label_1c31b24;
        default: break;
    }

    ctx->pc = 0x1c31b10u;

    // 0x1c31b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31b18: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c31b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c31b1c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31B1Cu;
    SET_GPR_U32(ctx, 31, 0x1C31B24u);
    ctx->pc = 0x1C31B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31B1Cu;
    // 0x1c31b20: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31B1Cu, 0x1C31B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31B24u;
label_1c31b24:
    // 0x1c31b24: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c31b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c31b28: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c31b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c31b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31b30: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31B30u;
        // 0x1c31b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31B38u;
}
