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

// Function: sub_01DE1C00
// Address: 0x1de1c00 - 0x1de1c20
void sub_01DE1C00_0x1de1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE1C00_0x1de1c00");
#endif

    switch (ctx->pc) {
        case 0x1de1c14u: goto label_1de1c14;
        default: break;
    }

    ctx->pc = 0x1de1c00u;

    // 0x1de1c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de1c04: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de1c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de1c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de1c0c: 0xc778668  jal         func_1DE19A0
    ctx->pc = 0x1DE1C0Cu;
    SET_GPR_U32(ctx, 31, 0x1DE1C14u);
    ctx->pc = 0x1DE1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE1C0Cu;
    // 0x1de1c10: 0x248427e0  addiu       $a0, $a0, 0x27E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE19A0u, 0x1DE1C0Cu, 0x1DE1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE1C14u;
label_1de1c14:
    // 0x1de1c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de1c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de1c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE1C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1C18u;
        // 0x1de1c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE1C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE1C20u;
}
