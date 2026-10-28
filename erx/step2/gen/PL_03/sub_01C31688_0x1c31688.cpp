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

// Function: sub_01C31688
// Address: 0x1c31688 - 0x1c316c8
void sub_01C31688_0x1c31688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C31688_0x1c31688");
#endif

    switch (ctx->pc) {
        case 0x1c3169cu: goto label_1c3169c;
        case 0x1c316a8u: goto label_1c316a8;
        default: break;
    }

    ctx->pc = 0x1c31688u;

    // 0x1c31688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c31688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3168c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31690: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c31690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c31694: 0xc70bde0  jal         func_1C2F780
    ctx->pc = 0x1C31694u;
    SET_GPR_U32(ctx, 31, 0x1C3169Cu);
    ctx->pc = 0x1C31698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31694u;
    // 0x1c31698: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F780u, 0x1C31694u, 0x1C3169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3169Cu;
label_1c3169c:
    // 0x1c3169c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c3169cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c316a0: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C316A0u;
    SET_GPR_U32(ctx, 31, 0x1C316A8u);
    ctx->pc = 0x1C316A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C316A0u;
    // 0x1c316a4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C316A0u, 0x1C316A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C316A8u;
label_1c316a8:
    // 0x1c316a8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c316a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c316ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c316acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c316b0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1c316b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1c316b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c316b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c316b8: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1c316b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1c316bc: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1c316bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1c316c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C316C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C316C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C316C0u;
        // 0x1c316c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C316C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C316C8u;
}
