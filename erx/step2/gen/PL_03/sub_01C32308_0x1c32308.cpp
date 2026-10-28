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

// Function: sub_01C32308
// Address: 0x1c32308 - 0x1c32338
void sub_01C32308_0x1c32308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C32308_0x1c32308");
#endif

    ctx->pc = 0x1c32308u;

    // 0x1c32308: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c32308u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c3230c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C3230Cu;
    {
        const bool branch_taken_0x1c3230c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C32310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3230Cu;
        // 0x1c32310: 0x3c0e01c3  lui         $t6, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3230c) {
            ctx->pc = 0x1C32380u;
            return;
        }
    }
    ctx->pc = 0x1C32314u;
    // 0x1c32314: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c32314u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c32318: 0x25ce3220  addiu       $t6, $t6, 0x3220
    ctx->pc = 0x1c32318u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 12832));
    // 0x1c3231c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c3231cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c32320: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c32320u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c32324: 0x1a00008  jr          $t5
    ctx->pc = 0x1C32324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C3232Cu: goto label_1c3232c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32324u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C3232Cu;
label_1c3232c:
    // 0x1c3232c: 0x3c0f01c4  lui         $t7, 0x1C4
    ctx->pc = 0x1c3232cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)452 << 16));
    // 0x1c32330: 0x3e00008  jr          $ra
    ctx->pc = 0x1C32330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C32334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C32330u;
        // 0x1c32334: 0x25e2e800  addiu       $v0, $t7, -0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294961152));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C32330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C32338u;
}
