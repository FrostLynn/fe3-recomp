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

// Function: sub_01D47BB0
// Address: 0x1d47bb0 - 0x1d47cdc
void sub_01D47BB0_0x1d47bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47BB0_0x1d47bb0");
#endif

    switch (ctx->pc) {
        case 0x1d47bccu: goto label_1d47bcc;
        case 0x1d47bd4u: goto label_1d47bd4;
        case 0x1d47be8u: goto label_1d47be8;
        case 0x1d47becu: goto label_1d47bec;
        case 0x1d47c28u: goto label_1d47c28;
        case 0x1d47c68u: goto label_1d47c68;
        case 0x1d47c7cu: goto label_1d47c7c;
        case 0x1d47c88u: goto label_1d47c88;
        case 0x1d47c94u: goto label_1d47c94;
        case 0x1d47ca8u: goto label_1d47ca8;
        case 0x1d47cc0u: goto label_1d47cc0;
        default: break;
    }

    ctx->pc = 0x1d47bb0u;

    // 0x1d47bb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d47bb4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d47bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d47bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47bbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47bc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d47bc4: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D47BC4u;
    SET_GPR_U32(ctx, 31, 0x1D47BCCu);
    ctx->pc = 0x1D47BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47BC4u;
    // 0x1d47bc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D47BC4u, 0x1D47BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47BCCu;
label_1d47bcc:
    // 0x1d47bcc: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D47BCCu;
    SET_GPR_U32(ctx, 31, 0x1D47BD4u);
    ctx->pc = 0x1D47BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47BCCu;
    // 0x1d47bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D47BCCu, 0x1D47BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47BD4u;
label_1d47bd4:
    // 0x1d47bd4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d47bd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47bd8: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D47BD8u;
    {
        const bool branch_taken_0x1d47bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D47BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47BD8u;
        // 0x1d47bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47bd8) {
            ctx->pc = 0x1D47BFCu;
            goto label_1d47bfc;
        }
    }
    ctx->pc = 0x1D47BE0u;
    // 0x1d47be0: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D47BE0u;
    SET_GPR_U32(ctx, 31, 0x1D47BE8u);
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D47BE0u, 0x1D47BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47BE8u;
label_1d47be8:
    // 0x1d47be8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d47be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d47bec:
    // 0x1d47bec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47becu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47bf0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d47bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47BF4u;
        // 0x1d47bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47BFCu;
label_1d47bfc:
    // 0x1d47bfc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D47BFCu;
    {
        const bool branch_taken_0x1d47bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47BFCu;
        // 0x1d47c00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47bfc) {
            ctx->pc = 0x1D47BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47bec;
        }
    }
    ctx->pc = 0x1D47C04u;
    // 0x1d47c04: 0x0  nop
    ctx->pc = 0x1d47c04u;
    // NOP
    // 0x1d47c08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d47c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d47c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47c10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d47c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d47c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d47c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d47c18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d47c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c1c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d47c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d47c20: 0xc751758  jal         func_1D45D60
    ctx->pc = 0x1D47C20u;
    SET_GPR_U32(ctx, 31, 0x1D47C28u);
    ctx->pc = 0x1D47C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47C20u;
    // 0x1d47c24: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D60u, 0x1D47C20u, 0x1D47C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47C28u;
label_1d47c28:
    // 0x1d47c28: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d47c28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d47c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d47c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c30: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1d47c30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1d47c34: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1d47c34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d47c38: 0x11e00034  beqz        $t7, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D47C38u;
    {
        const bool branch_taken_0x1d47c38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C38u;
        // 0x1d47c3c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47c38) {
            ctx->pc = 0x1D47D0Cu;
            return;
        }
    }
    ctx->pc = 0x1D47C40u;
    // 0x1d47c40: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d47c40u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d47c44: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d47c44u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d47c48: 0x25ce9148  addiu       $t6, $t6, -0x6EB8
    ctx->pc = 0x1d47c48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294938952));
    // 0x1d47c4c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d47c4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d47c50: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d47c50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d47c54: 0x1a00008  jr          $t5
    ctx->pc = 0x1D47C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D47C5Cu: goto label_1d47c5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47C54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D47C5Cu;
label_1d47c5c:
    // 0x1d47c5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c64: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x1d47c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
label_1d47c68:
    // 0x1d47c68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d47c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47c6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d47c6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d47c70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47c74: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D47C74u;
    SET_GPR_U32(ctx, 31, 0x1D47C7Cu);
    ctx->pc = 0x1D47C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47C74u;
    // 0x1d47c78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D47C74u, 0x1D47C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47C7Cu;
label_1d47c7c:
    // 0x1d47c7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47c80: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D47C80u;
    SET_GPR_U32(ctx, 31, 0x1D47C88u);
    ctx->pc = 0x1D47C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47C80u;
    // 0x1d47c84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D47C80u, 0x1D47C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47C88u;
label_1d47c88:
    // 0x1d47c88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d47c8c: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D47C8Cu;
    SET_GPR_U32(ctx, 31, 0x1D47C94u);
    ctx->pc = 0x1D47C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47C8Cu;
    // 0x1d47c90: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D47C8Cu, 0x1D47C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47C94u;
label_1d47c94:
    // 0x1d47c94: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d47c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d47c98: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d47c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d47c9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d47c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47ca0: 0xc75175c  jal         func_1D45D70
    ctx->pc = 0x1D47CA0u;
    SET_GPR_U32(ctx, 31, 0x1D47CA8u);
    ctx->pc = 0x1D47CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47CA0u;
    // 0x1d47ca4: 0x240500f3  addiu       $a1, $zero, 0xF3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 243));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D70u, 0x1D47CA0u, 0x1D47CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47CA8u;
label_1d47ca8:
    // 0x1d47ca8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d47ca8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d47cac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d47cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d47cb0: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1d47cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1d47cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47cb8: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D47CB8u;
    SET_GPR_U32(ctx, 31, 0x1D47CC0u);
    ctx->pc = 0x1D47CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47CB8u;
    // 0x1d47cbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D47CB8u, 0x1D47CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47CC0u;
label_1d47cc0:
    // 0x1d47cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d47cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d47cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d47cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d47ccc: 0x24050091  addiu       $a1, $zero, 0x91
    ctx->pc = 0x1d47cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
    // 0x1d47cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d47cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d47cd4: 0x875175e  j           func_1D45D78
    ctx->pc = 0x1D47CD4u;
    ctx->pc = 0x1D47CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47CD4u;
    // 0x1d47cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D78u;
    sub_01D45D78_0x1d45d78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D47CDCu;
}
