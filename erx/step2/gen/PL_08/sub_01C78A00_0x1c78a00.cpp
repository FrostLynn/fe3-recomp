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

// Function: sub_01C78A00
// Address: 0x1c78a00 - 0x1c78a30
void sub_01C78A00_0x1c78a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C78A00_0x1c78a00");
#endif

    ctx->pc = 0x1c78a00u;

    // 0x1c78a00: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c78a00u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c78a04: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C78A04u;
    {
        const bool branch_taken_0x1c78a04 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C78A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78A04u;
        // 0x1c78a08: 0x3c0e01c8  lui         $t6, 0x1C8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)456 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c78a04) {
            ctx->pc = 0x1C78A78u;
            return;
        }
    }
    ctx->pc = 0x1C78A0Cu;
    // 0x1c78a0c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c78a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c78a10: 0x25ce981c  addiu       $t6, $t6, -0x67E4
    ctx->pc = 0x1c78a10u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294940700));
    // 0x1c78a14: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c78a14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c78a18: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c78a18u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c78a1c: 0x1a00008  jr          $t5
    ctx->pc = 0x1C78A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C78A24u: goto label_1c78a24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78A1Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C78A24u;
label_1c78a24:
    // 0x1c78a24: 0x3c0f01c8  lui         $t7, 0x1C8
    ctx->pc = 0x1c78a24u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)456 << 16));
    // 0x1c78a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C78A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C78A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C78A28u;
        // 0x1c78a2c: 0x25e2cb30  addiu       $v0, $t7, -0x34D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294953776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C78A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C78A30u;
}
