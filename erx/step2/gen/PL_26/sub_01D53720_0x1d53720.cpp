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

// Function: sub_01D53720
// Address: 0x1d53720 - 0x1d537e8
void sub_01D53720_0x1d53720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D53720_0x1d53720");
#endif

    switch (ctx->pc) {
        case 0x1d5373cu: goto label_1d5373c;
        case 0x1d5374cu: goto label_1d5374c;
        case 0x1d53758u: goto label_1d53758;
        case 0x1d53768u: goto label_1d53768;
        case 0x1d53780u: goto label_1d53780;
        case 0x1d537acu: goto label_1d537ac;
        default: break;
    }

    ctx->pc = 0x1d53720u;

    // 0x1d53720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d53720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d53724: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d53724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d53728: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d53728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5372c: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d5372cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d53730: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d53730u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53734: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53734u;
    SET_GPR_U32(ctx, 31, 0x1D5373Cu);
    ctx->pc = 0x1D53738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53734u;
    // 0x1d53738: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53734u, 0x1D5373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5373Cu;
label_1d5373c:
    // 0x1d5373c: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d5373cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d53740: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d53740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d53744: 0xc754684  jal         func_1D51A10
    ctx->pc = 0x1D53744u;
    SET_GPR_U32(ctx, 31, 0x1D5374Cu);
    ctx->pc = 0x1D53748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53744u;
    // 0x1d53748: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51A10u, 0x1D53744u, 0x1D5374Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5374Cu;
label_1d5374c:
    // 0x1d5374c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d5374cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d53750: 0xc7543d6  jal         func_1D50F58
    ctx->pc = 0x1D53750u;
    SET_GPR_U32(ctx, 31, 0x1D53758u);
    ctx->pc = 0x1D53754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53750u;
    // 0x1d53754: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F58u, 0x1D53750u, 0x1D53758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53758u;
label_1d53758:
    // 0x1d53758: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d53758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d5375c: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d5375cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d53760: 0xc754684  jal         func_1D51A10
    ctx->pc = 0x1D53760u;
    SET_GPR_U32(ctx, 31, 0x1D53768u);
    ctx->pc = 0x1D53764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53760u;
    // 0x1d53764: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D51A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D51A10u, 0x1D53760u, 0x1D53768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53768u;
label_1d53768:
    // 0x1d53768: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d53768u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d5376c: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5376Cu;
    {
        const bool branch_taken_0x1d5376c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5376c) {
            ctx->pc = 0x1D53770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5376Cu;
            // 0x1d53770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D537D4u;
            goto label_1d537d4;
        }
    }
    ctx->pc = 0x1D53774u;
    // 0x1d53774: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d53774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d53778: 0xc7543e8  jal         func_1D50FA0
    ctx->pc = 0x1D53778u;
    SET_GPR_U32(ctx, 31, 0x1D53780u);
    ctx->pc = 0x1D5377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D53778u;
    // 0x1d5377c: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D50FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50FA0u, 0x1D53778u, 0x1D53780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D53780u;
label_1d53780:
    // 0x1d53780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d53780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d53784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53788: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d53788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d5378c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d5378cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53790: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d53790u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d53794: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d53794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d53798: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d53798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d5379c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5379Cu;
    {
        const bool branch_taken_0x1d5379c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D537A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5379Cu;
        // 0x1d537a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5379c) {
            ctx->pc = 0x1D537D0u;
            goto label_1d537d0;
        }
    }
    ctx->pc = 0x1D537A4u;
    // 0x1d537a4: 0xc7543e2  jal         func_1D50F88
    ctx->pc = 0x1D537A4u;
    SET_GPR_U32(ctx, 31, 0x1D537ACu);
    ctx->pc = 0x1D50F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50F88u, 0x1D537A4u, 0x1D537ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D537ACu;
label_1d537ac:
    // 0x1d537ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d537acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d537b0: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d537b0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d537b4: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d537b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d537b8: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d537b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d537bc: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d537bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d537c0: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D537C0u;
    {
        const bool branch_taken_0x1d537c0 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D537C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D537C0u;
        // 0x1d537c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d537c0) {
            ctx->pc = 0x1D537D4u;
            goto label_1d537d4;
        }
    }
    ctx->pc = 0x1D537C8u;
    // 0x1d537c8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d537c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d537cc: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d537ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d537d0:
    // 0x1d537d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d537d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d537d4:
    // 0x1d537d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d537d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d537d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d537d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d537dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D537DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D537E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D537DCu;
        // 0x1d537e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D537DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D537E4u;
    // 0x1d537e4: 0x0  nop
    ctx->pc = 0x1d537e4u;
    // NOP
    ctx->pc = 0x1d537e8u;
}
