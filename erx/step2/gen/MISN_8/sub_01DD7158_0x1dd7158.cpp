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

// Function: sub_01DD7158
// Address: 0x1dd7158 - 0x1dd7188
void sub_01DD7158_0x1dd7158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7158_0x1dd7158");
#endif

    switch (ctx->pc) {
        case 0x1dd717cu: goto label_1dd717c;
        default: break;
    }

    ctx->pc = 0x1dd7158u;

    // 0x1dd7158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd7158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd715c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd715cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd7160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd7160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd7164: 0x91ee0428  lbu         $t6, 0x428($t7)
    ctx->pc = 0x1dd7164u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1064)));
    // 0x1dd7168: 0x11c00004  beqz        $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD7168u;
    {
        const bool branch_taken_0x1dd7168 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7168u;
        // 0x1dd716c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd7168) {
            ctx->pc = 0x1DD717Cu;
            goto label_1dd717c;
        }
    }
    ctx->pc = 0x1DD7170u;
    // 0x1dd7170: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd7170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dd7174: 0xc775b26  jal         func_1DD6C98
    ctx->pc = 0x1DD7174u;
    SET_GPR_U32(ctx, 31, 0x1DD717Cu);
    ctx->pc = 0x1DD7178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD7174u;
    // 0x1dd7178: 0x24847bb8  addiu       $a0, $a0, 0x7BB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C98u, 0x1DD7174u, 0x1DD717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD717Cu;
label_1dd717c:
    // 0x1dd717c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd7180: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD7180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD7180u;
        // 0x1dd7184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD7180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD7188u;
}
