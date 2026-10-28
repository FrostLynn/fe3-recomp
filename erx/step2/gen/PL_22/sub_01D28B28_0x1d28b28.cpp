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

// Function: sub_01D28B28
// Address: 0x1d28b28 - 0x1d28bc0
void sub_01D28B28_0x1d28b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28B28_0x1d28b28");
#endif

    switch (ctx->pc) {
        case 0x1d28b3cu: goto label_1d28b3c;
        case 0x1d28b50u: goto label_1d28b50;
        case 0x1d28b54u: goto label_1d28b54;
        case 0x1d28ba4u: goto label_1d28ba4;
        default: break;
    }

    ctx->pc = 0x1d28b28u;

    // 0x1d28b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28b30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d28b34: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D28B34u;
    SET_GPR_U32(ctx, 31, 0x1D28B3Cu);
    ctx->pc = 0x1D28B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28B34u;
    // 0x1d28b38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D28B34u, 0x1D28B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B3Cu;
label_1d28b3c:
    // 0x1d28b3c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1d28b3cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28b40: 0x144e0008  bne         $v0, $t6, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D28B40u;
    {
        const bool branch_taken_0x1d28b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 14));
        ctx->pc = 0x1D28B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B40u;
        // 0x1d28b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28b40) {
            ctx->pc = 0x1D28B64u;
            goto label_1d28b64;
        }
    }
    ctx->pc = 0x1D28B48u;
    // 0x1d28b48: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D28B48u;
    SET_GPR_U32(ctx, 31, 0x1D28B50u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D28B48u, 0x1D28B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28B50u;
label_1d28b50:
    // 0x1d28b50: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d28b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d28b54:
    // 0x1d28b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28b58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B5Cu;
        // 0x1d28b60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28B64u;
label_1d28b64:
    // 0x1d28b64: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x1d28b64u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d28b68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d28b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b6c: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D28B6Cu;
    {
        const bool branch_taken_0x1d28b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28B6Cu;
        // 0x1d28b70: 0xa1ee039c  sb          $t6, 0x39C($t7) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 15), 924), (uint8_t)GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28b6c) {
            ctx->pc = 0x1D28B54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28b54;
        }
    }
    ctx->pc = 0x1D28B74u;
    // 0x1d28b74: 0x0  nop
    ctx->pc = 0x1d28b74u;
    // NOP
    // 0x1d28b78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d28b7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28b84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d28b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d28b88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d28b8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d28b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d28b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28b94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b98: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d28b98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d28b9c: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D28B9Cu;
    SET_GPR_U32(ctx, 31, 0x1D28BA4u);
    ctx->pc = 0x1D28BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28B9Cu;
    // 0x1d28ba0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D28B9Cu, 0x1D28BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28BA4u;
label_1d28ba4:
    // 0x1d28ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28ba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28bb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d28bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d28bb4: 0x8749b1e  j           func_1D26C78
    ctx->pc = 0x1D28BB4u;
    ctx->pc = 0x1D28BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28BB4u;
    // 0x1d28bb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    sub_01D26C78_0x1d26c78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D28BBCu;
    // 0x1d28bbc: 0x0  nop
    ctx->pc = 0x1d28bbcu;
    // NOP
    ctx->pc = 0x1d28bc0u;
}
