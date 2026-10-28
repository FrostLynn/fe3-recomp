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

// Function: sub_01D0EDA8
// Address: 0x1d0eda8 - 0x1d0edd8
void sub_01D0EDA8_0x1d0eda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D0EDA8_0x1d0eda8");
#endif

    ctx->pc = 0x1d0eda8u;

    // 0x1d0eda8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d0eda8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d0edac: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D0EDACu;
    {
        const bool branch_taken_0x1d0edac = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EDACu;
        // 0x1d0edb0: 0x3c0e01d1  lui         $t6, 0x1D1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)465 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0edac) {
            ctx->pc = 0x1D0EE20u;
            return;
        }
    }
    ctx->pc = 0x1D0EDB4u;
    // 0x1d0edb4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d0edb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d0edb8: 0x25cefc2c  addiu       $t6, $t6, -0x3D4
    ctx->pc = 0x1d0edb8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294966316));
    // 0x1d0edbc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d0edbcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d0edc0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d0edc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d0edc4: 0x1a00008  jr          $t5
    ctx->pc = 0x1D0EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D0EDCCu: goto label_1d0edcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EDC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D0EDCCu;
label_1d0edcc:
    // 0x1d0edcc: 0x3c0f01d1  lui         $t7, 0x1D1
    ctx->pc = 0x1d0edccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)465 << 16));
    // 0x1d0edd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0EDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0EDD0u;
        // 0x1d0edd4: 0x25e254d0  addiu       $v0, $t7, 0x54D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 21712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0EDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0EDD8u;
}
