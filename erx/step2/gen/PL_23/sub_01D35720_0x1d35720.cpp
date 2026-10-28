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

// Function: sub_01D35720
// Address: 0x1d35720 - 0x1d35750
void sub_01D35720_0x1d35720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D35720_0x1d35720");
#endif

    switch (ctx->pc) {
        case 0x1d35740u: goto label_1d35740;
        default: break;
    }

    ctx->pc = 0x1d35720u;

    // 0x1d35720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d35720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d35724: 0x3c0401d3  lui         $a0, 0x1D3
    ctx->pc = 0x1d35724u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)467 << 16));
    // 0x1d35728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d35728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d3572c: 0x3c0501d3  lui         $a1, 0x1D3
    ctx->pc = 0x1d3572cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)467 << 16));
    // 0x1d35730: 0x248435b8  addiu       $a0, $a0, 0x35B8
    ctx->pc = 0x1d35730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13752));
    // 0x1d35734: 0x24a56190  addiu       $a1, $a1, 0x6190
    ctx->pc = 0x1d35734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24976));
    // 0x1d35738: 0xc74cd70  jal         func_1D335C0
    ctx->pc = 0x1D35738u;
    SET_GPR_U32(ctx, 31, 0x1D35740u);
    ctx->pc = 0x1D3573Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D35738u;
    // 0x1d3573c: 0x2406022c  addiu       $a2, $zero, 0x22C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D335C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D335C0u, 0x1D35738u, 0x1D35740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D35740u;
label_1d35740:
    // 0x1d35740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d35740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d35744: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d35744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d35748: 0x3e00008  jr          $ra
    ctx->pc = 0x1D35748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D35748u;
        // 0x1d3574c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D35748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D35750u;
}
