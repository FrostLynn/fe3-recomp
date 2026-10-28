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

// Function: sub_01D8AE98
// Address: 0x1d8ae98 - 0x1d8aed0
void sub_01D8AE98_0x1d8ae98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8AE98_0x1d8ae98");
#endif

    switch (ctx->pc) {
        case 0x1d8aeacu: goto label_1d8aeac;
        default: break;
    }

    ctx->pc = 0x1d8ae98u;

    // 0x1d8ae98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8ae98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8ae9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d8ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d8aea0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8aea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8aea4: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8AEA4u;
    SET_GPR_U32(ctx, 31, 0x1D8AEACu);
    ctx->pc = 0x1D8AEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AEA4u;
    // 0x1d8aea8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8AEA4u, 0x1D8AEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8AEACu;
label_1d8aeac:
    // 0x1d8aeac: 0x8c4f0380  lw          $t7, 0x380($v0)
    ctx->pc = 0x1d8aeacu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1d8aeb0: 0x11e00004  beqz        $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8AEB0u;
    {
        const bool branch_taken_0x1d8aeb0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8AEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AEB0u;
        // 0x1d8aeb4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8aeb0) {
            ctx->pc = 0x1D8AEC4u;
            goto label_1d8aec4;
        }
    }
    ctx->pc = 0x1D8AEB8u;
    // 0x1d8aeb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8aeb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8aebc: 0x876226c  j           func_1D889B0
    ctx->pc = 0x1D8AEBCu;
    ctx->pc = 0x1D8AEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8AEBCu;
    // 0x1d8aec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D889B0u;
    sub_01D889B0_0x1d889b0(rdram, ctx, runtime); return;
    ctx->pc = 0x1D8AEC4u;
label_1d8aec4:
    // 0x1d8aec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d8aec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8aec8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8AEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8AEC8u;
        // 0x1d8aecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8AEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8AED0u;
}
