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

// Function: sub_01DEB340
// Address: 0x1deb340 - 0x1deb378
void sub_01DEB340_0x1deb340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB340_0x1deb340");
#endif

    switch (ctx->pc) {
        case 0x1deb350u: goto label_1deb350;
        case 0x1deb358u: goto label_1deb358;
        default: break;
    }

    ctx->pc = 0x1deb340u;

    // 0x1deb340: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb344: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb348: 0xc77ac1c  jal         func_1DEB070
    ctx->pc = 0x1DEB348u;
    SET_GPR_U32(ctx, 31, 0x1DEB350u);
    ctx->pc = 0x1DEB070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB070u, 0x1DEB348u, 0x1DEB350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB350u;
label_1deb350:
    // 0x1deb350: 0xc77ac1e  jal         func_1DEB078
    ctx->pc = 0x1DEB350u;
    SET_GPR_U32(ctx, 31, 0x1DEB358u);
    ctx->pc = 0x1DEB078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEB078u, 0x1DEB350u, 0x1DEB358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB358u;
label_1deb358:
    // 0x1deb358: 0x8f848014  lw          $a0, -0x7FEC($gp)
    ctx->pc = 0x1deb358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb35c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1deb35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1deb360: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb364: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1deb364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1deb368: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1deb368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1deb36c: 0x2408fffe  addiu       $t0, $zero, -0x2
    ctx->pc = 0x1deb36cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1deb370: 0x877abd6  j           func_1DEAF58
    ctx->pc = 0x1DEB370u;
    ctx->pc = 0x1DEB374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB370u;
    // 0x1deb374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF58u;
    sub_01DEAF58_0x1deaf58(rdram, ctx, runtime); return;
    ctx->pc = 0x1DEB378u;
}
