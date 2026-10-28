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

// Function: sub_01C82E60
// Address: 0x1c82e60 - 0x1c82f48
void sub_01C82E60_0x1c82e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C82E60_0x1c82e60");
#endif

    switch (ctx->pc) {
        case 0x1c82e74u: goto label_1c82e74;
        case 0x1c82e88u: goto label_1c82e88;
        case 0x1c82e8cu: goto label_1c82e8c;
        case 0x1c82ea8u: goto label_1c82ea8;
        case 0x1c82eb4u: goto label_1c82eb4;
        case 0x1c82ef4u: goto label_1c82ef4;
        case 0x1c82f20u: goto label_1c82f20;
        case 0x1c82f2cu: goto label_1c82f2c;
        case 0x1c82f38u: goto label_1c82f38;
        default: break;
    }

    ctx->pc = 0x1c82e60u;

    // 0x1c82e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c82e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c82e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c82e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c82e68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c82e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c82e6c: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C82E6Cu;
    SET_GPR_U32(ctx, 31, 0x1C82E74u);
    ctx->pc = 0x1C82E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82E6Cu;
    // 0x1c82e70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C82E6Cu, 0x1C82E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82E74u;
label_1c82e74:
    // 0x1c82e74: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c82e74u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82e78: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C82E78u;
    {
        const bool branch_taken_0x1c82e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C82E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82E78u;
        // 0x1c82e7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82e78) {
            ctx->pc = 0x1C82E9Cu;
            goto label_1c82e9c;
        }
    }
    ctx->pc = 0x1C82E80u;
    // 0x1c82e80: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C82E80u;
    SET_GPR_U32(ctx, 31, 0x1C82E88u);
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C82E80u, 0x1C82E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82E88u;
label_1c82e88:
    // 0x1c82e88: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c82e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c82e8c:
    // 0x1c82e8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c82e8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c82e90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c82e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c82e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82E94u;
        // 0x1c82e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82E9Cu;
label_1c82e9c:
    // 0x1c82e9c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c82e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c82ea0: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82EA0u;
    SET_GPR_U32(ctx, 31, 0x1C82EA8u);
    ctx->pc = 0x1C82EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82EA0u;
    // 0x1c82ea4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82EA0u, 0x1C82EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82EA8u;
label_1c82ea8:
    // 0x1c82ea8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c82ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c82eac: 0xc7203e4  jal         func_1C80F90
    ctx->pc = 0x1C82EACu;
    SET_GPR_U32(ctx, 31, 0x1C82EB4u);
    ctx->pc = 0x1C82EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82EACu;
    // 0x1c82eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F90u, 0x1C82EACu, 0x1C82EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82EB4u;
label_1c82eb4:
    // 0x1c82eb4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C82EB4u;
    {
        const bool branch_taken_0x1c82eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C82EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82EB4u;
        // 0x1c82eb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c82eb4) {
            ctx->pc = 0x1C82E8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c82e8c;
        }
    }
    ctx->pc = 0x1C82EBCu;
    // 0x1c82ebc: 0x0  nop
    ctx->pc = 0x1c82ebcu;
    // NOP
    // 0x1c82ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c82ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c82ec4: 0x3c0f01c9  lui         $t7, 0x1C9
    ctx->pc = 0x1c82ec4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)457 << 16));
    // 0x1c82ec8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c82ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c82ecc: 0x25eece48  addiu       $t6, $t7, -0x31B8
    ctx->pc = 0x1c82eccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294954568));
    // 0x1c82ed0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c82ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c82ed4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1c82ed4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1C8CE4Cu));
    // 0x1c82ed8: 0x8dedce48  lw          $t5, -0x31B8($t7)
    ctx->pc = 0x1c82ed8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1C8CE48u));
    // 0x1c82edc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c82edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82ee0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1c82ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1c82ee4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1c82ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1c82ee8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c82ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c82eec: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82EECu;
    SET_GPR_U32(ctx, 31, 0x1C82EF4u);
    ctx->pc = 0x1C82EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82EECu;
    // 0x1c82ef0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82EECu, 0x1C82EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82EF4u;
label_1c82ef4:
    // 0x1c82ef4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c82ef4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c82ef8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c82ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82efc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c82efcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82f00: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c82f00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c82f04: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c82f04u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c82f08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c82f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82f0c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1c82f0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1c82f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c82f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82f14: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c82f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c82f18: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C82F18u;
    SET_GPR_U32(ctx, 31, 0x1C82F20u);
    ctx->pc = 0x1C82F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82F18u;
    // 0x1c82f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C82F18u, 0x1C82F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F20u;
label_1c82f20:
    // 0x1c82f20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c82f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c82f24: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C82F24u;
    SET_GPR_U32(ctx, 31, 0x1C82F2Cu);
    ctx->pc = 0x1C82F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82F24u;
    // 0x1c82f28: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C82F24u, 0x1C82F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F2Cu;
label_1c82f2c:
    // 0x1c82f2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c82f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c82f30: 0xc7203e6  jal         func_1C80F98
    ctx->pc = 0x1C82F30u;
    SET_GPR_U32(ctx, 31, 0x1C82F38u);
    ctx->pc = 0x1C82F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C82F30u;
    // 0x1c82f34: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F98u, 0x1C82F30u, 0x1C82F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C82F38u;
label_1c82f38:
    // 0x1c82f38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c82f38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c82f3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c82f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c82f40: 0x3e00008  jr          $ra
    ctx->pc = 0x1C82F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C82F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C82F40u;
        // 0x1c82f44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C82F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C82F48u;
}
