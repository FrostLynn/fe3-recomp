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

// Function: sub_01C9B590
// Address: 0x1c9b590 - 0x1c9b5d0
void sub_01C9B590_0x1c9b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9B590_0x1c9b590");
#endif

    switch (ctx->pc) {
        case 0x1c9b5a4u: goto label_1c9b5a4;
        default: break;
    }

    ctx->pc = 0x1c9b590u;

    // 0x1c9b590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9b594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c9b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c9b598: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c9b598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c9b59c: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9B59Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B5A4u);
    ctx->pc = 0x1C9B5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9B59Cu;
    // 0x1c9b5a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9B59Cu, 0x1C9B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9B5A4u;
label_1c9b5a4:
    // 0x1c9b5a4: 0x244f0430  addiu       $t7, $v0, 0x430
    ctx->pc = 0x1c9b5a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x1c9b5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9b5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9b5ac: 0x8dee000c  lw          $t6, 0xC($t7)
    ctx->pc = 0x1c9b5acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
    // 0x1c9b5b0: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1c9b5b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9b5b4: 0xac4d0430  sw          $t5, 0x430($v0)
    ctx->pc = 0x1c9b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 13));
    // 0x1c9b5b8: 0xadee0008  sw          $t6, 0x8($t7)
    ctx->pc = 0x1c9b5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 14));
    // 0x1c9b5bc: 0xaded0010  sw          $t5, 0x10($t7)
    ctx->pc = 0x1c9b5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 16), GPR_U32(ctx, 13));
    // 0x1c9b5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9B5C0u;
        // 0x1c9b5c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B5C8u;
    // 0x1c9b5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9B5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9B5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9B5D0u;
}
