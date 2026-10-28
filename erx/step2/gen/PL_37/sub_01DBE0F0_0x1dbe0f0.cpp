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

// Function: sub_01DBE0F0
// Address: 0x1dbe0f0 - 0x1dbe120
void sub_01DBE0F0_0x1dbe0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBE0F0_0x1dbe0f0");
#endif

    ctx->pc = 0x1dbe0f0u;

    // 0x1dbe0f0: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1dbe0f0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1dbe0f4: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DBE0F4u;
    {
        const bool branch_taken_0x1dbe0f4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE0F4u;
        // 0x1dbe0f8: 0x3c0e01dc  lui         $t6, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbe0f4) {
            ctx->pc = 0x1DBE168u;
            return;
        }
    }
    ctx->pc = 0x1DBE0FCu;
    // 0x1dbe0fc: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1dbe0fcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dbe100: 0x25cef27c  addiu       $t6, $t6, -0xD84
    ctx->pc = 0x1dbe100u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294963836));
    // 0x1dbe104: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1dbe104u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1dbe108: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1dbe108u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1dbe10c: 0x1a00008  jr          $t5
    ctx->pc = 0x1DBE10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBE114u: goto label_1dbe114;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE10Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DBE114u;
label_1dbe114:
    // 0x1dbe114: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dbe114u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dbe118: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBE118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBE118u;
        // 0x1dbe11c: 0x25e222f0  addiu       $v0, $t7, 0x22F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 8944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBE118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBE120u;
}
