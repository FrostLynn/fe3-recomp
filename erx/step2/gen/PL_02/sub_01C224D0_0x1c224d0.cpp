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

// Function: sub_01C224D0
// Address: 0x1c224d0 - 0x1c22500
void sub_01C224D0_0x1c224d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C224D0_0x1c224d0");
#endif

    ctx->pc = 0x1c224d0u;

    // 0x1c224d0: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c224d0u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c224d4: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C224D4u;
    {
        const bool branch_taken_0x1c224d4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C224D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C224D4u;
        // 0x1c224d8: 0x3c0e01c2  lui         $t6, 0x1C2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)450 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c224d4) {
            ctx->pc = 0x1C22548u;
            return;
        }
    }
    ctx->pc = 0x1C224DCu;
    // 0x1c224dc: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c224dcu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c224e0: 0x25ce33a4  addiu       $t6, $t6, 0x33A4
    ctx->pc = 0x1c224e0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 13220));
    // 0x1c224e4: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c224e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c224e8: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c224e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c224ec: 0x1a00008  jr          $t5
    ctx->pc = 0x1C224ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C224F4u: goto label_1c224f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C224ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C224F4u;
label_1c224f4:
    // 0x1c224f4: 0x3c0f01c3  lui         $t7, 0x1C3
    ctx->pc = 0x1c224f4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)451 << 16));
    // 0x1c224f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C224F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C224FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C224F8u;
        // 0x1c224fc: 0x25e2b4a0  addiu       $v0, $t7, -0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294948000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C224F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C22500u;
}
