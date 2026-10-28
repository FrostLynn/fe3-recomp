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

// Function: sub_01CCFB60
// Address: 0x1ccfb60 - 0x1ccfb98
void sub_01CCFB60_0x1ccfb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCFB60_0x1ccfb60");
#endif

    switch (ctx->pc) {
        case 0x1ccfb74u: goto label_1ccfb74;
        case 0x1ccfb80u: goto label_1ccfb80;
        default: break;
    }

    ctx->pc = 0x1ccfb60u;

    // 0x1ccfb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ccfb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ccfb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccfb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccfb68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ccfb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ccfb6c: 0xc73352c  jal         func_1CCD4B0
    ctx->pc = 0x1CCFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CCFB74u);
    ctx->pc = 0x1CCFB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFB6Cu;
    // 0x1ccfb70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD4B0u, 0x1CCFB6Cu, 0x1CCFB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFB74u;
label_1ccfb74:
    // 0x1ccfb74: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ccfb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ccfb78: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCFB78u;
    SET_GPR_U32(ctx, 31, 0x1CCFB80u);
    ctx->pc = 0x1CCFB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCFB78u;
    // 0x1ccfb7c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCFB78u, 0x1CCFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCFB80u;
label_1ccfb80:
    // 0x1ccfb80: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ccfb80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccfb84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccfb84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccfb88: 0xa04f0950  sb          $t7, 0x950($v0)
    ctx->pc = 0x1ccfb88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2384), (uint8_t)GPR_U32(ctx, 15));
    // 0x1ccfb8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ccfb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccfb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCFB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCFB90u;
        // 0x1ccfb94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCFB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCFB98u;
}
