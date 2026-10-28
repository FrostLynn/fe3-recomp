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

// Function: sub_01CC4C08
// Address: 0x1cc4c08 - 0x1cc4c38
void sub_01CC4C08_0x1cc4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC4C08_0x1cc4c08");
#endif

    ctx->pc = 0x1cc4c08u;

    // 0x1cc4c08: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1cc4c08u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1cc4c0c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1CC4C0Cu;
    {
        const bool branch_taken_0x1cc4c0c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC4C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C0Cu;
        // 0x1cc4c10: 0x3c0e01cc  lui         $t6, 0x1CC (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc4c0c) {
            ctx->pc = 0x1CC4C80u;
            return;
        }
    }
    ctx->pc = 0x1CC4C14u;
    // 0x1cc4c14: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1cc4c14u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc4c18: 0x25ce5710  addiu       $t6, $t6, 0x5710
    ctx->pc = 0x1cc4c18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 22288));
    // 0x1cc4c1c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cc4c1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cc4c20: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cc4c20u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cc4c24: 0x1a00008  jr          $t5
    ctx->pc = 0x1CC4C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC4C2Cu: goto label_1cc4c2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4C24u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CC4C2Cu;
label_1cc4c2c:
    // 0x1cc4c2c: 0x3c0f01cd  lui         $t7, 0x1CD
    ctx->pc = 0x1cc4c2cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)461 << 16));
    // 0x1cc4c30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4C30u;
        // 0x1cc4c34: 0x25e291f0  addiu       $v0, $t7, -0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294939120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4C38u;
}
