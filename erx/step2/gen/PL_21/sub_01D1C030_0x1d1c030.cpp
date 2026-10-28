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

// Function: sub_01D1C030
// Address: 0x1d1c030 - 0x1d1c060
void sub_01D1C030_0x1d1c030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D1C030_0x1d1c030");
#endif

    ctx->pc = 0x1d1c030u;

    // 0x1d1c030: 0x2c8f0007  sltiu       $t7, $a0, 0x7
    ctx->pc = 0x1d1c030u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1d1c034: 0x11e0001c  beqz        $t7, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D1C034u;
    {
        const bool branch_taken_0x1d1c034 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C034u;
        // 0x1d1c038: 0x3c0e01d2  lui         $t6, 0x1D2 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)466 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c034) {
            ctx->pc = 0x1D1C0A8u;
            return;
        }
    }
    ctx->pc = 0x1D1C03Cu;
    // 0x1d1c03c: 0x47880  sll         $t7, $a0, 2
    ctx->pc = 0x1d1c03cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d1c040: 0x25cece68  addiu       $t6, $t6, -0x3198
    ctx->pc = 0x1d1c040u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294954600));
    // 0x1d1c044: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d1c044u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d1c048: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d1c048u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d1c04c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D1C04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1C054u: goto label_1d1c054;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C04Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1C054u;
label_1d1c054:
    // 0x1d1c054: 0x3c0f01d2  lui         $t7, 0x1D2
    ctx->pc = 0x1d1c054u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)466 << 16));
    // 0x1d1c058: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C058u;
        // 0x1d1c05c: 0x25e22b80  addiu       $v0, $t7, 0x2B80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 11136));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1C058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1C060u;
}
