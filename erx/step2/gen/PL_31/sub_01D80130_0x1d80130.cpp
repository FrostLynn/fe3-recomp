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

// Function: sub_01D80130
// Address: 0x1d80130 - 0x1d80160
void sub_01D80130_0x1d80130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D80130_0x1d80130");
#endif

    ctx->pc = 0x1d80130u;

    // 0x1d80130: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d80130u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d80134: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D80134u;
    {
        const bool branch_taken_0x1d80134 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D80138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80134u;
        // 0x1d80138: 0x3c0e01d8  lui         $t6, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)472 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80134) {
            ctx->pc = 0x1D801A8u;
            return;
        }
    }
    ctx->pc = 0x1D8013Cu;
    // 0x1d8013c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d8013cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d80140: 0x25ce0c20  addiu       $t6, $t6, 0xC20
    ctx->pc = 0x1d80140u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3104));
    // 0x1d80144: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d80144u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d80148: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d80148u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8014c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D8014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D80154u: goto label_1d80154;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8014Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D80154u;
label_1d80154:
    // 0x1d80154: 0x3c0f01d8  lui         $t7, 0x1D8
    ctx->pc = 0x1d80154u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)472 << 16));
    // 0x1d80158: 0x3e00008  jr          $ra
    ctx->pc = 0x1D80158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D80158u;
        // 0x1d8015c: 0x25e24c80  addiu       $v0, $t7, 0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 19584));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D80158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D80160u;
}
