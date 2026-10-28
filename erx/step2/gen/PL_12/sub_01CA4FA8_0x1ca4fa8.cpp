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

// Function: sub_01CA4FA8
// Address: 0x1ca4fa8 - 0x1ca4fd8
void sub_01CA4FA8_0x1ca4fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4FA8_0x1ca4fa8");
#endif

    ctx->pc = 0x1ca4fa8u;

    // 0x1ca4fa8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1ca4fa8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1ca4fac: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CA4FACu;
    {
        const bool branch_taken_0x1ca4fac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4FACu;
        // 0x1ca4fb0: 0x3c0e01ca  lui         $t6, 0x1CA (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)458 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4fac) {
            ctx->pc = 0x1CA5020u;
            return;
        }
    }
    ctx->pc = 0x1CA4FB4u;
    // 0x1ca4fb4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1ca4fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1ca4fb8: 0x25ce5abc  addiu       $t6, $t6, 0x5ABC
    ctx->pc = 0x1ca4fb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23228));
    // 0x1ca4fbc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ca4fbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ca4fc0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1ca4fc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ca4fc4: 0x1a00008  jr          $t5
    ctx->pc = 0x1CA4FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CA4FCCu: goto label_1ca4fcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4FC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CA4FCCu;
label_1ca4fcc:
    // 0x1ca4fcc: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1ca4fccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1ca4fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4FD0u;
        // 0x1ca4fd4: 0x25e28dd0  addiu       $v0, $t7, -0x7230 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294938064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA4FD8u;
}
