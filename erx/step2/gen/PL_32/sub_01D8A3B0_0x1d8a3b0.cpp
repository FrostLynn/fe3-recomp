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

// Function: sub_01D8A3B0
// Address: 0x1d8a3b0 - 0x1d8a3d8
void sub_01D8A3B0_0x1d8a3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A3B0_0x1d8a3b0");
#endif

    switch (ctx->pc) {
        case 0x1d8a3c0u: goto label_1d8a3c0;
        default: break;
    }

    ctx->pc = 0x1d8a3b0u;

    // 0x1d8a3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a3b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8a3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8a3b8: 0xc76250c  jal         func_1D89430
    ctx->pc = 0x1D8A3B8u;
    SET_GPR_U32(ctx, 31, 0x1D8A3C0u);
    ctx->pc = 0x1D89430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D89430u, 0x1D8A3B8u, 0x1D8A3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A3C0u;
label_1d8a3c0:
    // 0x1d8a3c0: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x1d8a3c0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a3c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8a3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a3c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d8a3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d8a3cc: 0xf100a  movz        $v0, $zero, $t7
    ctx->pc = 0x1d8a3ccu;
    if (GPR_U64(ctx, 15) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1d8a3d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A3D0u;
        // 0x1d8a3d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A3D8u;
}
