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

// Function: sub_01C20050
// Address: 0x1c20050 - 0x1c20078
void sub_01C20050_0x1c20050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C20050_0x1c20050");
#endif

    switch (ctx->pc) {
        case 0x1c20064u: goto label_1c20064;
        default: break;
    }

    ctx->pc = 0x1c20050u;

    // 0x1c20050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c20054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c20058: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c20058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c2005c: 0xc707c5a  jal         func_1C1F168
    ctx->pc = 0x1C2005Cu;
    SET_GPR_U32(ctx, 31, 0x1C20064u);
    ctx->pc = 0x1C20060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2005Cu;
    // 0x1c20060: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1F168u, 0x1C2005Cu, 0x1C20064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20064u;
label_1c20064:
    // 0x1c20064: 0xac40074c  sw          $zero, 0x74C($v0)
    ctx->pc = 0x1c20064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 0));
    // 0x1c20068: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c20068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c2006c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c2006cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20070: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C20070u;
        // 0x1c20074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20078u;
}
