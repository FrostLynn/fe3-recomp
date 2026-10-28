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

// Function: sub_01C11660
// Address: 0x1c11660 - 0x1c116a0
void sub_01C11660_0x1c11660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C11660_0x1c11660");
#endif

    switch (ctx->pc) {
        case 0x1c11674u: goto label_1c11674;
        case 0x1c11680u: goto label_1c11680;
        default: break;
    }

    ctx->pc = 0x1c11660u;

    // 0x1c11660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c11660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c11664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c11664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c11668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c11668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c1166c: 0xc703de0  jal         func_1C0F780
    ctx->pc = 0x1C1166Cu;
    SET_GPR_U32(ctx, 31, 0x1C11674u);
    ctx->pc = 0x1C11670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1166Cu;
    // 0x1c11670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F780u, 0x1C1166Cu, 0x1C11674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11674u;
label_1c11674:
    // 0x1c11674: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c11674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c11678: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C11678u;
    SET_GPR_U32(ctx, 31, 0x1C11680u);
    ctx->pc = 0x1C1167Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C11678u;
    // 0x1c1167c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C11678u, 0x1C11680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C11680u;
label_1c11680:
    // 0x1c11680: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c11680u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c11684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c11684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c11688: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1c11688u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1c1168c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1168cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c11690: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1c11690u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1c11694: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1c11694u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1c11698: 0x3e00008  jr          $ra
    ctx->pc = 0x1C11698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C11698u;
        // 0x1c1169c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C11698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C116A0u;
}
