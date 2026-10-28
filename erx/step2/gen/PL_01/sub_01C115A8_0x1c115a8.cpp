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

// Function: sub_01C115A8
// Address: 0x1c115a8 - 0x1c115e8
void sub_01C115A8_0x1c115a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C115A8_0x1c115a8");
#endif

    switch (ctx->pc) {
        case 0x1c115bcu: goto label_1c115bc;
        case 0x1c115c8u: goto label_1c115c8;
        default: break;
    }

    ctx->pc = 0x1c115a8u;

    // 0x1c115a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c115a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c115ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c115acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c115b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c115b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c115b4: 0xc703de0  jal         func_1C0F780
    ctx->pc = 0x1C115B4u;
    SET_GPR_U32(ctx, 31, 0x1C115BCu);
    ctx->pc = 0x1C115B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C115B4u;
    // 0x1c115b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F780u, 0x1C115B4u, 0x1C115BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C115BCu;
label_1c115bc:
    // 0x1c115bc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c115bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c115c0: 0xc703dd6  jal         func_1C0F758
    ctx->pc = 0x1C115C0u;
    SET_GPR_U32(ctx, 31, 0x1C115C8u);
    ctx->pc = 0x1C115C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C115C0u;
    // 0x1c115c4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0F758u, 0x1C115C0u, 0x1C115C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C115C8u;
label_1c115c8:
    // 0x1c115c8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1c115c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1c115cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c115ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c115d0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1c115d0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1c115d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c115d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c115d8: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1c115d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1c115dc: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1c115dcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1c115e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C115E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C115E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C115E0u;
        // 0x1c115e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C115E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C115E8u;
}
