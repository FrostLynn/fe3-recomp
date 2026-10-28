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

// Function: sub_01DA7BF0
// Address: 0x1da7bf0 - 0x1da7d18
void sub_01DA7BF0_0x1da7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA7BF0_0x1da7bf0");
#endif

    switch (ctx->pc) {
        case 0x1da7c18u: goto label_1da7c18;
        case 0x1da7c2cu: goto label_1da7c2c;
        case 0x1da7c30u: goto label_1da7c30;
        case 0x1da7c50u: goto label_1da7c50;
        case 0x1da7c60u: goto label_1da7c60;
        case 0x1da7c94u: goto label_1da7c94;
        case 0x1da7cccu: goto label_1da7ccc;
        case 0x1da7cd8u: goto label_1da7cd8;
        case 0x1da7ce8u: goto label_1da7ce8;
        case 0x1da7d00u: goto label_1da7d00;
        default: break;
    }

    ctx->pc = 0x1da7bf0u;

    // 0x1da7bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da7bf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1da7bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1da7bf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7bfc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da7bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da7c00: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1da7c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1da7c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1da7c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da7c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c0c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da7c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da7c10: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7C10u;
    SET_GPR_U32(ctx, 31, 0x1DA7C18u);
    ctx->pc = 0x1DA7C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7C10u;
    // 0x1da7c14: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7C10u, 0x1DA7C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7C18u;
label_1da7c18:
    // 0x1da7c18: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1da7c18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da7c1c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA7C1Cu;
    {
        const bool branch_taken_0x1da7c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C1Cu;
        // 0x1da7c20: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c1c) {
            ctx->pc = 0x1DA7C68u;
            goto label_1da7c68;
        }
    }
    ctx->pc = 0x1DA7C24u;
    // 0x1da7c24: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DA7C24u;
    {
        const bool branch_taken_0x1da7c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1da7c24) {
            ctx->pc = 0x1DA7C48u;
            goto label_1da7c48;
        }
    }
    ctx->pc = 0x1DA7C2Cu;
label_1da7c2c:
    // 0x1da7c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da7c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da7c30:
    // 0x1da7c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da7c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7c38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1da7c38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da7c3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1da7c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1da7c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C40u;
        // 0x1da7c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7C48u;
label_1da7c48:
    // 0x1da7c48: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA7C48u;
    SET_GPR_U32(ctx, 31, 0x1DA7C50u);
    ctx->pc = 0x1DA7C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7C48u;
    // 0x1da7c4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA7C48u, 0x1DA7C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7C50u;
label_1da7c50:
    // 0x1da7c50: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DA7C50u;
    {
        const bool branch_taken_0x1da7c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DA7C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C50u;
        // 0x1da7c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c50) {
            ctx->pc = 0x1DA7C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7c2c;
        }
    }
    ctx->pc = 0x1DA7C58u;
    // 0x1da7c58: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA7C58u;
    SET_GPR_U32(ctx, 31, 0x1DA7C60u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA7C58u, 0x1DA7C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7C60u;
label_1da7c60:
    // 0x1da7c60: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1DA7C60u;
    {
        const bool branch_taken_0x1da7c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C60u;
        // 0x1da7c64: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c60) {
            ctx->pc = 0x1DA7C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7c30;
        }
    }
    ctx->pc = 0x1DA7C68u;
label_1da7c68:
    // 0x1da7c68: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1da7c68u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1da7c6c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DA7C6Cu;
    {
        const bool branch_taken_0x1da7c6c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C6Cu;
        // 0x1da7c70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c6c) {
            ctx->pc = 0x1DA7C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7c30;
        }
    }
    ctx->pc = 0x1DA7C74u;
    // 0x1da7c74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1da7c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da7c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da7c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da7c80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da7c84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7c88: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da7c88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7c8c: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA7C8Cu;
    SET_GPR_U32(ctx, 31, 0x1DA7C94u);
    ctx->pc = 0x1DA7C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7C8Cu;
    // 0x1da7c90: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA7C8Cu, 0x1DA7C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7C94u;
label_1da7c94:
    // 0x1da7c94: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da7c94u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7c98: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1DA7C98u;
    {
        const bool branch_taken_0x1da7c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7C98u;
        // 0x1da7c9c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7c98) {
            ctx->pc = 0x1DA7C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da7c2c;
        }
    }
    ctx->pc = 0x1DA7CA0u;
    // 0x1da7ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da7ca4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da7ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da7ca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da7ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da7cac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da7cacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7cb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da7cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da7cb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da7cb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7cb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da7cb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7cbc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da7cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7cc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da7cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7cc4: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA7CC4u;
    SET_GPR_U32(ctx, 31, 0x1DA7CCCu);
    ctx->pc = 0x1DA7CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7CC4u;
    // 0x1da7cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA7CC4u, 0x1DA7CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7CCCu;
label_1da7ccc:
    // 0x1da7ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da7cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da7cd0: 0xc769b9c  jal         func_1DA6E70
    ctx->pc = 0x1DA7CD0u;
    SET_GPR_U32(ctx, 31, 0x1DA7CD8u);
    ctx->pc = 0x1DA7CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7CD0u;
    // 0x1da7cd4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E70u, 0x1DA7CD0u, 0x1DA7CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7CD8u;
label_1da7cd8:
    // 0x1da7cd8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da7cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da7cdc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da7cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da7ce0: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7CE0u;
    SET_GPR_U32(ctx, 31, 0x1DA7CE8u);
    ctx->pc = 0x1DA7CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7CE0u;
    // 0x1da7ce4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7CE0u, 0x1DA7CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7CE8u;
label_1da7ce8:
    // 0x1da7ce8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da7ce8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da7cec: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1da7cecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1da7cf0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1da7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1da7cf4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da7cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da7cf8: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA7CF8u;
    SET_GPR_U32(ctx, 31, 0x1DA7D00u);
    ctx->pc = 0x1DA7CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA7CF8u;
    // 0x1da7cfc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA7CF8u, 0x1DA7D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA7D00u;
label_1da7d00:
    // 0x1da7d00: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1da7d00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1da7d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da7d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da7d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da7d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da7d0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA7D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA7D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA7D0Cu;
        // 0x1da7d10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA7D0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA7D14u;
    // 0x1da7d14: 0x0  nop
    ctx->pc = 0x1da7d14u;
    // NOP
    ctx->pc = 0x1da7d18u;
}
