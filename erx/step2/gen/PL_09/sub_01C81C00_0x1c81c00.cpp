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

// Function: sub_01C81C00
// Address: 0x1c81c00 - 0x1c81ce0
void sub_01C81C00_0x1c81c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C81C00_0x1c81c00");
#endif

    switch (ctx->pc) {
        case 0x1c81c14u: goto label_1c81c14;
        case 0x1c81c28u: goto label_1c81c28;
        case 0x1c81c2cu: goto label_1c81c2c;
        case 0x1c81c48u: goto label_1c81c48;
        case 0x1c81c54u: goto label_1c81c54;
        case 0x1c81c84u: goto label_1c81c84;
        case 0x1c81cb0u: goto label_1c81cb0;
        case 0x1c81cbcu: goto label_1c81cbc;
        default: break;
    }

    ctx->pc = 0x1c81c00u;

    // 0x1c81c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c81c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c81c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c81c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c81c0c: 0xc7203d2  jal         func_1C80F48
    ctx->pc = 0x1C81C0Cu;
    SET_GPR_U32(ctx, 31, 0x1C81C14u);
    ctx->pc = 0x1C81C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81C0Cu;
    // 0x1c81c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F48u, 0x1C81C0Cu, 0x1C81C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C14u;
label_1c81c14:
    // 0x1c81c14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c81c14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81c18: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C81C18u;
    {
        const bool branch_taken_0x1c81c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C81C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81C18u;
        // 0x1c81c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81c18) {
            ctx->pc = 0x1C81C3Cu;
            goto label_1c81c3c;
        }
    }
    ctx->pc = 0x1C81C20u;
    // 0x1c81c20: 0xc7203d4  jal         func_1C80F50
    ctx->pc = 0x1C81C20u;
    SET_GPR_U32(ctx, 31, 0x1C81C28u);
    ctx->pc = 0x1C80F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F50u, 0x1C81C20u, 0x1C81C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C28u;
label_1c81c28:
    // 0x1c81c28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c81c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c81c2c:
    // 0x1c81c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c81c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81C34u;
        // 0x1c81c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81C3Cu;
label_1c81c3c:
    // 0x1c81c3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c81c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c81c40: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81C40u;
    SET_GPR_U32(ctx, 31, 0x1C81C48u);
    ctx->pc = 0x1C81C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81C40u;
    // 0x1c81c44: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81C40u, 0x1C81C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C48u;
label_1c81c48:
    // 0x1c81c48: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c81c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c81c4c: 0xc7203e4  jal         func_1C80F90
    ctx->pc = 0x1C81C4Cu;
    SET_GPR_U32(ctx, 31, 0x1C81C54u);
    ctx->pc = 0x1C81C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81C4Cu;
    // 0x1c81c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F90u, 0x1C81C4Cu, 0x1C81C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C54u;
label_1c81c54:
    // 0x1c81c54: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1C81C54u;
    {
        const bool branch_taken_0x1c81c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C81C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81C54u;
        // 0x1c81c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c81c54) {
            ctx->pc = 0x1C81C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c81c2c;
        }
    }
    ctx->pc = 0x1C81C5Cu;
    // 0x1c81c5c: 0x0  nop
    ctx->pc = 0x1c81c5cu;
    // NOP
    // 0x1c81c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c81c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c81c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c81c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c81c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c81c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c81c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c81c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c81c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c81c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81c74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c81c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81c78: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c81c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c81c7c: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81C7Cu;
    SET_GPR_U32(ctx, 31, 0x1C81C84u);
    ctx->pc = 0x1C81C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81C7Cu;
    // 0x1c81c80: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81C7Cu, 0x1C81C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81C84u;
label_1c81c84:
    // 0x1c81c84: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1c81c84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1c81c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81c8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c81c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81c90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c81c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81c94: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1c81c94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1c81c98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c81c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c81c9c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1c81c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1c81ca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c81ca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81ca4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1c81ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c81ca8: 0xc7203e2  jal         func_1C80F88
    ctx->pc = 0x1C81CA8u;
    SET_GPR_U32(ctx, 31, 0x1C81CB0u);
    ctx->pc = 0x1C81CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81CA8u;
    // 0x1c81cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F88u, 0x1C81CA8u, 0x1C81CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81CB0u;
label_1c81cb0:
    // 0x1c81cb0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c81cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c81cb4: 0xc7203d6  jal         func_1C80F58
    ctx->pc = 0x1C81CB4u;
    SET_GPR_U32(ctx, 31, 0x1C81CBCu);
    ctx->pc = 0x1C81CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81CB4u;
    // 0x1c81cb8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C80F58u, 0x1C81CB4u, 0x1C81CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C81CBCu;
label_1c81cbc:
    // 0x1c81cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c81cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c81cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c81cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c81cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c81cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81cc8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1c81cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1c81ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c81cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c81cd0: 0x87203e6  j           func_1C80F98
    ctx->pc = 0x1C81CD0u;
    ctx->pc = 0x1C81CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81CD0u;
    // 0x1c81cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C80F98u;
    sub_01C80F98_0x1c80f98(rdram, ctx, runtime); return;
    ctx->pc = 0x1C81CD8u;
    // 0x1c81cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81CE0u;
}
