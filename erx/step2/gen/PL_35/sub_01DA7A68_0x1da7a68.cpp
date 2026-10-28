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

// Function: sub_01DA7A68
// Address: 0x1da7a68 - 0x1da7af8
void sub_01DA7A68_0x1da7a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7A68_0x1da7a68");
#endif

    switch (ctx->pc) {
        case 0x1da7a7cu: goto label_1da7a7c;
        case 0x1da7a90u: goto label_1da7a90;
        case 0x1da7a94u: goto label_1da7a94;
        case 0x1da7adcu: goto label_1da7adc;
        default: break;
    }

    ctx->pc = 0x1da7a68u;

    // 0x1da7a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7a70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da7a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da7a74: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA7A74u;
    SET_GPR_U32(ctx, 31, 0x1DA7A7Cu);
    ctx->pc = 0x1DA7A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7A74u;
    // 0x1da7a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA7A74u, 0x1DA7A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A7Cu;
label_1da7a7c:
    // 0x1da7a7c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da7a7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7a80: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA7A80u;
    {
        const bool branch_taken_0x1da7a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DA7A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7A80u;
        // 0x1da7a84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7a80) {
            ctx->pc = 0x1DA7AA4u;
            goto label_1da7aa4;
        }
    }
    ctx->pc = 0x1DA7A88u;
    // 0x1da7a88: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA7A88u;
    SET_GPR_U32(ctx, 31, 0x1DA7A90u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA7A88u, 0x1DA7A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7A90u;
label_1da7a90:
    // 0x1da7a90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da7a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1da7a94:
    // 0x1da7a94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7a94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7a98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da7a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7A9Cu;
        // 0x1da7aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7AA4u;
label_1da7aa4:
    // 0x1da7aa4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DA7AA4u;
    {
        const bool branch_taken_0x1da7aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7AA4u;
        // 0x1da7aa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7aa4) {
            ctx->pc = 0x1DA7A94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7a94;
        }
    }
    ctx->pc = 0x1DA7AACu;
    // 0x1da7aac: 0x0  nop
    ctx->pc = 0x1da7aacu;
    // NOP
    // 0x1da7ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da7ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7abc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da7abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da7ac0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da7ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da7ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da7ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da7ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7acc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da7accu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ad0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1da7ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da7ad4: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA7AD4u;
    SET_GPR_U32(ctx, 31, 0x1DA7ADCu);
    ctx->pc = 0x1DA7AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7AD4u;
    // 0x1da7ad8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA7AD4u, 0x1DA7ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7ADCu;
label_1da7adc:
    // 0x1da7adc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da7ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7ae8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1da7ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da7aec: 0x8769b9c  j           func_1DA6E70
    ctx->pc = 0x1DA7AECu;
    ctx->pc = 0x1DA7AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7AECu;
    // 0x1da7af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    sub_01DA6E70_0x1da6e70(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA7AF4u;
    // 0x1da7af4: 0x0  nop
    ctx->pc = 0x1da7af4u;
    // NOP
    ctx->pc = 0x1da7af8u;
}
