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

// Function: sub_01DB1C00
// Address: 0x1db1c00 - 0x1db1ce0
void sub_01DB1C00_0x1db1c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DB1C00_0x1db1c00");
#endif

    switch (ctx->pc) {
        case 0x1db1c14u: goto label_1db1c14;
        case 0x1db1c28u: goto label_1db1c28;
        case 0x1db1c2cu: goto label_1db1c2c;
        case 0x1db1c48u: goto label_1db1c48;
        case 0x1db1c54u: goto label_1db1c54;
        case 0x1db1c84u: goto label_1db1c84;
        case 0x1db1cb0u: goto label_1db1cb0;
        case 0x1db1cbcu: goto label_1db1cbc;
        default: break;
    }

    ctx->pc = 0x1db1c00u;

    // 0x1db1c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1db1c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1db1c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db1c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db1c08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1db1c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1db1c0c: 0xc76c3d2  jal         func_1DB0F48
    ctx->pc = 0x1DB1C0Cu;
    SET_GPR_U32(ctx, 31, 0x1DB1C14u);
    ctx->pc = 0x1DB1C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1C0Cu;
    // 0x1db1c10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F48u, 0x1DB1C0Cu, 0x1DB1C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1C14u;
label_1db1c14:
    // 0x1db1c14: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1db1c14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1c18: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DB1C18u;
    {
        const bool branch_taken_0x1db1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DB1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1C18u;
        // 0x1db1c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1c18) {
            ctx->pc = 0x1DB1C3Cu;
            goto label_1db1c3c;
        }
    }
    ctx->pc = 0x1DB1C20u;
    // 0x1db1c20: 0xc76c3d4  jal         func_1DB0F50
    ctx->pc = 0x1DB1C20u;
    SET_GPR_U32(ctx, 31, 0x1DB1C28u);
    ctx->pc = 0x1DB0F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F50u, 0x1DB1C20u, 0x1DB1C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1C28u;
label_1db1c28:
    // 0x1db1c28: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1db1c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1db1c2c:
    // 0x1db1c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db1c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1c30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1db1c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db1c34: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB1C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1C34u;
        // 0x1db1c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB1C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB1C3Cu;
label_1db1c3c:
    // 0x1db1c3c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db1c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db1c40: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1C40u;
    SET_GPR_U32(ctx, 31, 0x1DB1C48u);
    ctx->pc = 0x1DB1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1C40u;
    // 0x1db1c44: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1C40u, 0x1DB1C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1C48u;
label_1db1c48:
    // 0x1db1c48: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1db1c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1db1c4c: 0xc76c3e4  jal         func_1DB0F90
    ctx->pc = 0x1DB1C4Cu;
    SET_GPR_U32(ctx, 31, 0x1DB1C54u);
    ctx->pc = 0x1DB1C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1C4Cu;
    // 0x1db1c50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F90u, 0x1DB1C4Cu, 0x1DB1C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1C54u;
label_1db1c54:
    // 0x1db1c54: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1DB1C54u;
    {
        const bool branch_taken_0x1db1c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB1C54u;
        // 0x1db1c58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db1c54) {
            ctx->pc = 0x1DB1C2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db1c2c;
        }
    }
    ctx->pc = 0x1DB1C5Cu;
    // 0x1db1c5c: 0x0  nop
    ctx->pc = 0x1db1c5cu;
    // NOP
    // 0x1db1c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1db1c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1db1c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1db1c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1db1c68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1db1c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1db1c6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1db1c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1db1c70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1db1c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1c74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1db1c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1c78: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1db1c78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1db1c7c: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1C7Cu;
    SET_GPR_U32(ctx, 31, 0x1DB1C84u);
    ctx->pc = 0x1DB1C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1C7Cu;
    // 0x1db1c80: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1C7Cu, 0x1DB1C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1C84u;
label_1db1c84:
    // 0x1db1c84: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1db1c84u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1db1c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1db1c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1c8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1db1c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1c90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1db1c90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1c94: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1db1c94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1db1c98: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1db1c98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db1c9c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1db1c9cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1db1ca0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1db1ca0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1ca4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1db1ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1db1ca8: 0xc76c3e2  jal         func_1DB0F88
    ctx->pc = 0x1DB1CA8u;
    SET_GPR_U32(ctx, 31, 0x1DB1CB0u);
    ctx->pc = 0x1DB1CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1CA8u;
    // 0x1db1cac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F88u, 0x1DB1CA8u, 0x1DB1CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1CB0u;
label_1db1cb0:
    // 0x1db1cb0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1db1cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1db1cb4: 0xc76c3d6  jal         func_1DB0F58
    ctx->pc = 0x1DB1CB4u;
    SET_GPR_U32(ctx, 31, 0x1DB1CBCu);
    ctx->pc = 0x1DB1CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1CB4u;
    // 0x1db1cb8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB0F58u, 0x1DB1CB4u, 0x1DB1CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB1CBCu;
label_1db1cbc:
    // 0x1db1cbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1db1cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db1cc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1db1cc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1db1cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1db1cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db1cc8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1db1cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1db1ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1db1cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1db1cd0: 0x876c3e6  j           func_1DB0F98
    ctx->pc = 0x1DB1CD0u;
    ctx->pc = 0x1DB1CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB1CD0u;
    // 0x1db1cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB0F98u;
    sub_01DB0F98_0x1db0f98(rdram, ctx, runtime); return;
    ctx->pc = 0x1DB1CD8u;
    // 0x1db1cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB1CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB1CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB1CE0u;
}
