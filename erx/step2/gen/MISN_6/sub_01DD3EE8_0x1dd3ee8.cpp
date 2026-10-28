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

// Function: sub_01DD3EE8
// Address: 0x1dd3ee8 - 0x1dd3f08
void sub_01DD3EE8_0x1dd3ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD3EE8_0x1dd3ee8");
#endif

    switch (ctx->pc) {
        case 0x1dd3efcu: goto label_1dd3efc;
        default: break;
    }

    ctx->pc = 0x1dd3ee8u;

    // 0x1dd3ee8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd3ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd3eec: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd3eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dd3ef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd3ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd3ef4: 0xc774f66  jal         func_1DD3D98
    ctx->pc = 0x1DD3EF4u;
    SET_GPR_U32(ctx, 31, 0x1DD3EFCu);
    ctx->pc = 0x1DD3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD3EF4u;
    // 0x1dd3ef8: 0x24844af0  addiu       $a0, $a0, 0x4AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD3D98u, 0x1DD3EF4u, 0x1DD3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD3EFCu;
label_1dd3efc:
    // 0x1dd3efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd3efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd3f00: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD3F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD3F00u;
        // 0x1dd3f04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD3F00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD3F08u;
}
