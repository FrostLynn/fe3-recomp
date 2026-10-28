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

// Function: sub_01DD70B0
// Address: 0x1dd70b0 - 0x1dd70e8
void sub_01DD70B0_0x1dd70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DD70B0_0x1dd70b0");
#endif

    switch (ctx->pc) {
        case 0x1dd70d8u: goto label_1dd70d8;
        default: break;
    }

    ctx->pc = 0x1dd70b0u;

    // 0x1dd70b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1dd70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1dd70b4: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1dd70b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1dd70b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dd70bc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1dd70bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd70c0: 0x91ed042b  lbu         $t5, 0x42B($t7)
    ctx->pc = 0x1dd70c0u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1067)));
    // 0x1dd70c4: 0x15ae0004  bne         $t5, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DD70C4u;
    {
        const bool branch_taken_0x1dd70c4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 14));
        ctx->pc = 0x1DD70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD70C4u;
        // 0x1dd70c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd70c4) {
            ctx->pc = 0x1DD70D8u;
            goto label_1dd70d8;
        }
    }
    ctx->pc = 0x1DD70CCu;
    // 0x1dd70cc: 0x3c0401dd  lui         $a0, 0x1DD
    ctx->pc = 0x1dd70ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)477 << 16));
    // 0x1dd70d0: 0xc775b26  jal         func_1DD6C98
    ctx->pc = 0x1DD70D0u;
    SET_GPR_U32(ctx, 31, 0x1DD70D8u);
    ctx->pc = 0x1DD70D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD70D0u;
    // 0x1dd70d4: 0x248477f8  addiu       $a0, $a0, 0x77F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6C98u, 0x1DD70D0u, 0x1DD70D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD70D8u;
label_1dd70d8:
    // 0x1dd70d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd70d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd70dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD70DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD70DCu;
        // 0x1dd70e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD70DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD70E4u;
    // 0x1dd70e4: 0x0  nop
    ctx->pc = 0x1dd70e4u;
    // NOP
    ctx->pc = 0x1dd70e8u;
}
