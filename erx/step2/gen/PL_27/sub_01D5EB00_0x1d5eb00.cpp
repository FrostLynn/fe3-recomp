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

// Function: sub_01D5EB00
// Address: 0x1d5eb00 - 0x1d5ec00
void sub_01D5EB00_0x1d5eb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D5EB00_0x1d5eb00");
#endif

    switch (ctx->pc) {
        case 0x1d5eb1cu: goto label_1d5eb1c;
        case 0x1d5eb24u: goto label_1d5eb24;
        case 0x1d5eb38u: goto label_1d5eb38;
        case 0x1d5eb3cu: goto label_1d5eb3c;
        case 0x1d5eb78u: goto label_1d5eb78;
        case 0x1d5eba0u: goto label_1d5eba0;
        case 0x1d5ebacu: goto label_1d5ebac;
        case 0x1d5ebb8u: goto label_1d5ebb8;
        case 0x1d5ebccu: goto label_1d5ebcc;
        case 0x1d5ebe4u: goto label_1d5ebe4;
        default: break;
    }

    ctx->pc = 0x1d5eb00u;

    // 0x1d5eb00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d5eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d5eb04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5eb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5eb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5eb0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d5eb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d5eb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5eb14: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5EB14u;
    SET_GPR_U32(ctx, 31, 0x1D5EB1Cu);
    ctx->pc = 0x1D5EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB14u;
    // 0x1d5eb18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5EB14u, 0x1D5EB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB1Cu;
label_1d5eb1c:
    // 0x1d5eb1c: 0xc757352  jal         func_1D5CD48
    ctx->pc = 0x1D5EB1Cu;
    SET_GPR_U32(ctx, 31, 0x1D5EB24u);
    ctx->pc = 0x1D5EB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB1Cu;
    // 0x1d5eb20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD48u, 0x1D5EB1Cu, 0x1D5EB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB24u;
label_1d5eb24:
    // 0x1d5eb24: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5eb24u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5eb28: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5EB28u;
    {
        const bool branch_taken_0x1d5eb28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D5EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EB28u;
        // 0x1d5eb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eb28) {
            ctx->pc = 0x1D5EB4Cu;
            goto label_1d5eb4c;
        }
    }
    ctx->pc = 0x1D5EB30u;
    // 0x1d5eb30: 0xc757354  jal         func_1D5CD50
    ctx->pc = 0x1D5EB30u;
    SET_GPR_U32(ctx, 31, 0x1D5EB38u);
    ctx->pc = 0x1D5CD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD50u, 0x1D5EB30u, 0x1D5EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB38u;
label_1d5eb38:
    // 0x1d5eb38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d5eb38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d5eb3c:
    // 0x1d5eb3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5eb3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5eb40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5eb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5eb44: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EB44u;
        // 0x1d5eb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EB4Cu;
label_1d5eb4c:
    // 0x1d5eb4c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5EB4Cu;
    {
        const bool branch_taken_0x1d5eb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EB4Cu;
        // 0x1d5eb50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eb4c) {
            ctx->pc = 0x1D5EB3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5eb3c;
        }
    }
    ctx->pc = 0x1D5EB54u;
    // 0x1d5eb54: 0x0  nop
    ctx->pc = 0x1d5eb54u;
    // NOP
    // 0x1d5eb58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5eb58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5eb5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5eb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5eb60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5eb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5eb64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5eb68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5eb68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5eb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d5eb70: 0xc757358  jal         func_1D5CD60
    ctx->pc = 0x1D5EB70u;
    SET_GPR_U32(ctx, 31, 0x1D5EB78u);
    ctx->pc = 0x1D5EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB70u;
    // 0x1d5eb74: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD60u, 0x1D5EB70u, 0x1D5EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EB78u;
label_1d5eb78:
    // 0x1d5eb78: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d5eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d5eb7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d5eb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb80: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d5eb80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5eb84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d5eb84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb88: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d5eb88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5eb8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d5eb8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d5eb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5eb94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5eb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eb98: 0xc757362  jal         func_1D5CD88
    ctx->pc = 0x1D5EB98u;
    SET_GPR_U32(ctx, 31, 0x1D5EBA0u);
    ctx->pc = 0x1D5EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EB98u;
    // 0x1d5eb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD88u, 0x1D5EB98u, 0x1D5EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EBA0u;
label_1d5eba0:
    // 0x1d5eba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5eba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5eba4: 0xc75735a  jal         func_1D5CD68
    ctx->pc = 0x1D5EBA4u;
    SET_GPR_U32(ctx, 31, 0x1D5EBACu);
    ctx->pc = 0x1D5EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EBA4u;
    // 0x1d5eba8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD68u, 0x1D5EBA4u, 0x1D5EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EBACu;
label_1d5ebac:
    // 0x1d5ebac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d5ebacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5ebb0: 0xc757356  jal         func_1D5CD58
    ctx->pc = 0x1D5EBB0u;
    SET_GPR_U32(ctx, 31, 0x1D5EBB8u);
    ctx->pc = 0x1D5EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EBB0u;
    // 0x1d5ebb4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD58u, 0x1D5EBB0u, 0x1D5EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EBB8u;
label_1d5ebb8:
    // 0x1d5ebb8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d5ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d5ebbc: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d5ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d5ebc0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d5ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5ebc4: 0xc75735c  jal         func_1D5CD70
    ctx->pc = 0x1D5EBC4u;
    SET_GPR_U32(ctx, 31, 0x1D5EBCCu);
    ctx->pc = 0x1D5EBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EBC4u;
    // 0x1d5ebc8: 0x240500f9  addiu       $a1, $zero, 0xF9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 249));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD70u, 0x1D5EBC4u, 0x1D5EBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EBCCu;
label_1d5ebcc:
    // 0x1d5ebcc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d5ebccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5ebd0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5ebd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5ebd4: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d5ebd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d5ebd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ebd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ebdc: 0xc757350  jal         func_1D5CD40
    ctx->pc = 0x1D5EBDCu;
    SET_GPR_U32(ctx, 31, 0x1D5EBE4u);
    ctx->pc = 0x1D5EBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EBDCu;
    // 0x1d5ebe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5CD40u, 0x1D5EBDCu, 0x1D5EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EBE4u;
label_1d5ebe4:
    // 0x1d5ebe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ebe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5ebe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ebec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ebecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ebf0: 0x24050097  addiu       $a1, $zero, 0x97
    ctx->pc = 0x1d5ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 151));
    // 0x1d5ebf4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5ebf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ebf8: 0x875735e  j           func_1D5CD78
    ctx->pc = 0x1D5EBF8u;
    ctx->pc = 0x1D5EBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EBF8u;
    // 0x1d5ebfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CD78u;
    sub_01D5CD78_0x1d5cd78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D5EC00u;
}
