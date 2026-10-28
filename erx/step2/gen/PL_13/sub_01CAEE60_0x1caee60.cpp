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

// Function: sub_01CAEE60
// Address: 0x1caee60 - 0x1caee90
void sub_01CAEE60_0x1caee60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CAEE60_0x1caee60");
#endif

    ctx->pc = 0x1caee60u;

    // 0x1caee60: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1caee60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1caee64: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CAEE64u;
    {
        const bool branch_taken_0x1caee64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEE64u;
        // 0x1caee68: 0x3c0e01cb  lui         $t6, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caee64) {
            ctx->pc = 0x1CAEED8u;
            return;
        }
    }
    ctx->pc = 0x1CAEE6Cu;
    // 0x1caee6c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1caee6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1caee70: 0x25cef584  addiu       $t6, $t6, -0xA7C
    ctx->pc = 0x1caee70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294964612));
    // 0x1caee74: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1caee74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1caee78: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1caee78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1caee7c: 0x1a00008  jr          $t5
    ctx->pc = 0x1CAEE7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CAEE84u: goto label_1caee84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEE7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CAEE84u;
label_1caee84:
    // 0x1caee84: 0x3c0f01cb  lui         $t7, 0x1CB
    ctx->pc = 0x1caee84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)459 << 16));
    // 0x1caee88: 0x3e00008  jr          $ra
    ctx->pc = 0x1CAEE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAEE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEE88u;
        // 0x1caee8c: 0x25e215a0  addiu       $v0, $t7, 0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 5536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAEE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAEE90u;
}
