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

// Function: sub_01CB8798
// Address: 0x1cb8798 - 0x1cb87d8
void sub_01CB8798_0x1cb8798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8798_0x1cb8798");
#endif

    switch (ctx->pc) {
        case 0x1cb87acu: goto label_1cb87ac;
        case 0x1cb87b8u: goto label_1cb87b8;
        default: break;
    }

    ctx->pc = 0x1cb8798u;

    // 0x1cb8798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb879c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb879cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb87a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb87a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb87a4: 0xc72d9e0  jal         func_1CB6780
    ctx->pc = 0x1CB87A4u;
    SET_GPR_U32(ctx, 31, 0x1CB87ACu);
    ctx->pc = 0x1CB87A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB87A4u;
    // 0x1cb87a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6780u, 0x1CB87A4u, 0x1CB87ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB87ACu;
label_1cb87ac:
    // 0x1cb87ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb87acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb87b0: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB87B0u;
    SET_GPR_U32(ctx, 31, 0x1CB87B8u);
    ctx->pc = 0x1CB87B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB87B0u;
    // 0x1cb87b4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB87B0u, 0x1CB87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB87B8u;
label_1cb87b8:
    // 0x1cb87b8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb87b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb87bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb87bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb87c0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1cb87c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1cb87c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb87c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb87c8: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1cb87c8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1cb87cc: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1cb87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1cb87d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB87D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB87D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB87D0u;
        // 0x1cb87d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB87D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB87D8u;
}
