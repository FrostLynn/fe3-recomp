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

// Function: sub_01D7FDB0
// Address: 0x1d7fdb0 - 0x1d7fde0
void sub_01D7FDB0_0x1d7fdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7FDB0_0x1d7fdb0");
#endif

    switch (ctx->pc) {
        case 0x1d7fdc4u: goto label_1d7fdc4;
        default: break;
    }

    ctx->pc = 0x1d7fdb0u;

    // 0x1d7fdb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7fdb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d7fdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d7fdb8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d7fdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d7fdbc: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7FDBCu;
    SET_GPR_U32(ctx, 31, 0x1D7FDC4u);
    ctx->pc = 0x1D7FDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7FDBCu;
    // 0x1d7fdc0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7FDBCu, 0x1D7FDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7FDC4u;
label_1d7fdc4:
    // 0x1d7fdc4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7fdc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7fdc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7fdc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7fdcc: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1d7fdccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d7fdd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7FDD0u;
        // 0x1d7fdd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FDD8u;
    // 0x1d7fdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7FDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7FDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7FDE0u;
}
