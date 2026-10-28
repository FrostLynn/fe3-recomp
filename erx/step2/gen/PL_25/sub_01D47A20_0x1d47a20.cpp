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

// Function: sub_01D47A20
// Address: 0x1d47a20 - 0x1d47b44
void sub_01D47A20_0x1d47a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47A20_0x1d47a20");
#endif

    switch (ctx->pc) {
        case 0x1d47a3cu: goto label_1d47a3c;
        case 0x1d47a44u: goto label_1d47a44;
        case 0x1d47a58u: goto label_1d47a58;
        case 0x1d47a5cu: goto label_1d47a5c;
        case 0x1d47a98u: goto label_1d47a98;
        case 0x1d47ad8u: goto label_1d47ad8;
        case 0x1d47aecu: goto label_1d47aec;
        case 0x1d47af8u: goto label_1d47af8;
        case 0x1d47b04u: goto label_1d47b04;
        case 0x1d47b18u: goto label_1d47b18;
        case 0x1d47b28u: goto label_1d47b28;
        default: break;
    }

    ctx->pc = 0x1d47a20u;

    // 0x1d47a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47a24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d47a24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d47a28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47a2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47a30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d47a34: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D47A34u;
    SET_GPR_U32(ctx, 31, 0x1D47A3Cu);
    ctx->pc = 0x1D47A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47A34u;
    // 0x1d47a38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D47A34u, 0x1D47A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47A3Cu;
label_1d47a3c:
    // 0x1d47a3c: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D47A3Cu;
    SET_GPR_U32(ctx, 31, 0x1D47A44u);
    ctx->pc = 0x1D47A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47A3Cu;
    // 0x1d47a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D47A3Cu, 0x1D47A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47A44u;
label_1d47a44:
    // 0x1d47a44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d47a44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47a48: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D47A48u;
    {
        const bool branch_taken_0x1d47a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D47A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A48u;
        // 0x1d47a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a48) {
            ctx->pc = 0x1D47A6Cu;
            goto label_1d47a6c;
        }
    }
    ctx->pc = 0x1D47A50u;
    // 0x1d47a50: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D47A50u;
    SET_GPR_U32(ctx, 31, 0x1D47A58u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D47A50u, 0x1D47A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47A58u;
label_1d47a58:
    // 0x1d47a58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d47a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d47a5c:
    // 0x1d47a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47a60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47a64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A64u;
        // 0x1d47a68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47A6Cu;
label_1d47a6c:
    // 0x1d47a6c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D47A6Cu;
    {
        const bool branch_taken_0x1d47a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A6Cu;
        // 0x1d47a70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a6c) {
            ctx->pc = 0x1D47A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47a5c;
        }
    }
    ctx->pc = 0x1D47A74u;
    // 0x1d47a74: 0x0  nop
    ctx->pc = 0x1d47a74u;
    // NOP
    // 0x1d47a78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d47a7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47a80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d47a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d47a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d47a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d47a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d47a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47a8c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d47a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d47a90: 0xc751758  jal         func_1D45D60
    ctx->pc = 0x1D47A90u;
    SET_GPR_U32(ctx, 31, 0x1D47A98u);
    ctx->pc = 0x1D47A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47A90u;
    // 0x1d47a94: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D60u, 0x1D47A90u, 0x1D47A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47A98u;
label_1d47a98:
    // 0x1d47a98: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d47a98u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d47a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d47a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47aa0: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1d47aa0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1d47aa4: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1d47aa4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d47aa8: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D47AA8u;
    {
        const bool branch_taken_0x1d47aa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47AA8u;
        // 0x1d47aac: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47aa8) {
            ctx->pc = 0x1D47B74u;
            return;
        }
    }
    ctx->pc = 0x1D47AB0u;
    // 0x1d47ab0: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d47ab0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d47ab4: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d47ab4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d47ab8: 0x25ce90ec  addiu       $t6, $t6, -0x6F14
    ctx->pc = 0x1d47ab8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294938860));
    // 0x1d47abc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d47abcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d47ac0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d47ac0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d47ac4: 0x1a00008  jr          $t5
    ctx->pc = 0x1D47AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D47ACCu: goto label_1d47acc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47AC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D47ACCu;
label_1d47acc:
    // 0x1d47acc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47ad4: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1d47ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1d47ad8:
    // 0x1d47ad8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d47ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47adc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d47adcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47ae0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d47ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47ae4: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D47AE4u;
    SET_GPR_U32(ctx, 31, 0x1D47AECu);
    ctx->pc = 0x1D47AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47AE4u;
    // 0x1d47ae8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D47AE4u, 0x1D47AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47AECu;
label_1d47aec:
    // 0x1d47aec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47af0: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D47AF0u;
    SET_GPR_U32(ctx, 31, 0x1D47AF8u);
    ctx->pc = 0x1D47AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47AF0u;
    // 0x1d47af4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D47AF0u, 0x1D47AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47AF8u;
label_1d47af8:
    // 0x1d47af8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d47afc: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47AFCu;
    SET_GPR_U32(ctx, 31, 0x1D47B04u);
    ctx->pc = 0x1D47B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47AFCu;
    // 0x1d47b00: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47AFCu, 0x1D47B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47B04u;
label_1d47b04:
    // 0x1d47b04: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d47b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d47b08: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d47b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d47b0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d47b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47b10: 0xc75175c  jal         func_1D45D70
    ctx->pc = 0x1D47B10u;
    SET_GPR_U32(ctx, 31, 0x1D47B18u);
    ctx->pc = 0x1D47B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47B10u;
    // 0x1d47b14: 0x240500f2  addiu       $a1, $zero, 0xF2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D70u, 0x1D47B10u, 0x1D47B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47B18u;
label_1d47b18:
    // 0x1d47b18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d47b18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d47b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b20: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D47B20u;
    SET_GPR_U32(ctx, 31, 0x1D47B28u);
    ctx->pc = 0x1D47B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47B20u;
    // 0x1d47b24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D47B20u, 0x1D47B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47B28u;
label_1d47b28:
    // 0x1d47b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d47b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47b34: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1d47b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x1d47b38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d47b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47b3c: 0x875175e  j           func_1D45D78
    ctx->pc = 0x1D47B3Cu;
    ctx->pc = 0x1D47B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47B3Cu;
    // 0x1d47b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D78u;
    sub_01D45D78_0x1d45d78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47B44u;
}
