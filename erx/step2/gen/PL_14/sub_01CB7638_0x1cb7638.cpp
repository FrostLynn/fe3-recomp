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

// Function: sub_01CB7638
// Address: 0x1cb7638 - 0x1cb7700
void sub_01CB7638_0x1cb7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7638_0x1cb7638");
#endif

    switch (ctx->pc) {
        case 0x1cb7654u: goto label_1cb7654;
        case 0x1cb7664u: goto label_1cb7664;
        case 0x1cb7670u: goto label_1cb7670;
        case 0x1cb7680u: goto label_1cb7680;
        case 0x1cb7698u: goto label_1cb7698;
        case 0x1cb76c4u: goto label_1cb76c4;
        default: break;
    }

    ctx->pc = 0x1cb7638u;

    // 0x1cb7638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb763c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb7640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb7640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7644: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb7644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb7648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb7648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb764c: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB764Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7654u);
    ctx->pc = 0x1CB7650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB764Cu;
    // 0x1cb7650: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB764Cu, 0x1CB7654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7654u;
label_1cb7654:
    // 0x1cb7654: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb7654u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb7658: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb7658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb765c: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB765Cu;
    SET_GPR_U32(ctx, 31, 0x1CB7664u);
    ctx->pc = 0x1CB7660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB765Cu;
    // 0x1cb7660: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB765Cu, 0x1CB7664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7664u;
label_1cb7664:
    // 0x1cb7664: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cb7664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cb7668: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB7668u;
    SET_GPR_U32(ctx, 31, 0x1CB7670u);
    ctx->pc = 0x1CB766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7668u;
    // 0x1cb766c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB7668u, 0x1CB7670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7670u;
label_1cb7670:
    // 0x1cb7670: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1cb7670u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1cb7674: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1cb7674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1cb7678: 0xc72dc86  jal         func_1CB7218
    ctx->pc = 0x1CB7678u;
    SET_GPR_U32(ctx, 31, 0x1CB7680u);
    ctx->pc = 0x1CB767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7678u;
    // 0x1cb767c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB7218u, 0x1CB7678u, 0x1CB7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7680u;
label_1cb7680:
    // 0x1cb7680: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1cb7680u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1cb7684: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CB7684u;
    {
        const bool branch_taken_0x1cb7684 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7684) {
            ctx->pc = 0x1CB7688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB7684u;
            // 0x1cb7688: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB76ECu;
            goto label_1cb76ec;
        }
    }
    ctx->pc = 0x1CB768Cu;
    // 0x1cb768c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1cb768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb7690: 0xc72d9e8  jal         func_1CB67A0
    ctx->pc = 0x1CB7690u;
    SET_GPR_U32(ctx, 31, 0x1CB7698u);
    ctx->pc = 0x1CB7694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7690u;
    // 0x1cb7694: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB67A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67A0u, 0x1CB7690u, 0x1CB7698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7698u;
label_1cb7698:
    // 0x1cb7698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb769c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb76a0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cb76a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cb76a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb76a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb76a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb76a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb76ac: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb76acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb76b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1cb76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1cb76b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CB76B4u;
    {
        const bool branch_taken_0x1cb76b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB76B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB76B4u;
        // 0x1cb76b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb76b4) {
            ctx->pc = 0x1CB76E8u;
            goto label_1cb76e8;
        }
    }
    ctx->pc = 0x1CB76BCu;
    // 0x1cb76bc: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB76BCu;
    SET_GPR_U32(ctx, 31, 0x1CB76C4u);
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB76BCu, 0x1CB76C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB76C4u;
label_1cb76c4:
    // 0x1cb76c4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb76c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb76c8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1cb76c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb76cc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1cb76ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1cb76d0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1cb76d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1cb76d4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1cb76d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb76d8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB76D8u;
    {
        const bool branch_taken_0x1cb76d8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB76D8u;
        // 0x1cb76dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb76d8) {
            ctx->pc = 0x1CB76ECu;
            goto label_1cb76ec;
        }
    }
    ctx->pc = 0x1CB76E0u;
    // 0x1cb76e0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1cb76e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cb76e4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1cb76e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1cb76e8:
    // 0x1cb76e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb76e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb76ec:
    // 0x1cb76ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cb76ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb76f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb76f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb76f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB76F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB76F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB76F4u;
        // 0x1cb76f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB76F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB76FCu;
    // 0x1cb76fc: 0x0  nop
    ctx->pc = 0x1cb76fcu;
    // NOP
    ctx->pc = 0x1cb7700u;
}
