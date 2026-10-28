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

// Function: sub_01C02138
// Address: 0x1c02138 - 0x1c02170
void sub_01C02138_0x1c02138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02138_0x1c02138");
#endif

    switch (ctx->pc) {
        case 0x1c0214cu: goto label_1c0214c;
        default: break;
    }

    ctx->pc = 0x1c02138u;

    // 0x1c02138: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c02138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0213c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c02140: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c02140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c02144: 0xc700018  jal         func_1C00060
    ctx->pc = 0x1C02144u;
    SET_GPR_U32(ctx, 31, 0x1C0214Cu);
    ctx->pc = 0x1C02148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02144u;
    // 0x1c02148: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00060u, 0x1C02144u, 0x1C0214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0214Cu;
label_1c0214c:
    // 0x1c0214c: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1c0214cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1c02150: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C02150u;
    {
        const bool branch_taken_0x1c02150 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02150u;
        // 0x1c02154: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02150) {
            ctx->pc = 0x1C02164u;
            goto label_1c02164;
        }
    }
    ctx->pc = 0x1C02158u;
    // 0x1c02158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0215c: 0x8700030  j           func_1C000C0
    ctx->pc = 0x1C0215Cu;
    ctx->pc = 0x1C02160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0215Cu;
    // 0x1c02160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C000C0u;
    sub_01C000C0_0x1c000c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C02164u;
label_1c02164:
    // 0x1c02164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c02164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c02168: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02168u;
        // 0x1c0216c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02170u;
}
