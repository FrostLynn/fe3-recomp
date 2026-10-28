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

// Function: sub_01CDD850
// Address: 0x1cdd850 - 0x1cdd880
void sub_01CDD850_0x1cdd850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDD850_0x1cdd850");
#endif

    ctx->pc = 0x1cdd850u;

    // 0x1cdd850: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1cdd850u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cdd854: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CDD854u;
    {
        const bool branch_taken_0x1cdd854 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD854u;
        // 0x1cdd858: 0x3c0e01ce  lui         $t6, 0x1CE (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)462 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd854) {
            ctx->pc = 0x1CDD8C8u;
            return;
        }
    }
    ctx->pc = 0x1CDD85Cu;
    // 0x1cdd85c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1cdd85cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cdd860: 0x25cee8fc  addiu       $t6, $t6, -0x1704
    ctx->pc = 0x1cdd860u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961404));
    // 0x1cdd864: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cdd864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cdd868: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cdd868u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cdd86c: 0x1a00008  jr          $t5
    ctx->pc = 0x1CDD86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDD874u: goto label_1cdd874;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD86Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CDD874u;
label_1cdd874:
    // 0x1cdd874: 0x3c0f01ce  lui         $t7, 0x1CE
    ctx->pc = 0x1cdd874u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)462 << 16));
    // 0x1cdd878: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDD878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDD878u;
        // 0x1cdd87c: 0x25e26f80  addiu       $v0, $t7, 0x6F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 28544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDD878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CDD880u;
}
