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

// Function: sub_01DE08F8
// Address: 0x1de08f8 - 0x1de0918
void sub_01DE08F8_0x1de08f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DE08F8_0x1de08f8");
#endif

    switch (ctx->pc) {
        case 0x1de090cu: goto label_1de090c;
        default: break;
    }

    ctx->pc = 0x1de08f8u;

    // 0x1de08f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de08f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de08fc: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x1de08fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x1de0900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1de0900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1de0904: 0xc7781e2  jal         func_1DE0788
    ctx->pc = 0x1DE0904u;
    SET_GPR_U32(ctx, 31, 0x1DE090Cu);
    ctx->pc = 0x1DE0908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE0904u;
    // 0x1de0908: 0x24840d28  addiu       $a0, $a0, 0xD28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0788u, 0x1DE0904u, 0x1DE090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE090Cu;
label_1de090c:
    // 0x1de090c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de090cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de0910: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE0910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0910u;
        // 0x1de0914: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE0910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE0918u;
}
