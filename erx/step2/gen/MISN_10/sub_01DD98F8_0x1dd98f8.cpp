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

// Function: sub_01DD98F8
// Address: 0x1dd98f8 - 0x1dd9928
void sub_01DD98F8_0x1dd98f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD98F8_0x1dd98f8");
#endif

    ctx->pc = 0x1dd98f8u;

    // 0x1dd98f8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1dd98f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1dd98fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DD98FCu;
    {
        const bool branch_taken_0x1dd98fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD9900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD98FCu;
        // 0x1dd9900: 0x8f8e8018  lw          $t6, -0x7FE8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd98fc) {
            ctx->pc = 0x1DD9914u;
            goto label_1dd9914;
        }
    }
    ctx->pc = 0x1DD9904u;
    // 0x1dd9904: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd9904u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9908: 0xa1cf0428  sb          $t7, 0x428($t6)
    ctx->pc = 0x1dd9908u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dd990c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD990Cu;
        // 0x1dd9910: 0xa1c00429  sb          $zero, 0x429($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 1065), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9914u;
label_1dd9914:
    // 0x1dd9914: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dd9914u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd9918: 0xa1cf0429  sb          $t7, 0x429($t6)
    ctx->pc = 0x1dd9918u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 1065), (uint8_t)GPR_U32(ctx, 15));
    // 0x1dd991c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD9920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD991Cu;
        // 0x1dd9920: 0xa1c00428  sb          $zero, 0x428($t6) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 14), 1064), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD9924u;
    // 0x1dd9924: 0x0  nop
    ctx->pc = 0x1dd9924u;
    // NOP
    ctx->pc = 0x1dd9928u;
}
