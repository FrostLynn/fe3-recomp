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

// Function: sub_01DD3E90
// Address: 0x1dd3e90 - 0x1dd3eb0
void sub_01DD3E90_0x1dd3e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3E90_0x1dd3e90");
#endif

    switch (ctx->pc) {
        case 0x1dd3ea4u: goto label_1dd3ea4;
        default: break;
    }

    ctx->pc = 0x1dd3e90u;

    // 0x1dd3e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd3e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd3e94: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd3e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dd3e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd3e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd3e9c: 0xc774f66  jal         func_1DD3D98
    ctx->pc = 0x1DD3E9Cu;
    SET_GPR_U32(ctx, 31, 0x1DD3EA4u);
    ctx->pc = 0x1DD3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3E9Cu;
    // 0x1dd3ea0: 0x24844490  addiu       $a0, $a0, 0x4490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D98u, 0x1DD3E9Cu, 0x1DD3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3EA4u;
label_1dd3ea4:
    // 0x1dd3ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd3ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3EA8u;
        // 0x1dd3eac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3EB0u;
}
