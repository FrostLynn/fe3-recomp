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

// Function: sub_01C44A20
// Address: 0x1c44a20 - 0x1c44a58
void sub_01C44A20_0x1c44a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44A20_0x1c44a20");
#endif

    switch (ctx->pc) {
        case 0x1c44a34u: goto label_1c44a34;
        default: break;
    }

    ctx->pc = 0x1c44a20u;

    // 0x1c44a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44a28: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c44a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c44a2c: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C44A2Cu;
    SET_GPR_U32(ctx, 31, 0x1C44A34u);
    ctx->pc = 0x1C44A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A2Cu;
    // 0x1c44a30: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C44A2Cu, 0x1C44A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44A34u;
label_1c44a34:
    // 0x1c44a34: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1c44a34u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1c44a38: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C44A38u;
    {
        const bool branch_taken_0x1c44a38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44A38u;
        // 0x1c44a3c: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44a38) {
            ctx->pc = 0x1C44A4Cu;
            goto label_1c44a4c;
        }
    }
    ctx->pc = 0x1C44A40u;
    // 0x1c44a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44a44: 0x8710930  j           func_1C424C0
    ctx->pc = 0x1C44A44u;
    ctx->pc = 0x1C44A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44A44u;
    // 0x1c44a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C424C0u;
    sub_01C424C0_0x1c424c0(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44A4Cu;
label_1c44a4c:
    // 0x1c44a4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44a50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44A50u;
        // 0x1c44a54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C44A58u;
}
