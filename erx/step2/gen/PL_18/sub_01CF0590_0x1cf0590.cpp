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

// Function: sub_01CF0590
// Address: 0x1cf0590 - 0x1cf05b8
void sub_01CF0590_0x1cf0590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF0590_0x1cf0590");
#endif

    switch (ctx->pc) {
        case 0x1cf05a4u: goto label_1cf05a4;
        default: break;
    }

    ctx->pc = 0x1cf0590u;

    // 0x1cf0590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf0590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf0594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf0594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf0598: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf0598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf059c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF059Cu;
    SET_GPR_U32(ctx, 31, 0x1CF05A4u);
    ctx->pc = 0x1CF05A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF059Cu;
    // 0x1cf05a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF059Cu, 0x1CF05A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF05A4u;
label_1cf05a4:
    // 0x1cf05a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cf05a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf05a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf05a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf05ac: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1cf05acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cf05b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF05B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF05B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF05B0u;
        // 0x1cf05b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF05B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF05B8u;
}
