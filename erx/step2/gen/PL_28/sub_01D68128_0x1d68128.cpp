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

// Function: sub_01D68128
// Address: 0x1d68128 - 0x1d68158
void sub_01D68128_0x1d68128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D68128_0x1d68128");
#endif

    ctx->pc = 0x1d68128u;

    // 0x1d68128: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d68128u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d6812c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D6812Cu;
    {
        const bool branch_taken_0x1d6812c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D68130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6812Cu;
        // 0x1d68130: 0x3c0e01d7  lui         $t6, 0x1D7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6812c) {
            ctx->pc = 0x1D681A0u;
            return;
        }
    }
    ctx->pc = 0x1D68134u;
    // 0x1d68134: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d68134u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d68138: 0x25ce8788  addiu       $t6, $t6, -0x7878
    ctx->pc = 0x1d68138u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294936456));
    // 0x1d6813c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d6813cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d68140: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d68140u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d68144: 0x1a00008  jr          $t5
    ctx->pc = 0x1D68144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D6814Cu: goto label_1d6814c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D68144u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D6814Cu;
label_1d6814c:
    // 0x1d6814c: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d6814cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d68150: 0x3e00008  jr          $ra
    ctx->pc = 0x1D68150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D68154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D68150u;
        // 0x1d68154: 0x25e2aaa8  addiu       $v0, $t7, -0x5558 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294945448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D68150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D68158u;
}
