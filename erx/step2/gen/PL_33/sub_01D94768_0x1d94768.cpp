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

// Function: sub_01D94768
// Address: 0x1d94768 - 0x1d947a8
void sub_01D94768_0x1d94768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D94768_0x1d94768");
#endif

    switch (ctx->pc) {
        case 0x1d9477cu: goto label_1d9477c;
        case 0x1d94788u: goto label_1d94788;
        default: break;
    }

    ctx->pc = 0x1d94768u;

    // 0x1d94768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d94768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9476c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9476cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94770: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d94770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d94774: 0xc764a20  jal         func_1D92880
    ctx->pc = 0x1D94774u;
    SET_GPR_U32(ctx, 31, 0x1D9477Cu);
    ctx->pc = 0x1D94778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94774u;
    // 0x1d94778: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92880u, 0x1D94774u, 0x1D9477Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9477Cu;
label_1d9477c:
    // 0x1d9477c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9477cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d94780: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D94780u;
    SET_GPR_U32(ctx, 31, 0x1D94788u);
    ctx->pc = 0x1D94784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94780u;
    // 0x1d94784: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D94780u, 0x1D94788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94788u;
label_1d94788:
    // 0x1d94788: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d94788u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d9478c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9478cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94790: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d94790u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d94794: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94798: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1d94798u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1d9479c: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1d9479cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1d947a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D947A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D947A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D947A0u;
        // 0x1d947a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D947A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D947A8u;
}
