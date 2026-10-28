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

// Function: sub_01DA7B10
// Address: 0x1da7b10 - 0x1da7bf0
void sub_01DA7B10_0x1da7b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7B10_0x1da7b10");
#endif

    switch (ctx->pc) {
        case 0x1da7b24u: goto label_1da7b24;
        case 0x1da7b38u: goto label_1da7b38;
        case 0x1da7b3cu: goto label_1da7b3c;
        case 0x1da7b58u: goto label_1da7b58;
        case 0x1da7b64u: goto label_1da7b64;
        case 0x1da7b94u: goto label_1da7b94;
        case 0x1da7bc0u: goto label_1da7bc0;
        case 0x1da7bccu: goto label_1da7bcc;
        default: break;
    }

    ctx->pc = 0x1da7b10u;

    // 0x1da7b10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7b18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da7b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da7b1c: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA7B1Cu;
    SET_GPR_U32(ctx, 31, 0x1DA7B24u);
    ctx->pc = 0x1DA7B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7B1Cu;
    // 0x1da7b20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA7B1Cu, 0x1DA7B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B24u;
label_1da7b24:
    // 0x1da7b24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da7b24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7b28: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA7B28u;
    {
        const bool branch_taken_0x1da7b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DA7B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B28u;
        // 0x1da7b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7b28) {
            ctx->pc = 0x1DA7B4Cu;
            goto label_1da7b4c;
        }
    }
    ctx->pc = 0x1DA7B30u;
    // 0x1da7b30: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA7B30u;
    SET_GPR_U32(ctx, 31, 0x1DA7B38u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA7B30u, 0x1DA7B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B38u;
label_1da7b38:
    // 0x1da7b38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1da7b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1da7b3c:
    // 0x1da7b3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7b3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7b40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da7b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7b44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B44u;
        // 0x1da7b48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7B4Cu;
label_1da7b4c:
    // 0x1da7b4c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da7b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da7b50: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7B50u;
    SET_GPR_U32(ctx, 31, 0x1DA7B58u);
    ctx->pc = 0x1DA7B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7B50u;
    // 0x1da7b54: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7B50u, 0x1DA7B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B58u;
label_1da7b58:
    // 0x1da7b58: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1da7b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1da7b5c: 0xc769ba6  jal         func_1DA6E98
    ctx->pc = 0x1DA7B5Cu;
    SET_GPR_U32(ctx, 31, 0x1DA7B64u);
    ctx->pc = 0x1DA7B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7B5Cu;
    // 0x1da7b60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E98u, 0x1DA7B5Cu, 0x1DA7B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B64u;
label_1da7b64:
    // 0x1da7b64: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DA7B64u;
    {
        const bool branch_taken_0x1da7b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7B64u;
        // 0x1da7b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7b64) {
            ctx->pc = 0x1DA7B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7b3c;
        }
    }
    ctx->pc = 0x1DA7B6Cu;
    // 0x1da7b6c: 0x0  nop
    ctx->pc = 0x1da7b6cu;
    // NOP
    // 0x1da7b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da7b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da7b74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da7b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da7b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da7b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da7b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da7b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7b84: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1da7b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7b88: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da7b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da7b8c: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1DA7B94u);
    ctx->pc = 0x1DA7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7B8Cu;
    // 0x1da7b90: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7B8Cu, 0x1DA7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7B94u;
label_1da7b94:
    // 0x1da7b94: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1da7b94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1da7b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7b9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1da7b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7ba0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da7ba0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7ba4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da7ba4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da7ba8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da7ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7bac: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1da7bacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1da7bb0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da7bb0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7bb4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1da7bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da7bb8: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA7BB8u;
    SET_GPR_U32(ctx, 31, 0x1DA7BC0u);
    ctx->pc = 0x1DA7BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7BB8u;
    // 0x1da7bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA7BB8u, 0x1DA7BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7BC0u;
label_1da7bc0:
    // 0x1da7bc0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da7bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da7bc4: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7BC4u;
    SET_GPR_U32(ctx, 31, 0x1DA7BCCu);
    ctx->pc = 0x1DA7BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7BC4u;
    // 0x1da7bc8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7BC4u, 0x1DA7BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7BCCu;
label_1da7bcc:
    // 0x1da7bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1da7bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da7bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7bd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7bd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7bd8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1da7bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1da7bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da7bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7be0: 0x8769ba8  j           func_1DA6EA0
    ctx->pc = 0x1DA7BE0u;
    ctx->pc = 0x1DA7BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7BE0u;
    // 0x1da7be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6EA0u;
    sub_01DA6EA0_0x1da6ea0(rdram, ctx, runtime); return;
    ctx->pc = 0x1DA7BE8u;
    // 0x1da7be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7BF0u;
}
