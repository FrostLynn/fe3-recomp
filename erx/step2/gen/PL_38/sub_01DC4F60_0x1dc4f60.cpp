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

// Function: sub_01DC4F60
// Address: 0x1dc4f60 - 0x1dc4f90
void sub_01DC4F60_0x1dc4f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DC4F60_0x1dc4f60");
#endif

    ctx->pc = 0x1dc4f60u;

    // 0x1dc4f60: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1dc4f60u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1dc4f64: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1DC4F64u;
    {
        const bool branch_taken_0x1dc4f64 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DC4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F64u;
        // 0x1dc4f68: 0x3c0e01dc  lui         $t6, 0x1DC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)476 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc4f64) {
            ctx->pc = 0x1DC4FD8u;
            return;
        }
    }
    ctx->pc = 0x1DC4F6Cu;
    // 0x1dc4f6c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1dc4f6cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dc4f70: 0x25ce5608  addiu       $t6, $t6, 0x5608
    ctx->pc = 0x1dc4f70u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 22024));
    // 0x1dc4f74: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1dc4f74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1dc4f78: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1dc4f78u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1dc4f7c: 0x1a00008  jr          $t5
    ctx->pc = 0x1DC4F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DC4F84u: goto label_1dc4f84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4F7Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DC4F84u;
label_1dc4f84:
    // 0x1dc4f84: 0x3c0f01dc  lui         $t7, 0x1DC
    ctx->pc = 0x1dc4f84u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)476 << 16));
    // 0x1dc4f88: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC4F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC4F88u;
        // 0x1dc4f8c: 0x25e273e0  addiu       $v0, $t7, 0x73E0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 29664));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC4F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC4F90u;
}
