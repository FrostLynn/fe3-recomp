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

// Function: sub_01D9E888
// Address: 0x1d9e888 - 0x1d9e8c8
void sub_01D9E888_0x1d9e888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E888_0x1d9e888");
#endif

    switch (ctx->pc) {
        case 0x1d9e89cu: goto label_1d9e89c;
        case 0x1d9e8a8u: goto label_1d9e8a8;
        default: break;
    }

    ctx->pc = 0x1d9e888u;

    // 0x1d9e888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e890: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9e890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9e894: 0xc767260  jal         func_1D9C980
    ctx->pc = 0x1D9E894u;
    SET_GPR_U32(ctx, 31, 0x1D9E89Cu);
    ctx->pc = 0x1D9E898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E894u;
    // 0x1d9e898: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C980u, 0x1D9E894u, 0x1D9E89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E89Cu;
label_1d9e89c:
    // 0x1d9e89c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9e89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9e8a0: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E8A0u;
    SET_GPR_U32(ctx, 31, 0x1D9E8A8u);
    ctx->pc = 0x1D9E8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E8A0u;
    // 0x1d9e8a4: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E8A0u, 0x1D9E8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E8A8u;
label_1d9e8a8:
    // 0x1d9e8a8: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d9e8a8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d9e8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e8b0: 0x25ef0070  addiu       $t7, $t7, 0x70
    ctx->pc = 0x1d9e8b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 112));
    // 0x1d9e8b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9e8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e8b8: 0xade04598  sw          $zero, 0x4598($t7)
    ctx->pc = 0x1d9e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17816), GPR_U32(ctx, 0));
    // 0x1d9e8bc: 0xade04590  sw          $zero, 0x4590($t7)
    ctx->pc = 0x1d9e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 17808), GPR_U32(ctx, 0));
    // 0x1d9e8c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E8C0u;
        // 0x1d9e8c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E8C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E8C8u;
}
