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

// Function: sub_01DD7188
// Address: 0x1dd7188 - 0x1dd71c8
void sub_01DD7188_0x1dd7188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD7188_0x1dd7188");
#endif

    switch (ctx->pc) {
        case 0x1dd7194u: goto label_1dd7194;
        default: break;
    }

    ctx->pc = 0x1dd7188u;

    // 0x1dd7188: 0x3c0f01de  lui         $t7, 0x1DE
    ctx->pc = 0x1dd7188u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)478 << 16));
    // 0x1dd718c: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x1dd718cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1dd7190: 0x25ef8200  addiu       $t7, $t7, -0x7E00
    ctx->pc = 0x1dd7190u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294935040));
label_1dd7194:
    // 0x1dd7194: 0xade00000  sw          $zero, 0x0($t7)
    ctx->pc = 0x1dd7194u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 0));
    // 0x1dd7198: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1dd7198u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1dd719c: 0x0  nop
    ctx->pc = 0x1dd719cu;
    // NOP
    // 0x1dd71a0: 0x0  nop
    ctx->pc = 0x1dd71a0u;
    // NOP
    // 0x1dd71a4: 0x0  nop
    ctx->pc = 0x1dd71a4u;
    // NOP
    // 0x1dd71a8: 0x5c1fffa  bgez        $t6, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DD71A8u;
    {
        const bool branch_taken_0x1dd71a8 = (GPR_S32(ctx, 14) >= 0);
        ctx->pc = 0x1DD71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD71A8u;
        // 0x1dd71ac: 0x25ef0004  addiu       $t7, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd71a8) {
            ctx->pc = 0x1DD7194u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd7194;
        }
    }
    ctx->pc = 0x1DD71B0u;
    // 0x1dd71b0: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd71b0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd71b4: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1dd71b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1dd71b8: 0xaf80801c  sw          $zero, -0x7FE4($gp)
    ctx->pc = 0x1dd71b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934556), GPR_U32(ctx, 0));
    // 0x1dd71bc: 0x8dee00dc  lw          $t6, 0xDC($t7)
    ctx->pc = 0x1dd71bcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 220)));
    // 0x1dd71c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD71C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD71C0u;
        // 0x1dd71c4: 0xadc00cd8  sw          $zero, 0xCD8($t6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 14), 3288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD71C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD71C8u;
}
