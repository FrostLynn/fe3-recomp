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

// Function: sub_01C8F728
// Address: 0x1c8f728 - 0x1c8f758
void sub_01C8F728_0x1c8f728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C8F728_0x1c8f728");
#endif

    ctx->pc = 0x1c8f728u;

    // 0x1c8f728: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1c8f728u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1c8f72c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1C8F72Cu;
    {
        const bool branch_taken_0x1c8f72c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F72Cu;
        // 0x1c8f730: 0x3c0e01c9  lui         $t6, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f72c) {
            ctx->pc = 0x1C8F7A0u;
            return;
        }
    }
    ctx->pc = 0x1C8F734u;
    // 0x1c8f734: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1c8f734u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8f738: 0x25ce0264  addiu       $t6, $t6, 0x264
    ctx->pc = 0x1c8f738u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 612));
    // 0x1c8f73c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c8f73cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c8f740: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c8f740u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c8f744: 0x1a00008  jr          $t5
    ctx->pc = 0x1C8F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8F74Cu: goto label_1c8f74c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F744u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C8F74Cu;
label_1c8f74c:
    // 0x1c8f74c: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c8f74cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c8f750: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8F750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8F750u;
        // 0x1c8f754: 0x25e24a90  addiu       $v0, $t7, 0x4A90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 19088));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8F750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C8F758u;
}
