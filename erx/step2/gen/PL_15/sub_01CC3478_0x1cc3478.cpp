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

// Function: sub_01CC3478
// Address: 0x1cc3478 - 0x1cc34a0
void sub_01CC3478_0x1cc3478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CC3478_0x1cc3478");
#endif

    switch (ctx->pc) {
        case 0x1cc348cu: goto label_1cc348c;
        default: break;
    }

    ctx->pc = 0x1cc3478u;

    // 0x1cc3478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc3478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cc347c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cc3480: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cc3480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cc3484: 0xc730918  jal         func_1CC2460
    ctx->pc = 0x1CC3484u;
    SET_GPR_U32(ctx, 31, 0x1CC348Cu);
    ctx->pc = 0x1CC3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3484u;
    // 0x1cc3488: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CC2460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CC2460u, 0x1CC3484u, 0x1CC348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC348Cu;
label_1cc348c:
    // 0x1cc348c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cc348cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc3490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc3490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc3494: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1cc3494u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1cc3498: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC3498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3498u;
        // 0x1cc349c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC34A0u;
}
