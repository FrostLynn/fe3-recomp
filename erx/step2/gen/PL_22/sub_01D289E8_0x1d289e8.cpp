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

// Function: sub_01D289E8
// Address: 0x1d289e8 - 0x1d28ae8
void sub_01D289E8_0x1d289e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D289E8_0x1d289e8");
#endif

    switch (ctx->pc) {
        case 0x1d28a04u: goto label_1d28a04;
        case 0x1d28a0cu: goto label_1d28a0c;
        case 0x1d28a20u: goto label_1d28a20;
        case 0x1d28a24u: goto label_1d28a24;
        case 0x1d28a60u: goto label_1d28a60;
        case 0x1d28a88u: goto label_1d28a88;
        case 0x1d28a94u: goto label_1d28a94;
        case 0x1d28aa0u: goto label_1d28aa0;
        case 0x1d28ab4u: goto label_1d28ab4;
        case 0x1d28accu: goto label_1d28acc;
        default: break;
    }

    ctx->pc = 0x1d289e8u;

    // 0x1d289e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d289e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d289ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d289ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d289f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d289f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d289f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d289f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d289f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d289f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d289fc: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D289FCu;
    SET_GPR_U32(ctx, 31, 0x1D28A04u);
    ctx->pc = 0x1D28A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D289FCu;
    // 0x1d28a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D289FCu, 0x1D28A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28A04u;
label_1d28a04:
    // 0x1d28a04: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D28A04u;
    SET_GPR_U32(ctx, 31, 0x1D28A0Cu);
    ctx->pc = 0x1D28A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A04u;
    // 0x1d28a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D28A04u, 0x1D28A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28A0Cu;
label_1d28a0c:
    // 0x1d28a0c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28a10: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D28A10u;
    {
        const bool branch_taken_0x1d28a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D28A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A10u;
        // 0x1d28a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28a10) {
            ctx->pc = 0x1D28A34u;
            goto label_1d28a34;
        }
    }
    ctx->pc = 0x1D28A18u;
    // 0x1d28a18: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D28A18u;
    SET_GPR_U32(ctx, 31, 0x1D28A20u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D28A18u, 0x1D28A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28A20u;
label_1d28a20:
    // 0x1d28a20: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d28a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d28a24:
    // 0x1d28a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28a28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D28A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A2Cu;
        // 0x1d28a30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D28A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28A34u;
label_1d28a34:
    // 0x1d28a34: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D28A34u;
    {
        const bool branch_taken_0x1d28a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A34u;
        // 0x1d28a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28a34) {
            ctx->pc = 0x1D28A24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28a24;
        }
    }
    ctx->pc = 0x1D28A3Cu;
    // 0x1d28a3c: 0x0  nop
    ctx->pc = 0x1d28a3cu;
    // NOP
    // 0x1d28a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d28a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d28a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d28a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d28a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d28a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d28a50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d28a50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a54: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d28a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d28a58: 0xc749b1c  jal         func_1D26C70
    ctx->pc = 0x1D28A58u;
    SET_GPR_U32(ctx, 31, 0x1D28A60u);
    ctx->pc = 0x1D28A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A58u;
    // 0x1d28a5c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C70u, 0x1D28A58u, 0x1D28A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28A60u;
label_1d28a60:
    // 0x1d28a60: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d28a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d28a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d28a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d28a68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28a6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28a6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d28a70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d28a74: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d28a74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a78: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d28a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d28a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a80: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D28A80u;
    SET_GPR_U32(ctx, 31, 0x1D28A88u);
    ctx->pc = 0x1D28A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A80u;
    // 0x1d28a84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D28A80u, 0x1D28A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28A88u;
label_1d28a88:
    // 0x1d28a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28a8c: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D28A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D28A94u);
    ctx->pc = 0x1D28A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A8Cu;
    // 0x1d28a90: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D28A8Cu, 0x1D28A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28A94u;
label_1d28a94:
    // 0x1d28a94: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d28a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d28a98: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28A98u;
    SET_GPR_U32(ctx, 31, 0x1D28AA0u);
    ctx->pc = 0x1D28A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A98u;
    // 0x1d28a9c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28A98u, 0x1D28AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28AA0u;
label_1d28aa0:
    // 0x1d28aa0: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d28aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d28aa4: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d28aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d28aa8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d28aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d28aac: 0xc749b20  jal         func_1D26C80
    ctx->pc = 0x1D28AACu;
    SET_GPR_U32(ctx, 31, 0x1D28AB4u);
    ctx->pc = 0x1D28AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28AACu;
    // 0x1d28ab0: 0x240500ea  addiu       $a1, $zero, 0xEA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 234));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C80u, 0x1D28AACu, 0x1D28AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28AB4u;
label_1d28ab4:
    // 0x1d28ab4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d28ab4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28ab8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d28ab8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d28abc: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d28abcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d28ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28ac4: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D28AC4u;
    SET_GPR_U32(ctx, 31, 0x1D28ACCu);
    ctx->pc = 0x1D28AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28AC4u;
    // 0x1d28ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D28AC4u, 0x1D28ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28ACCu;
label_1d28acc:
    // 0x1d28acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28ad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d28ad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28ad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28ad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28ad8: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x1d28ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x1d28adc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d28adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d28ae0: 0x8749b22  j           func_1D26C88
    ctx->pc = 0x1D28AE0u;
    ctx->pc = 0x1D28AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28AE0u;
    // 0x1d28ae4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C88u;
    sub_01D26C88_0x1d26c88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D28AE8u;
}
