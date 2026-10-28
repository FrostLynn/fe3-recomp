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

// Function: sub_01D9EEE0
// Address: 0x1d9eee0 - 0x1d9ef18
void sub_01D9EEE0_0x1d9eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9EEE0_0x1d9eee0");
#endif

    switch (ctx->pc) {
        case 0x1d9eef4u: goto label_1d9eef4;
        default: break;
    }

    ctx->pc = 0x1d9eee0u;

    // 0x1d9eee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9eee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9eee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9eee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9eee8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9eee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9eeec: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9EEECu;
    SET_GPR_U32(ctx, 31, 0x1D9EEF4u);
    ctx->pc = 0x1D9EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EEECu;
    // 0x1d9eef0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9EEECu, 0x1D9EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EEF4u;
label_1d9eef4:
    // 0x1d9eef4: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1d9eef4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1d9eef8: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9EEF8u;
    {
        const bool branch_taken_0x1d9eef8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EEF8u;
        // 0x1d9eefc: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9eef8) {
            ctx->pc = 0x1D9EF0Cu;
            goto label_1d9ef0c;
        }
    }
    ctx->pc = 0x1D9EF00u;
    // 0x1d9ef00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9ef00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ef04: 0x876726e  j           func_1D9C9B8
    ctx->pc = 0x1D9EF04u;
    ctx->pc = 0x1D9EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EF04u;
    // 0x1d9ef08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C9B8u;
    sub_01D9C9B8_0x1d9c9b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9EF0Cu;
label_1d9ef0c:
    // 0x1d9ef0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9ef0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9ef10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9EF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EF10u;
        // 0x1d9ef14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9EF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9EF18u;
}
