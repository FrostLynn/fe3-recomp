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

// Function: sub_01DEB308
// Address: 0x1deb308 - 0x1deb340
void sub_01DEB308_0x1deb308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DEB308_0x1deb308");
#endif

    switch (ctx->pc) {
        case 0x1deb320u: goto label_1deb320;
        default: break;
    }

    ctx->pc = 0x1deb308u;

    // 0x1deb308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1deb308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1deb30c: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb30cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1deb310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1deb314: 0x8de400e0  lw          $a0, 0xE0($t7)
    ctx->pc = 0x1deb314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x1deb318: 0xc77abcc  jal         func_1DEAF30
    ctx->pc = 0x1DEB318u;
    SET_GPR_U32(ctx, 31, 0x1DEB320u);
    ctx->pc = 0x1DEB31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEB318u;
    // 0x1deb31c: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEAF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEAF30u, 0x1DEB318u, 0x1DEB320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEB320u;
label_1deb320:
    // 0x1deb320: 0x8f8f8014  lw          $t7, -0x7FEC($gp)
    ctx->pc = 0x1deb320u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934548)));
    // 0x1deb324: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1deb324u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1deb328: 0xaf808018  sw          $zero, -0x7FE8($gp)
    ctx->pc = 0x1deb328u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934552), GPR_U32(ctx, 0));
    // 0x1deb32c: 0xa1ee0430  sb          $t6, 0x430($t7)
    ctx->pc = 0x1deb32cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1072), (uint8_t)GPR_U32(ctx, 14));
    // 0x1deb330: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1deb330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1deb334: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEB334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEB338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEB334u;
        // 0x1deb338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEB334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEB33Cu;
    // 0x1deb33c: 0x0  nop
    ctx->pc = 0x1deb33cu;
    // NOP
    ctx->pc = 0x1deb340u;
}
