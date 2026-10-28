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

// Function: sub_01DEB2D0
// Address: 0x1deb2d0 - 0x1deb308
void sub_01DEB2D0_0x1deb2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB2D0_0x1deb2d0");
#endif

    switch (ctx->pc) {
        case 0x1deb2e0u: goto label_1deb2e0;
        case 0x1deb2e8u: goto label_1deb2e8;
        default: break;
    }

    ctx->pc = 0x1deb2d0u;

    // 0x1deb2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb2d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb2d8: 0xc77ac1c  jal         func_1DEB070
    ctx->pc = 0x1DEB2D8u;
    SET_GPR_U32(ctx, 31, 0x1DEB2E0u);
    ctx->pc = 0x1DEB070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB070u, 0x1DEB2D8u, 0x1DEB2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB2E0u;
label_1deb2e0:
    // 0x1deb2e0: 0xc77ac1e  jal         func_1DEB078
    ctx->pc = 0x1DEB2E0u;
    SET_GPR_U32(ctx, 31, 0x1DEB2E8u);
    ctx->pc = 0x1DEB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB078u, 0x1DEB2E0u, 0x1DEB2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB2E8u;
label_1deb2e8:
    // 0x1deb2e8: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1deb2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb2ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1deb2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1deb2f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb2f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1deb2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1deb2f8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1deb2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1deb2fc: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1deb2fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1deb300: 0x877abd6  j           func_1DEAF58
    ctx->pc = 0x1DEB300u;
    ctx->pc = 0x1DEB304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB300u;
    // 0x1deb304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF58u;
    sub_01DEAF58_0x1deaf58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DEB308u;
}
