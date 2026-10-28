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

// Function: sub_01C61DB8
// Address: 0x1c61db8 - 0x1c61de8
void sub_01C61DB8_0x1c61db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61DB8_0x1c61db8");
#endif

    ctx->pc = 0x1c61db8u;

    // 0x1c61db8: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c61db8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c61dbc: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C61DBCu;
    {
        const bool branch_taken_0x1c61dbc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61DBCu;
        // 0x1c61dc0: 0x3c0e01c6  lui         $t6, 0x1C6 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)454 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61dbc) {
            ctx->pc = 0x1C61E30u;
            return;
        }
    }
    ctx->pc = 0x1C61DC4u;
    // 0x1c61dc4: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c61dc4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c61dc8: 0x25ce2924  addiu       $t6, $t6, 0x2924
    ctx->pc = 0x1c61dc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 10532));
    // 0x1c61dcc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c61dccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c61dd0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c61dd0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c61dd4: 0x1a00008  jr          $t5
    ctx->pc = 0x1C61DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C61DDCu: goto label_1c61ddc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61DD4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C61DDCu;
label_1c61ddc:
    // 0x1c61ddc: 0x3c0f01c6  lui         $t7, 0x1C6
    ctx->pc = 0x1c61ddcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)454 << 16));
    // 0x1c61de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C61DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C61DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61DE0u;
        // 0x1c61de4: 0x25e26520  addiu       $v0, $t7, 0x6520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 25888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C61DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C61DE8u;
}
