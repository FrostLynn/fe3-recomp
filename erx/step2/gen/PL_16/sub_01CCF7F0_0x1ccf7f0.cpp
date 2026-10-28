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

// Function: sub_01CCF7F0
// Address: 0x1ccf7f0 - 0x1ccf818
void sub_01CCF7F0_0x1ccf7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCF7F0_0x1ccf7f0");
#endif

    switch (ctx->pc) {
        case 0x1ccf804u: goto label_1ccf804;
        default: break;
    }

    ctx->pc = 0x1ccf7f0u;

    // 0x1ccf7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccf7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccf7f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ccf7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ccf7f8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1ccf7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ccf7fc: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCF7FCu;
    SET_GPR_U32(ctx, 31, 0x1CCF804u);
    ctx->pc = 0x1CCF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCF7FCu;
    // 0x1ccf800: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCF7FCu, 0x1CCF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCF804u;
label_1ccf804:
    // 0x1ccf804: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1ccf804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1ccf808: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1ccf808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1ccf80c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ccf80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccf810: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCF810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCF810u;
        // 0x1ccf814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCF810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCF818u;
}
