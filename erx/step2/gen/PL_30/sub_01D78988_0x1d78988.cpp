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

// Function: sub_01D78988
// Address: 0x1d78988 - 0x1d789b8
void sub_01D78988_0x1d78988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D78988_0x1d78988");
#endif

    ctx->pc = 0x1d78988u;

    // 0x1d78988: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d78988u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d7898c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D7898Cu;
    {
        const bool branch_taken_0x1d7898c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D78990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7898Cu;
        // 0x1d78990: 0x3c0e01d8  lui         $t6, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7898c) {
            ctx->pc = 0x1D78A00u;
            return;
        }
    }
    ctx->pc = 0x1D78994u;
    // 0x1d78994: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d78994u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d78998: 0x25ce8d30  addiu       $t6, $t6, -0x72D0
    ctx->pc = 0x1d78998u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294937904));
    // 0x1d7899c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7899cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d789a0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d789a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d789a4: 0x1a00008  jr          $t5
    ctx->pc = 0x1D789A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D789ACu: goto label_1d789ac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D789A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D789ACu;
label_1d789ac:
    // 0x1d789ac: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d789acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d789b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D789B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D789B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D789B0u;
        // 0x1d789b4: 0x25e2abb8  addiu       $v0, $t7, -0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D789B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D789B8u;
}
