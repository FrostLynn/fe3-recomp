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

// Function: sub_01D9F000
// Address: 0x1d9f000 - 0x1d9f030
void sub_01D9F000_0x1d9f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9F000_0x1d9f000");
#endif

    ctx->pc = 0x1d9f000u;

    // 0x1d9f000: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d9f000u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d9f004: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D9F004u;
    {
        const bool branch_taken_0x1d9f004 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F004u;
        // 0x1d9f008: 0x3c0e01da  lui         $t6, 0x1DA (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f004) {
            ctx->pc = 0x1D9F078u;
            return;
        }
    }
    ctx->pc = 0x1D9F00Cu;
    // 0x1d9f00c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d9f00cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d9f010: 0x25cefa9c  addiu       $t6, $t6, -0x564
    ctx->pc = 0x1d9f010u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965916));
    // 0x1d9f014: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9f014u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9f018: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d9f018u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9f01c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D9F01Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9F024u: goto label_1d9f024;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F01Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D9F024u;
label_1d9f024:
    // 0x1d9f024: 0x3c0f01da  lui         $t7, 0x1DA
    ctx->pc = 0x1d9f024u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)474 << 16));
    // 0x1d9f028: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F028u;
        // 0x1d9f02c: 0x25e22890  addiu       $v0, $t7, 0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 10384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9F030u;
}
