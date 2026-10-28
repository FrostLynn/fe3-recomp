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

// Function: sub_01CB90D8
// Address: 0x1cb90d8 - 0x1cb91a0
void sub_01CB90D8_0x1cb90d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB90D8_0x1cb90d8");
#endif

    switch (ctx->pc) {
        case 0x1cb90f4u: goto label_1cb90f4;
        case 0x1cb9104u: goto label_1cb9104;
        case 0x1cb9110u: goto label_1cb9110;
        case 0x1cb9120u: goto label_1cb9120;
        case 0x1cb9138u: goto label_1cb9138;
        case 0x1cb9164u: goto label_1cb9164;
        default: break;
    }

    ctx->pc = 0x1cb90d8u;

    // 0x1cb90d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb90d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb90dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb90dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb90e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb90e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb90e4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb90e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb90e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb90e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb90ec: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB90ECu;
    SET_GPR_U32(ctx, 31, 0x1CB90F4u);
    ctx->pc = 0x1CB90F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB90ECu;
    // 0x1cb90f0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB90ECu, 0x1CB90F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB90F4u;
label_1cb90f4:
    // 0x1cb90f4: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb90f4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb90f8: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb90fc: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB90FCu;
    SET_GPR_U32(ctx, 31, 0x1CB9104u);
    ctx->pc = 0x1CB9100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB90FCu;
    // 0x1cb9100: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB90FCu, 0x1CB9104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9104u;
label_1cb9104:
    // 0x1cb9104: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb9104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb9108: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB9108u;
    SET_GPR_U32(ctx, 31, 0x1CB9110u);
    ctx->pc = 0x1CB910Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9108u;
    // 0x1cb910c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB9108u, 0x1CB9110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9110u;
label_1cb9110:
    // 0x1cb9110: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb9110u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb9114: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb9114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb9118: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB9118u;
    SET_GPR_U32(ctx, 31, 0x1CB9120u);
    ctx->pc = 0x1CB911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9118u;
    // 0x1cb911c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB9118u, 0x1CB9120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9120u;
label_1cb9120:
    // 0x1cb9120: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cb9120u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cb9124: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CB9124u;
    {
        const bool branch_taken_0x1cb9124 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9124) {
            ctx->pc = 0x1CB9128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB9124u;
            // 0x1cb9128: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB918Cu;
            goto label_1cb918c;
        }
    }
    ctx->pc = 0x1CB912Cu;
    // 0x1cb912c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb912cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb9130: 0xc72d9e8  jal         func_1CB67A0
    ctx->pc = 0x1CB9130u;
    SET_GPR_U32(ctx, 31, 0x1CB9138u);
    ctx->pc = 0x1CB9134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9130u;
    // 0x1cb9134: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67A0u, 0x1CB9130u, 0x1CB9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9138u;
label_1cb9138:
    // 0x1cb9138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb9138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb913c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9140: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb9140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb9144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb9144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9148: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb9148u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb914c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb914cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9150: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cb9150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cb9154: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB9154u;
    {
        const bool branch_taken_0x1cb9154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9154u;
        // 0x1cb9158: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9154) {
            ctx->pc = 0x1CB9188u;
            goto label_1cb9188;
        }
    }
    ctx->pc = 0x1CB915Cu;
    // 0x1cb915c: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB915Cu;
    SET_GPR_U32(ctx, 31, 0x1CB9164u);
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB915Cu, 0x1CB9164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9164u;
label_1cb9164:
    // 0x1cb9164: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb9164u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb9168: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cb9168u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb916c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cb916cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cb9170: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cb9170u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cb9174: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cb9174u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb9178: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB9178u;
    {
        const bool branch_taken_0x1cb9178 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9178u;
        // 0x1cb917c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9178) {
            ctx->pc = 0x1CB918Cu;
            goto label_1cb918c;
        }
    }
    ctx->pc = 0x1CB9180u;
    // 0x1cb9180: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cb9180u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb9184: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cb9184u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cb9188:
    // 0x1cb9188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb9188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb918c:
    // 0x1cb918c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb9190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb9194: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB9194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB9198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9194u;
        // 0x1cb9198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB919Cu;
    // 0x1cb919c: 0x0  nop
    ctx->pc = 0x1cb919cu;
    // NOP
    ctx->pc = 0x1cb91a0u;
}
