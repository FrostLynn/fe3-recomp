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

// Function: sub_01CDCE20
// Address: 0x1cdce20 - 0x1cdcf38
void sub_01CDCE20_0x1cdce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CDCE20_0x1cdce20");
#endif

    switch (ctx->pc) {
        case 0x1cdce44u: goto label_1cdce44;
        case 0x1cdce54u: goto label_1cdce54;
        case 0x1cdce64u: goto label_1cdce64;
        case 0x1cdce70u: goto label_1cdce70;
        case 0x1cdce80u: goto label_1cdce80;
        case 0x1cdcec0u: goto label_1cdcec0;
        case 0x1cdced8u: goto label_1cdced8;
        case 0x1cdcee4u: goto label_1cdcee4;
        case 0x1cdcef4u: goto label_1cdcef4;
        case 0x1cdcf04u: goto label_1cdcf04;
        case 0x1cdcf10u: goto label_1cdcf10;
        default: break;
    }

    ctx->pc = 0x1cdce20u;

    // 0x1cdce20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cdce20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cdce24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdce24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cdce28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cdce28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cdce2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cdce2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cdce30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cdce30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdce34: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x1cdce34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1cdce38: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cdce38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cdce3c: 0xc736898  jal         func_1CDA260
    ctx->pc = 0x1CDCE3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDCE44u);
    ctx->pc = 0x1CDCE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE3Cu;
    // 0x1cdce40: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA260u, 0x1CDCE3Cu, 0x1CDCE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCE44u;
label_1cdce44:
    // 0x1cdce44: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cdce44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cdce48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cdce48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdce4c: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDCE54u);
    ctx->pc = 0x1CDCE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE4Cu;
    // 0x1cdce50: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCE4Cu, 0x1CDCE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCE54u;
label_1cdce54:
    // 0x1cdce54: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdce54u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdce58: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdce5c: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDCE5Cu;
    SET_GPR_U32(ctx, 31, 0x1CDCE64u);
    ctx->pc = 0x1CDCE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE5Cu;
    // 0x1cdce60: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDCE5Cu, 0x1CDCE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCE64u;
label_1cdce64:
    // 0x1cdce64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cdce64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cdce68: 0xc736896  jal         func_1CDA258
    ctx->pc = 0x1CDCE68u;
    SET_GPR_U32(ctx, 31, 0x1CDCE70u);
    ctx->pc = 0x1CDCE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE68u;
    // 0x1cdce6c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA258u, 0x1CDCE68u, 0x1CDCE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCE70u;
label_1cdce70:
    // 0x1cdce70: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cdce70u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cdce74: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cdce74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cdce78: 0xc736b4e  jal         func_1CDAD38
    ctx->pc = 0x1CDCE78u;
    SET_GPR_U32(ctx, 31, 0x1CDCE80u);
    ctx->pc = 0x1CDCE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCE78u;
    // 0x1cdce7c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDAD38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDAD38u, 0x1CDCE78u, 0x1CDCE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCE80u;
label_1cdce80:
    // 0x1cdce80: 0x8e2e0008  lw          $t6, 0x8($s1)
    ctx->pc = 0x1cdce80u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1cdce84: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1cdce84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1cdce88: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1cdce88u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cdce8c: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1CDCE8Cu;
    {
        const bool branch_taken_0x1cdce8c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CDCE8Cu;
        // 0x1cdce90: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce8c) {
            ctx->pc = 0x1CDCF38u;
            return;
        }
    }
    ctx->pc = 0x1CDCE94u;
    // 0x1cdce94: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cdce94u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cdce98: 0x3c0e01ce  lui         $t6, 0x1CE
    ctx->pc = 0x1cdce98u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)462 << 16));
    // 0x1cdce9c: 0x25cee890  addiu       $t6, $t6, -0x1770
    ctx->pc = 0x1cdce9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294961296));
    // 0x1cdcea0: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cdcea0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cdcea4: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cdcea4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cdcea8: 0x1a00008  jr          $t5
    ctx->pc = 0x1CDCEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CDCEB0u: goto label_1cdceb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CDCEA8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CDCEB0u;
label_1cdceb0:
    // 0x1cdceb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdceb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdceb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdceb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdceb8: 0x240600f4  addiu       $a2, $zero, 0xF4
    ctx->pc = 0x1cdceb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x1cdcebc: 0x0  nop
    ctx->pc = 0x1cdcebcu;
    // NOP
label_1cdcec0:
    // 0x1cdcec0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cdcec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdcec4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1cdcec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1cdcec8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdcec8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcecc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cdceccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdced0: 0xc7368a2  jal         func_1CDA288
    ctx->pc = 0x1CDCED0u;
    SET_GPR_U32(ctx, 31, 0x1CDCED8u);
    ctx->pc = 0x1CDCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCED0u;
    // 0x1cdced4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA288u, 0x1CDCED0u, 0x1CDCED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCED8u;
label_1cdced8:
    // 0x1cdced8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcedc: 0xc73689a  jal         func_1CDA268
    ctx->pc = 0x1CDCEDCu;
    SET_GPR_U32(ctx, 31, 0x1CDCEE4u);
    ctx->pc = 0x1CDCEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCEDCu;
    // 0x1cdcee0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA268u, 0x1CDCEDCu, 0x1CDCEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCEE4u;
label_1cdcee4:
    // 0x1cdcee4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cdcee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdcee8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cdcee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cdceec: 0xc73689c  jal         func_1CDA270
    ctx->pc = 0x1CDCEECu;
    SET_GPR_U32(ctx, 31, 0x1CDCEF4u);
    ctx->pc = 0x1CDCEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCEECu;
    // 0x1cdcef0: 0x24050124  addiu       $a1, $zero, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA270u, 0x1CDCEECu, 0x1CDCEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCEF4u;
label_1cdcef4:
    // 0x1cdcef4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1cdcef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1cdcef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcefc: 0xc736890  jal         func_1CDA240
    ctx->pc = 0x1CDCEFCu;
    SET_GPR_U32(ctx, 31, 0x1CDCF04u);
    ctx->pc = 0x1CDCF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCEFCu;
    // 0x1cdcf00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA240u, 0x1CDCEFCu, 0x1CDCF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCF04u;
label_1cdcf04:
    // 0x1cdcf04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf08: 0xc73689e  jal         func_1CDA278
    ctx->pc = 0x1CDCF08u;
    SET_GPR_U32(ctx, 31, 0x1CDCF10u);
    ctx->pc = 0x1CDCF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCF08u;
    // 0x1cdcf0c: 0x240500c1  addiu       $a1, $zero, 0xC1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 193));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDA278u, 0x1CDCF08u, 0x1CDCF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDCF10u;
label_1cdcf10:
    // 0x1cdcf10: 0xe614001c  swc1        $f20, 0x1C($s0)
    ctx->pc = 0x1cdcf10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1cdcf14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cdcf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf18: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1cdcf18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1cdcf1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdcf1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdcf20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cdcf20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdcf24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdcf24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdcf28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cdcf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdcf2c: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1cdcf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1cdcf30: 0x87368aa  j           func_1CDA2A8
    ctx->pc = 0x1CDCF30u;
    ctx->pc = 0x1CDCF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CDCF30u;
    // 0x1cdcf34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CDA2A8u;
    sub_01CDA2A8_0x1cda2a8(rdram, ctx, runtime); return;
    ctx->pc = 0x1CDCF38u;
}
