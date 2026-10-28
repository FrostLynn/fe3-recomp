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

// Function: sub_01C11CB8
// Address: 0x1c11cb8 - 0x1c11cf0
void sub_01C11CB8_0x1c11cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11CB8_0x1c11cb8");
#endif

    switch (ctx->pc) {
        case 0x1c11cccu: goto label_1c11ccc;
        default: break;
    }

    ctx->pc = 0x1c11cb8u;

    // 0x1c11cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c11cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c11cc0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c11cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c11cc4: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11CC4u;
    SET_GPR_U32(ctx, 31, 0x1C11CCCu);
    ctx->pc = 0x1C11CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11CC4u;
    // 0x1c11cc8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11CC4u, 0x1C11CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11CCCu;
label_1c11ccc:
    // 0x1c11ccc: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1c11cccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1c11cd0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C11CD0u;
    {
        const bool branch_taken_0x1c11cd0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C11CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11CD0u;
        // 0x1c11cd4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c11cd0) {
            ctx->pc = 0x1C11CE4u;
            goto label_1c11ce4;
        }
    }
    ctx->pc = 0x1C11CD8u;
    // 0x1c11cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11cdc: 0x8703dee  j           func_1C0F7B8
    ctx->pc = 0x1C11CDCu;
    ctx->pc = 0x1C11CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11CDCu;
    // 0x1c11ce0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F7B8u;
    sub_01C0F7B8_0x1c0f7b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1C11CE4u;
label_1c11ce4:
    // 0x1c11ce4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c11ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C11CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11CE8u;
        // 0x1c11cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C11CF0u;
}
