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

// Function: sub_01DA8EA0
// Address: 0x1da8ea0 - 0x1da8fd8
void sub_01DA8EA0_0x1da8ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DA8EA0_0x1da8ea0");
#endif

    switch (ctx->pc) {
        case 0x1da8ec0u: goto label_1da8ec0;
        case 0x1da8ed4u: goto label_1da8ed4;
        case 0x1da8ed8u: goto label_1da8ed8;
        case 0x1da8ef4u: goto label_1da8ef4;
        case 0x1da8f04u: goto label_1da8f04;
        case 0x1da8f50u: goto label_1da8f50;
        case 0x1da8f8cu: goto label_1da8f8c;
        case 0x1da8f98u: goto label_1da8f98;
        case 0x1da8fa8u: goto label_1da8fa8;
        case 0x1da8fc0u: goto label_1da8fc0;
        default: break;
    }

    ctx->pc = 0x1da8ea0u;

    // 0x1da8ea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da8ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da8ea4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8ea8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da8ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da8eac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da8eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da8eb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1da8eb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8eb4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1da8eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1da8eb8: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8EB8u;
    SET_GPR_U32(ctx, 31, 0x1DA8EC0u);
    ctx->pc = 0x1DA8EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8EB8u;
    // 0x1da8ebc: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8EB8u, 0x1DA8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8EC0u;
label_1da8ec0:
    // 0x1da8ec0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1da8ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1da8ec4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DA8EC4u;
    {
        const bool branch_taken_0x1da8ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8EC4u;
        // 0x1da8ec8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8ec4) {
            ctx->pc = 0x1DA8F10u;
            goto label_1da8f10;
        }
    }
    ctx->pc = 0x1DA8ECCu;
    // 0x1da8ecc: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA8ECCu;
    {
        const bool branch_taken_0x1da8ecc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1da8ecc) {
            ctx->pc = 0x1DA8EECu;
            goto label_1da8eec;
        }
    }
    ctx->pc = 0x1DA8ED4u;
label_1da8ed4:
    // 0x1da8ed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1da8ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8ed8:
    // 0x1da8ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da8edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da8ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da8ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8EE4u;
        // 0x1da8ee8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8EECu;
label_1da8eec:
    // 0x1da8eec: 0xc769b94  jal         func_1DA6E50
    ctx->pc = 0x1DA8EECu;
    SET_GPR_U32(ctx, 31, 0x1DA8EF4u);
    ctx->pc = 0x1DA8EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8EECu;
    // 0x1da8ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E50u, 0x1DA8EECu, 0x1DA8EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8EF4u;
label_1da8ef4:
    // 0x1da8ef4: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DA8EF4u;
    {
        const bool branch_taken_0x1da8ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DA8EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8EF4u;
        // 0x1da8ef8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8ef4) {
            ctx->pc = 0x1DA8ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8ed4;
        }
    }
    ctx->pc = 0x1DA8EFCu;
    // 0x1da8efc: 0xc769b96  jal         func_1DA6E58
    ctx->pc = 0x1DA8EFCu;
    SET_GPR_U32(ctx, 31, 0x1DA8F04u);
    ctx->pc = 0x1DA6E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E58u, 0x1DA8EFCu, 0x1DA8F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8F04u;
label_1da8f04:
    // 0x1da8f04: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1DA8F04u;
    {
        const bool branch_taken_0x1da8f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8F04u;
        // 0x1da8f08: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8f04) {
            ctx->pc = 0x1DA8ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8ed8;
        }
    }
    ctx->pc = 0x1DA8F0Cu;
    // 0x1da8f0c: 0x0  nop
    ctx->pc = 0x1da8f0cu;
    // NOP
label_1da8f10:
    // 0x1da8f10: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1da8f10u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1da8f14: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1DA8F14u;
    {
        const bool branch_taken_0x1da8f14 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8F14u;
        // 0x1da8f18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8f14) {
            ctx->pc = 0x1DA8ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8ed8;
        }
    }
    ctx->pc = 0x1DA8F1Cu;
    // 0x1da8f1c: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1da8f1cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1da8f20: 0x3c0e01db  lui         $t6, 0x1DB
    ctx->pc = 0x1da8f20u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)475 << 16));
    // 0x1da8f24: 0x25ceac50  addiu       $t6, $t6, -0x53B0
    ctx->pc = 0x1da8f24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294945872));
    // 0x1da8f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da8f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f2c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1da8f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1da8f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da8f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f34: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1da8f34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1da8f38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da8f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f3c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1da8f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1da8f40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8f40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f44: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da8f44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8f48: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8F48u;
    SET_GPR_U32(ctx, 31, 0x1DA8F50u);
    ctx->pc = 0x1DA8F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8F48u;
    // 0x1da8f4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8F48u, 0x1DA8F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8F50u;
label_1da8f50:
    // 0x1da8f50: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da8f50u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8f54: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1DA8F54u;
    {
        const bool branch_taken_0x1da8f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8F54u;
        // 0x1da8f58: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8f54) {
            ctx->pc = 0x1DA8ED4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da8ed4;
        }
    }
    ctx->pc = 0x1DA8F5Cu;
    // 0x1da8f5c: 0x0  nop
    ctx->pc = 0x1da8f5cu;
    // NOP
    // 0x1da8f60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da8f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da8f64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1da8f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1da8f68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da8f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da8f6c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1da8f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1da8f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1da8f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da8f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f7c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1da8f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8f80: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1da8f80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f84: 0xc769ba4  jal         func_1DA6E90
    ctx->pc = 0x1DA8F84u;
    SET_GPR_U32(ctx, 31, 0x1DA8F8Cu);
    ctx->pc = 0x1DA8F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8F84u;
    // 0x1da8f88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E90u, 0x1DA8F84u, 0x1DA8F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8F8Cu;
label_1da8f8c:
    // 0x1da8f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da8f90: 0xc769b9c  jal         func_1DA6E70
    ctx->pc = 0x1DA8F90u;
    SET_GPR_U32(ctx, 31, 0x1DA8F98u);
    ctx->pc = 0x1DA8F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8F90u;
    // 0x1da8f94: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E70u, 0x1DA8F90u, 0x1DA8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8F98u;
label_1da8f98:
    // 0x1da8f98: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da8f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da8f9c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da8f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da8fa0: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8FA0u;
    SET_GPR_U32(ctx, 31, 0x1DA8FA8u);
    ctx->pc = 0x1DA8FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8FA0u;
    // 0x1da8fa4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8FA0u, 0x1DA8FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8FA8u;
label_1da8fa8:
    // 0x1da8fa8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1da8fa8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da8fac: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1da8facu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1da8fb0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1da8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1da8fb4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1da8fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1da8fb8: 0xc769b98  jal         func_1DA6E60
    ctx->pc = 0x1DA8FB8u;
    SET_GPR_U32(ctx, 31, 0x1DA8FC0u);
    ctx->pc = 0x1DA8FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA8FB8u;
    // 0x1da8fbc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA6E60u, 0x1DA8FB8u, 0x1DA8FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA8FC0u;
label_1da8fc0:
    // 0x1da8fc0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1da8fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1da8fc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da8fc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da8fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da8fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da8fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA8FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA8FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA8FCCu;
        // 0x1da8fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA8FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA8FD4u;
    // 0x1da8fd4: 0x0  nop
    ctx->pc = 0x1da8fd4u;
    // NOP
    ctx->pc = 0x1da8fd8u;
}
