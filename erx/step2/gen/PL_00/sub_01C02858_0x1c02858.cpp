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

// Function: sub_01C02858
// Address: 0x1c02858 - 0x1c02888
void sub_01C02858_0x1c02858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C02858_0x1c02858");
#endif

    ctx->pc = 0x1c02858u;

    // 0x1c02858: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c02858u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c0285c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C0285Cu;
    {
        const bool branch_taken_0x1c0285c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0285Cu;
        // 0x1c02860: 0x3c0e01c0  lui         $t6, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)448 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0285c) {
            ctx->pc = 0x1C028D0u;
            return;
        }
    }
    ctx->pc = 0x1C02864u;
    // 0x1c02864: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c02864u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c02868: 0x25ce375c  addiu       $t6, $t6, 0x375C
    ctx->pc = 0x1c02868u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 14172));
    // 0x1c0286c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c0286cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c02870: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c02870u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c02874: 0x1a00008  jr          $t5
    ctx->pc = 0x1C02874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0287Cu: goto label_1c0287c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02874u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C0287Cu;
label_1c0287c:
    // 0x1c0287c: 0x3c0f01c1  lui         $t7, 0x1C1
    ctx->pc = 0x1c0287cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)449 << 16));
    // 0x1c02880: 0x3e00008  jr          $ra
    ctx->pc = 0x1C02880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C02884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02880u;
        // 0x1c02884: 0x25e2bd50  addiu       $v0, $t7, -0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294950224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C02880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C02888u;
}
