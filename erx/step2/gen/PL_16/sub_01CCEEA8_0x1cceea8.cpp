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

// Function: sub_01CCEEA8
// Address: 0x1cceea8 - 0x1ccefd4
void sub_01CCEEA8_0x1cceea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCEEA8_0x1cceea8");
#endif

    switch (ctx->pc) {
        case 0x1cceec4u: goto label_1cceec4;
        case 0x1cceeccu: goto label_1cceecc;
        case 0x1cceee0u: goto label_1cceee0;
        case 0x1cceee8u: goto label_1cceee8;
        case 0x1cceeecu: goto label_1cceeec;
        case 0x1ccef28u: goto label_1ccef28;
        case 0x1ccef68u: goto label_1ccef68;
        case 0x1ccef7cu: goto label_1ccef7c;
        case 0x1ccef88u: goto label_1ccef88;
        case 0x1ccef94u: goto label_1ccef94;
        case 0x1ccefa8u: goto label_1ccefa8;
        case 0x1ccefb8u: goto label_1ccefb8;
        default: break;
    }

    ctx->pc = 0x1cceea8u;

    // 0x1cceea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cceea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cceeac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cceeacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cceeb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cceeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cceeb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cceeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cceeb8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cceeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cceebc: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCEEBCu;
    SET_GPR_U32(ctx, 31, 0x1CCEEC4u);
    ctx->pc = 0x1CCEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEEBCu;
    // 0x1cceec0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCEEBCu, 0x1CCEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEEC4u;
label_1cceec4:
    // 0x1cceec4: 0xc733512  jal         func_1CCD448
    ctx->pc = 0x1CCEEC4u;
    SET_GPR_U32(ctx, 31, 0x1CCEECCu);
    ctx->pc = 0x1CCEEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEEC4u;
    // 0x1cceec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD448u, 0x1CCEEC4u, 0x1CCEECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEECCu;
label_1cceecc:
    // 0x1cceecc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cceeccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cceed0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CCEED0u;
    {
        const bool branch_taken_0x1cceed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CCEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEED0u;
        // 0x1cceed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cceed0) {
            ctx->pc = 0x1CCEEFCu;
            goto label_1cceefc;
        }
    }
    ctx->pc = 0x1CCEED8u;
    // 0x1cceed8: 0xc73352c  jal         func_1CCD4B0
    ctx->pc = 0x1CCEED8u;
    SET_GPR_U32(ctx, 31, 0x1CCEEE0u);
    ctx->pc = 0x1CCD4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD4B0u, 0x1CCEED8u, 0x1CCEEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEEE0u;
label_1cceee0:
    // 0x1cceee0: 0xc733514  jal         func_1CCD450
    ctx->pc = 0x1CCEEE0u;
    SET_GPR_U32(ctx, 31, 0x1CCEEE8u);
    ctx->pc = 0x1CCEEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEEE0u;
    // 0x1cceee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD450u, 0x1CCEEE0u, 0x1CCEEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEEE8u;
label_1cceee8:
    // 0x1cceee8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cceee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cceeec:
    // 0x1cceeec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cceeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cceef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cceef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cceef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCEEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCEEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEEF4u;
        // 0x1cceef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEEF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCEEFCu;
label_1cceefc:
    // 0x1cceefc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CCEEFCu;
    {
        const bool branch_taken_0x1cceefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEEFCu;
        // 0x1ccef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cceefc) {
            ctx->pc = 0x1CCEEECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cceeec;
        }
    }
    ctx->pc = 0x1CCEF04u;
    // 0x1ccef04: 0x0  nop
    ctx->pc = 0x1ccef04u;
    // NOP
    // 0x1ccef08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ccef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ccef0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ccef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ccef10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ccef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ccef14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ccef14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ccef18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ccef18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef1c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1ccef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1ccef20: 0xc733518  jal         func_1CCD460
    ctx->pc = 0x1CCEF20u;
    SET_GPR_U32(ctx, 31, 0x1CCEF28u);
    ctx->pc = 0x1CCEF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEF20u;
    // 0x1ccef24: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD460u, 0x1CCEF20u, 0x1CCEF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF28u;
label_1ccef28:
    // 0x1ccef28: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1ccef28u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ccef2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ccef2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef30: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1ccef30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1ccef34: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1ccef34u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1ccef38: 0x11e00026  beqz        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x1CCEF38u;
    {
        const bool branch_taken_0x1ccef38 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCEF38u;
        // 0x1ccef3c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccef38) {
            ctx->pc = 0x1CCEFD4u;
            return;
        }
    }
    ctx->pc = 0x1CCEF40u;
    // 0x1ccef40: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1ccef40u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1ccef44: 0x3c0e01cd  lui         $t6, 0x1CD
    ctx->pc = 0x1ccef44u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)461 << 16));
    // 0x1ccef48: 0x25ce0ab0  addiu       $t6, $t6, 0xAB0
    ctx->pc = 0x1ccef48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2736));
    // 0x1ccef4c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1ccef4cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1ccef50: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1ccef50u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1ccef54: 0x1a00008  jr          $t5
    ctx->pc = 0x1CCEF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CCEF5Cu: goto label_1ccef5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCEF54u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CCEF5Cu;
label_1ccef5c:
    // 0x1ccef5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef64: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1ccef64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1ccef68:
    // 0x1ccef68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ccef68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ccef6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ccef6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef70: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ccef70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccef74: 0xc733522  jal         func_1CCD488
    ctx->pc = 0x1CCEF74u;
    SET_GPR_U32(ctx, 31, 0x1CCEF7Cu);
    ctx->pc = 0x1CCEF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEF74u;
    // 0x1ccef78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD488u, 0x1CCEF74u, 0x1CCEF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF7Cu;
label_1ccef7c:
    // 0x1ccef7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccef7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccef80: 0xc73351a  jal         func_1CCD468
    ctx->pc = 0x1CCEF80u;
    SET_GPR_U32(ctx, 31, 0x1CCEF88u);
    ctx->pc = 0x1CCEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEF80u;
    // 0x1ccef84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD468u, 0x1CCEF80u, 0x1CCEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF88u;
label_1ccef88:
    // 0x1ccef88: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ccef88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ccef8c: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1CCEF94u);
    ctx->pc = 0x1CCEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEF8Cu;
    // 0x1ccef90: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCEF8Cu, 0x1CCEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEF94u;
label_1ccef94:
    // 0x1ccef94: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ccef94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1ccef98: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1ccef98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1ccef9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ccef9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ccefa0: 0xc73351c  jal         func_1CCD470
    ctx->pc = 0x1CCEFA0u;
    SET_GPR_U32(ctx, 31, 0x1CCEFA8u);
    ctx->pc = 0x1CCEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEFA0u;
    // 0x1ccefa4: 0x240500d1  addiu       $a1, $zero, 0xD1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD470u, 0x1CCEFA0u, 0x1CCEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEFA8u;
label_1ccefa8:
    // 0x1ccefa8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ccefa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ccefac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccefacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccefb0: 0xc733510  jal         func_1CCD440
    ctx->pc = 0x1CCEFB0u;
    SET_GPR_U32(ctx, 31, 0x1CCEFB8u);
    ctx->pc = 0x1CCEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEFB0u;
    // 0x1ccefb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD440u, 0x1CCEFB0u, 0x1CCEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCEFB8u;
label_1ccefb8:
    // 0x1ccefb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ccefb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ccefbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ccefbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ccefc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ccefc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ccefc4: 0x2405006f  addiu       $a1, $zero, 0x6F
    ctx->pc = 0x1ccefc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
    // 0x1ccefc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ccefc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ccefcc: 0x873351e  j           func_1CCD478
    ctx->pc = 0x1CCEFCCu;
    ctx->pc = 0x1CCEFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCEFCCu;
    // 0x1ccefd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD478u;
    sub_01CCD478_0x1ccd478(rdram, ctx, runtime); return;
    ctx->pc = 0x1CCEFD4u;
}
