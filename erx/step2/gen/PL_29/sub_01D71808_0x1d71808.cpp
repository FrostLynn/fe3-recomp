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

// Function: sub_01D71808
// Address: 0x1d71808 - 0x1d71838
void sub_01D71808_0x1d71808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D71808_0x1d71808");
#endif

    ctx->pc = 0x1d71808u;

    // 0x1d71808: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d71808u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d7180c: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D7180Cu;
    {
        const bool branch_taken_0x1d7180c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7180Cu;
        // 0x1d71810: 0x3c0e01d7  lui         $t6, 0x1D7 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)471 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7180c) {
            ctx->pc = 0x1D71880u;
            return;
        }
    }
    ctx->pc = 0x1D71814u;
    // 0x1d71814: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d71814u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d71818: 0x25ce1de8  addiu       $t6, $t6, 0x1DE8
    ctx->pc = 0x1d71818u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 7656));
    // 0x1d7181c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d7181cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d71820: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d71820u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d71824: 0x1a00008  jr          $t5
    ctx->pc = 0x1D71824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D7182Cu: goto label_1d7182c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71824u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D7182Cu;
label_1d7182c:
    // 0x1d7182c: 0x3c0f01d7  lui         $t7, 0x1D7
    ctx->pc = 0x1d7182cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)471 << 16));
    // 0x1d71830: 0x3e00008  jr          $ra
    ctx->pc = 0x1D71830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D71834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71830u;
        // 0x1d71834: 0x25e23dd0  addiu       $v0, $t7, 0x3DD0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 15824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D71830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D71838u;
}
