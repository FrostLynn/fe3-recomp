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

// Function: sub_01C43EE0
// Address: 0x1c43ee0 - 0x1c43fe4
void sub_01C43EE0_0x1c43ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C43EE0_0x1c43ee0");
#endif

    switch (ctx->pc) {
        case 0x1c43f04u: goto label_1c43f04;
        case 0x1c43f18u: goto label_1c43f18;
        case 0x1c43f48u: goto label_1c43f48;
        case 0x1c43f88u: goto label_1c43f88;
        case 0x1c43fc0u: goto label_1c43fc0;
        case 0x1c43fc8u: goto label_1c43fc8;
        case 0x1c43fccu: goto label_1c43fcc;
        default: break;
    }

    ctx->pc = 0x1c43ee0u;

    // 0x1c43ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c43ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c43ee4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c43ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1c43ee8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c43ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1c43eec: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c43eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c43ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c43ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43ef4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c43ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1c43ef8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c43ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c43efc: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C43EFCu;
    SET_GPR_U32(ctx, 31, 0x1C43F04u);
    ctx->pc = 0x1C43F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43EFCu;
    // 0x1c43f00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C43EFCu, 0x1C43F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F04u;
label_1c43f04:
    // 0x1c43f04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c43f04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c43f08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c43f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43f0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43f10: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C43F10u;
    SET_GPR_U32(ctx, 31, 0x1C43F18u);
    ctx->pc = 0x1C43F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43F10u;
    // 0x1c43f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C43F10u, 0x1C43F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F18u;
label_1c43f18:
    // 0x1c43f18: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c43f18u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c43f1c: 0x2dcf0005  sltiu       $t7, $t6, 0x5
    ctx->pc = 0x1c43f1cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c43f20: 0x11e00029  beqz        $t7, . + 4 + (0x29 << 2)
    ctx->pc = 0x1C43F20u;
    {
        const bool branch_taken_0x1c43f20 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43F20u;
        // 0x1c43f24: 0xe7880  sll         $t7, $t6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43f20) {
            ctx->pc = 0x1C43FC8u;
            goto label_1c43fc8;
        }
    }
    ctx->pc = 0x1C43F28u;
    // 0x1c43f28: 0x3c0e01c4  lui         $t6, 0x1C4
    ctx->pc = 0x1c43f28u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)452 << 16));
    // 0x1c43f2c: 0x25ce5bd0  addiu       $t6, $t6, 0x5BD0
    ctx->pc = 0x1c43f2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23504));
    // 0x1c43f30: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c43f30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c43f34: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c43f34u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c43f38: 0x1a00008  jr          $t5
    ctx->pc = 0x1C43F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C43F40u: goto label_1c43f40;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43F38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C43F40u;
label_1c43f40:
    // 0x1c43f40: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C43F40u;
    SET_GPR_U32(ctx, 31, 0x1C43F48u);
    ctx->pc = 0x1C43F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43F40u;
    // 0x1c43f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C43F40u, 0x1C43F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F48u;
label_1c43f48:
    // 0x1c43f48: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c43f48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c43f4c: 0x144f001e  bne         $v0, $t7, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C43F4Cu;
    {
        const bool branch_taken_0x1c43f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C43F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43F4Cu;
        // 0x1c43f50: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43f4c) {
            ctx->pc = 0x1C43FC8u;
            goto label_1c43fc8;
        }
    }
    ctx->pc = 0x1C43F54u;
    // 0x1c43f54: 0x8e0e0024  lw          $t6, 0x24($s0)
    ctx->pc = 0x1c43f54u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1c43f58: 0x3c0f01c5  lui         $t7, 0x1C5
    ctx->pc = 0x1c43f58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)453 << 16));
    // 0x1c43f5c: 0x25ef9910  addiu       $t7, $t7, -0x66F0
    ctx->pc = 0x1c43f5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294940944));
    // 0x1c43f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43f64: 0xe7080  sll         $t6, $t6, 2
    ctx->pc = 0x1c43f64u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c43f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c43f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43f6c: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c43f6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c43f70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c43f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43f74: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x1c43f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c43f78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c43f78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43f7c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c43f7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c43f80: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C43F80u;
    SET_GPR_U32(ctx, 31, 0x1C43F88u);
    ctx->pc = 0x1C43F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43F80u;
    // 0x1c43f84: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C43F80u, 0x1C43F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43F88u;
label_1c43f88:
    // 0x1c43f88: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1c43f88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c43f8c: 0x262407d4  addiu       $a0, $s1, 0x7D4
    ctx->pc = 0x1c43f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
    // 0x1c43f90: 0x8e0c0000  lw          $t4, 0x0($s0)
    ctx->pc = 0x1c43f90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c43f94: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x1c43f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x1c43f98: 0x8e0d000c  lw          $t5, 0xC($s0)
    ctx->pc = 0x1c43f98u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c43f9c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c43f9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43fa0: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x1c43fa0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c43fa4: 0x8e0f0008  lw          $t7, 0x8($s0)
    ctx->pc = 0x1c43fa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c43fa8: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1c43fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
    // 0x1c43fac: 0xafac0000  sw          $t4, 0x0($sp)
    ctx->pc = 0x1c43facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    // 0x1c43fb0: 0xafad0004  sw          $t5, 0x4($sp)
    ctx->pc = 0x1c43fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 13));
    // 0x1c43fb4: 0xafae0008  sw          $t6, 0x8($sp)
    ctx->pc = 0x1c43fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 14));
    // 0x1c43fb8: 0xafaf000c  sw          $t7, 0xC($sp)
    ctx->pc = 0x1c43fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 15));
    // 0x1c43fbc: 0xafab0010  sw          $t3, 0x10($sp)
    ctx->pc = 0x1c43fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 11));
label_1c43fc0:
    // 0x1c43fc0: 0xc710bb2  jal         func_1C42EC8
    ctx->pc = 0x1C43FC0u;
    SET_GPR_U32(ctx, 31, 0x1C43FC8u);
    ctx->pc = 0x1C43FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43FC0u;
    // 0x1c43fc4: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42EC8u, 0x1C43FC0u, 0x1C43FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43FC8u;
label_1c43fc8:
    // 0x1c43fc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c43fc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c43fcc:
    // 0x1c43fcc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c43fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c43fd0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c43fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c43fd4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c43fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c43fd8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c43fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c43fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C43FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C43FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C43FDCu;
        // 0x1c43fe0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C43FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C43FE4u;
}
