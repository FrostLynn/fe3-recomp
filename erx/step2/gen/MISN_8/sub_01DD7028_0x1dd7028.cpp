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

// Function: sub_01DD7028
// Address: 0x1dd7028 - 0x1dd7070
void sub_01DD7028_0x1dd7028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7028_0x1dd7028");
#endif

    ctx->pc = 0x1dd7028u;

    // 0x1dd7028: 0x8f8b801c  lw          $t3, -0x7FE4($gp)
    ctx->pc = 0x1dd7028u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934556)));
    // 0x1dd702c: 0x3c0e01de  lui         $t6, 0x1DE
    ctx->pc = 0x1dd702cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)478 << 16));
    // 0x1dd7030: 0x25ce8200  addiu       $t6, $t6, -0x7E00
    ctx->pc = 0x1dd7030u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294935040));
    // 0x1dd7034: 0xb7880  sll         $t7, $t3, 2
    ctx->pc = 0x1dd7034u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1dd7038: 0x1ee6021  addu        $t4, $t7, $t6
    ctx->pc = 0x1dd7038u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1dd703c: 0x8d8d0000  lw          $t5, 0x0($t4)
    ctx->pc = 0x1dd703cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1dd7040: 0x15a00009  bnez        $t5, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DD7040u;
    {
        const bool branch_taken_0x1dd7040 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD7044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7040u;
        // 0x1dd7044: 0x240d002c  addiu       $t5, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7040) {
            ctx->pc = 0x1DD7068u;
            goto label_1dd7068;
        }
    }
    ctx->pc = 0x1DD7048u;
    // 0x1dd7048: 0x3c0f01dd  lui         $t7, 0x1DD
    ctx->pc = 0x1dd7048u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)477 << 16));
    // 0x1dd704c: 0x16d6818  mult        $t5, $t3, $t5
    ctx->pc = 0x1dd704cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1dd7050: 0x240e0004  addiu       $t6, $zero, 0x4
    ctx->pc = 0x1dd7050u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd7054: 0x25ef7610  addiu       $t7, $t7, 0x7610
    ctx->pc = 0x1dd7054u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 30224));
    // 0x1dd7058: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x1dd7058u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x1dd705c: 0x1af6821  addu        $t5, $t5, $t7
    ctx->pc = 0x1dd705cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x1dd7060: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7060u;
        // 0x1dd7064: 0x8da20000  lw          $v0, 0x0($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7068u;
label_1dd7068:
    // 0x1dd7068: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7068u;
        // 0x1dd706c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7070u;
}
