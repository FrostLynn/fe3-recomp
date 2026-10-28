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

// Function: sub_01D93880
// Address: 0x1d93880 - 0x1d938a8
void sub_01D93880_0x1d93880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93880_0x1d93880");
#endif

    switch (ctx->pc) {
        case 0x1d93894u: goto label_1d93894;
        default: break;
    }

    ctx->pc = 0x1d93880u;

    // 0x1d93880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d93884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d93884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d93888: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d93888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9388c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D9388Cu;
    SET_GPR_U32(ctx, 31, 0x1D93894u);
    ctx->pc = 0x1D93890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9388Cu;
    // 0x1d93890: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D9388Cu, 0x1D93894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93894u;
label_1d93894:
    // 0x1d93894: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d93894u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d93898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9389c: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1d9389cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d938a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D938A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D938A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D938A0u;
        // 0x1d938a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D938A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D938A8u;
}
