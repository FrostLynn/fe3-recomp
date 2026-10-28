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

// Function: sub_01D28BC0
// Address: 0x1d28bc0 - 0x1d28c00
void sub_01D28BC0_0x1d28bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28BC0_0x1d28bc0");
#endif

    switch (ctx->pc) {
        case 0x1d28bd4u: goto label_1d28bd4;
        case 0x1d28be0u: goto label_1d28be0;
        default: break;
    }

    ctx->pc = 0x1d28bc0u;

    // 0x1d28bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28bc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d28bcc: 0xc749b24  jal         func_1D26C90
    ctx->pc = 0x1D28BCCu;
    SET_GPR_U32(ctx, 31, 0x1D28BD4u);
    ctx->pc = 0x1D28BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28BCCu;
    // 0x1d28bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C90u, 0x1D28BCCu, 0x1D28BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28BD4u;
label_1d28bd4:
    // 0x1d28bd4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d28bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d28bd8: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28BD8u;
    SET_GPR_U32(ctx, 31, 0x1D28BE0u);
    ctx->pc = 0x1D28BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28BD8u;
    // 0x1d28bdc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28BD8u, 0x1D28BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28BE0u;
label_1d28be0:
    // 0x1d28be0: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d28be0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d28be4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28be4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28be8: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d28be8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d28bec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28bf0: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1d28bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1d28bf4: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1d28bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1d28bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28BF8u;
        // 0x1d28bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28C00u;
}
