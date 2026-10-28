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

// Function: sub_01C31CD8
// Address: 0x1c31cd8 - 0x1c31d10
void sub_01C31CD8_0x1c31cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31CD8_0x1c31cd8");
#endif

    switch (ctx->pc) {
        case 0x1c31cecu: goto label_1c31cec;
        default: break;
    }

    ctx->pc = 0x1c31cd8u;

    // 0x1c31cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c31cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c31cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c31ce0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c31ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c31ce4: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C31CE4u;
    SET_GPR_U32(ctx, 31, 0x1C31CECu);
    ctx->pc = 0x1C31CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31CE4u;
    // 0x1c31ce8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C31CE4u, 0x1C31CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31CECu;
label_1c31cec:
    // 0x1c31cec: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1c31cecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1c31cf0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C31CF0u;
    {
        const bool branch_taken_0x1c31cf0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C31CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31CF0u;
        // 0x1c31cf4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c31cf0) {
            ctx->pc = 0x1C31D04u;
            goto label_1c31d04;
        }
    }
    ctx->pc = 0x1C31CF8u;
    // 0x1c31cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31cfc: 0x870bdf0  j           func_1C2F7C0
    ctx->pc = 0x1C31CFCu;
    ctx->pc = 0x1C31D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31CFCu;
    // 0x1c31d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F7C0u;
    sub_01C2F7C0_0x1c2f7c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C31D04u;
label_1c31d04:
    // 0x1c31d04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c31d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31d08: 0x3e00008  jr          $ra
    ctx->pc = 0x1C31D08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C31D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C31D08u;
        // 0x1c31d0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C31D08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C31D10u;
}
