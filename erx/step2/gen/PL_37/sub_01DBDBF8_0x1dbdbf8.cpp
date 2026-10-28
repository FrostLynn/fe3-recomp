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

// Function: sub_01DBDBF8
// Address: 0x1dbdbf8 - 0x1dbdd70
void sub_01DBDBF8_0x1dbdbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01DBDBF8_0x1dbdbf8");
#endif

    switch (ctx->pc) {
        case 0x1dbdc20u: goto label_1dbdc20;
        case 0x1dbdc30u: goto label_1dbdc30;
        case 0x1dbdc3cu: goto label_1dbdc3c;
        case 0x1dbdc4cu: goto label_1dbdc4c;
        case 0x1dbdc60u: goto label_1dbdc60;
        case 0x1dbdc70u: goto label_1dbdc70;
        case 0x1dbdc88u: goto label_1dbdc88;
        case 0x1dbdca0u: goto label_1dbdca0;
        case 0x1dbdcc4u: goto label_1dbdcc4;
        case 0x1dbdcd0u: goto label_1dbdcd0;
        case 0x1dbdce8u: goto label_1dbdce8;
        case 0x1dbdcf0u: goto label_1dbdcf0;
        case 0x1dbdd04u: goto label_1dbdd04;
        case 0x1dbdd3cu: goto label_1dbdd3c;
        case 0x1dbdd4cu: goto label_1dbdd4c;
        case 0x1dbdd54u: goto label_1dbdd54;
        default: break;
    }

    ctx->pc = 0x1dbdbf8u;

    // 0x1dbdbf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dbdbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dbdbfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1dbdbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1dbdc00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dbdc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dbdc04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dbdc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dbdc08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dbdc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dbdc0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dbdc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdc10: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1dbdc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1dbdc14: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1dbdc14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbdc18: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDC18u;
    SET_GPR_U32(ctx, 31, 0x1DBDC20u);
    ctx->pc = 0x1DBDC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC18u;
    // 0x1dbdc1c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDC18u, 0x1DBDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC20u;
label_1dbdc20:
    // 0x1dbdc20: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbdc20u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbdc24: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbdc28: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBDC28u;
    SET_GPR_U32(ctx, 31, 0x1DBDC30u);
    ctx->pc = 0x1DBDC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC28u;
    // 0x1dbdc2c: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBDC28u, 0x1DBDC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC30u;
label_1dbdc30:
    // 0x1dbdc30: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1dbdc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1dbdc34: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDC34u;
    SET_GPR_U32(ctx, 31, 0x1DBDC3Cu);
    ctx->pc = 0x1DBDC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC34u;
    // 0x1dbdc38: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDC34u, 0x1DBDC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC3Cu;
label_1dbdc3c:
    // 0x1dbdc3c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1dbdc3cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1dbdc40: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1dbdc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1dbdc44: 0xc76ef42  jal         func_1DBBD08
    ctx->pc = 0x1DBDC44u;
    SET_GPR_U32(ctx, 31, 0x1DBDC4Cu);
    ctx->pc = 0x1DBDC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC44u;
    // 0x1dbdc48: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBBD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBBD08u, 0x1DBDC44u, 0x1DBDC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC4Cu;
label_1dbdc4c:
    // 0x1dbdc4c: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1dbdc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1dbdc50: 0x16120008  bne         $s0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DBDC50u;
    {
        const bool branch_taken_0x1dbdc50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x1dbdc50) {
            ctx->pc = 0x1DBDC74u;
            goto label_1dbdc74;
        }
    }
    ctx->pc = 0x1DBDC58u;
    // 0x1dbdc58: 0xc76f398  jal         func_1DBCE60
    ctx->pc = 0x1DBDC58u;
    SET_GPR_U32(ctx, 31, 0x1DBDC60u);
    ctx->pc = 0x1DBDC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC58u;
    // 0x1dbdc5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCE60u, 0x1DBDC58u, 0x1DBDC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC60u;
label_1dbdc60:
    // 0x1dbdc60: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1dbdc60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1dbdc64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbdc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdc68: 0xc76ee52  jal         func_1DBB948
    ctx->pc = 0x1DBDC68u;
    SET_GPR_U32(ctx, 31, 0x1DBDC70u);
    ctx->pc = 0x1DBDC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC68u;
    // 0x1dbdc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB948u, 0x1DBDC68u, 0x1DBDC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC70u;
label_1dbdc70:
    // 0x1dbdc70: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1dbdc70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dbdc74:
    // 0x1dbdc74: 0x1600002d  bnez        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1DBDC74u;
    {
        const bool branch_taken_0x1dbdc74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBDC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDC74u;
        // 0x1dbdc78: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdc74) {
            ctx->pc = 0x1DBDD2Cu;
            goto label_1dbdd2c;
        }
    }
    ctx->pc = 0x1DBDC7Cu;
    // 0x1dbdc7c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1dbdc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbdc80: 0xc76ee6a  jal         func_1DBB9A8
    ctx->pc = 0x1DBDC80u;
    SET_GPR_U32(ctx, 31, 0x1DBDC88u);
    ctx->pc = 0x1DBDC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC80u;
    // 0x1dbdc84: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB9A8u, 0x1DBDC80u, 0x1DBDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDC88u;
label_1dbdc88:
    // 0x1dbdc88: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1dbdc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1dbdc8c: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1DBDC8Cu;
    {
        const bool branch_taken_0x1dbdc8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dbdc8c) {
            ctx->pc = 0x1DBDC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DBDC8Cu;
            // 0x1dbdc90: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DBDD28u;
            goto label_1dbdd28;
        }
    }
    ctx->pc = 0x1DBDC94u;
    // 0x1dbdc94: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1dbdc94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1dbdc98: 0xc76ee58  jal         func_1DBB960
    ctx->pc = 0x1DBDC98u;
    SET_GPR_U32(ctx, 31, 0x1DBDCA0u);
    ctx->pc = 0x1DBDC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDC98u;
    // 0x1dbdc9c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB960u, 0x1DBDC98u, 0x1DBDCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDCA0u;
label_1dbdca0:
    // 0x1dbdca0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1dbdca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdca4: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1dbdca4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbdca8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dbdca8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1dbdcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dbdcb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dbdcb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dbdcb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbdcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcbc: 0xc76ee64  jal         func_1DBB990
    ctx->pc = 0x1DBDCBCu;
    SET_GPR_U32(ctx, 31, 0x1DBDCC4u);
    ctx->pc = 0x1DBDCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDCBCu;
    // 0x1dbdcc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB990u, 0x1DBDCBCu, 0x1DBDCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDCC4u;
label_1dbdcc4:
    // 0x1dbdcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbdcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcc8: 0xc76ee5c  jal         func_1DBB970
    ctx->pc = 0x1DBDCC8u;
    SET_GPR_U32(ctx, 31, 0x1DBDCD0u);
    ctx->pc = 0x1DBDCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDCC8u;
    // 0x1dbdccc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB970u, 0x1DBDCC8u, 0x1DBDCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDCD0u;
label_1dbdcd0:
    // 0x1dbdcd0: 0x24050051  addiu       $a1, $zero, 0x51
    ctx->pc = 0x1dbdcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1dbdcd4: 0x24060052  addiu       $a2, $zero, 0x52
    ctx->pc = 0x1dbdcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x1dbdcd8: 0x24070053  addiu       $a3, $zero, 0x53
    ctx->pc = 0x1dbdcd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1dbdcdc: 0x24080054  addiu       $t0, $zero, 0x54
    ctx->pc = 0x1dbdcdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1dbdce0: 0xc76f350  jal         func_1DBCD40
    ctx->pc = 0x1DBDCE0u;
    SET_GPR_U32(ctx, 31, 0x1DBDCE8u);
    ctx->pc = 0x1DBDCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDCE0u;
    // 0x1dbdce4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCD40u, 0x1DBDCE0u, 0x1DBDCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDCE8u;
label_1dbdce8:
    // 0x1dbdce8: 0xc76f398  jal         func_1DBCE60
    ctx->pc = 0x1DBDCE8u;
    SET_GPR_U32(ctx, 31, 0x1DBDCF0u);
    ctx->pc = 0x1DBDCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDCE8u;
    // 0x1dbdcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCE60u, 0x1DBDCE8u, 0x1DBDCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDCF0u;
label_1dbdcf0:
    // 0x1dbdcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbdcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbdcf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dbdcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbdcf8: 0x24060056  addiu       $a2, $zero, 0x56
    ctx->pc = 0x1dbdcf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x1dbdcfc: 0xc76f32a  jal         func_1DBCCA8
    ctx->pc = 0x1DBDCFCu;
    SET_GPR_U32(ctx, 31, 0x1DBDD04u);
    ctx->pc = 0x1DBDD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDCFCu;
    // 0x1dbdd00: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBCCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBCCA8u, 0x1DBDCFCu, 0x1DBDD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDD04u;
label_1dbdd04:
    // 0x1dbdd04: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1dbdd04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x1dbdd08: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1dbdd08u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbdd0c: 0x8e2d0000  lw          $t5, 0x0($s1)
    ctx->pc = 0x1dbdd0cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1dbdd10: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1dbdd10u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1dbdd14: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBDD14u;
    {
        const bool branch_taken_0x1dbdd14 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBDD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDD14u;
        // 0x1dbdd18: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdd14) {
            ctx->pc = 0x1DBDD28u;
            goto label_1dbdd28;
        }
    }
    ctx->pc = 0x1DBDD1Cu;
    // 0x1dbdd1c: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1dbdd1cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbdd20: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1dbdd20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
    // 0x1dbdd24: 0x8e300018  lw          $s0, 0x18($s1)
    ctx->pc = 0x1dbdd24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1dbdd28:
    // 0x1dbdd28: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1dbdd28u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dbdd2c:
    // 0x1dbdd2c: 0x160f000a  bne         $s0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1DBDD2Cu;
    {
        const bool branch_taken_0x1dbdd2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 15));
        ctx->pc = 0x1DBDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDD2Cu;
        // 0x1dbdd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdd2c) {
            ctx->pc = 0x1DBDD58u;
            goto label_1dbdd58;
        }
    }
    ctx->pc = 0x1DBDD34u;
    // 0x1dbdd34: 0xc76ee54  jal         func_1DBB950
    ctx->pc = 0x1DBDD34u;
    SET_GPR_U32(ctx, 31, 0x1DBDD3Cu);
    ctx->pc = 0x1DBDD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDD34u;
    // 0x1dbdd38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB950u, 0x1DBDD34u, 0x1DBDD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDD3Cu;
label_1dbdd3c:
    // 0x1dbdd3c: 0x14500006  bne         $v0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DBDD3Cu;
    {
        const bool branch_taken_0x1dbdd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1DBDD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDD3Cu;
        // 0x1dbdd40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbdd3c) {
            ctx->pc = 0x1DBDD58u;
            goto label_1dbdd58;
        }
    }
    ctx->pc = 0x1DBDD44u;
    // 0x1dbdd44: 0xc76ee6e  jal         func_1DBB9B8
    ctx->pc = 0x1DBDD44u;
    SET_GPR_U32(ctx, 31, 0x1DBDD4Cu);
    ctx->pc = 0x1DBDD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDD44u;
    // 0x1dbdd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB9B8u, 0x1DBDD44u, 0x1DBDD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDD4Cu;
label_1dbdd4c:
    // 0x1dbdd4c: 0xc76ee56  jal         func_1DBB958
    ctx->pc = 0x1DBDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1DBDD54u);
    ctx->pc = 0x1DBDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBDD4Cu;
    // 0x1dbdd50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DBB958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DBB958u, 0x1DBDD4Cu, 0x1DBDD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBDD54u;
label_1dbdd54:
    // 0x1dbdd54: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dbdd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1dbdd58:
    // 0x1dbdd58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dbdd58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbdd5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dbdd5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dbdd60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dbdd60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbdd64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1dbdd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dbdd68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBDD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBDD68u;
        // 0x1dbdd6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBDD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBDD70u;
}
