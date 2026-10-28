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

// Function: sub_01D93748
// Address: 0x1d93748 - 0x1d93810
void sub_01D93748_0x1d93748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93748_0x1d93748");
#endif

    switch (ctx->pc) {
        case 0x1d93764u: goto label_1d93764;
        case 0x1d93774u: goto label_1d93774;
        case 0x1d93780u: goto label_1d93780;
        case 0x1d93790u: goto label_1d93790;
        case 0x1d937a8u: goto label_1d937a8;
        case 0x1d937d4u: goto label_1d937d4;
        default: break;
    }

    ctx->pc = 0x1d93748u;

    // 0x1d93748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9374c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9374cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d93750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93754: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d93754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d93758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d93758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9375c: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D9375Cu;
    SET_GPR_U32(ctx, 31, 0x1D93764u);
    ctx->pc = 0x1D93760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9375Cu;
    // 0x1d93760: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D9375Cu, 0x1D93764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93764u;
label_1d93764:
    // 0x1d93764: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d93764u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d93768: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d93768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d9376c: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D9376Cu;
    SET_GPR_U32(ctx, 31, 0x1D93774u);
    ctx->pc = 0x1D93770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9376Cu;
    // 0x1d93770: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D9376Cu, 0x1D93774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93774u;
label_1d93774:
    // 0x1d93774: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d93774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d93778: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D93778u;
    SET_GPR_U32(ctx, 31, 0x1D93780u);
    ctx->pc = 0x1D9377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93778u;
    // 0x1d9377c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D93778u, 0x1D93780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93780u;
label_1d93780:
    // 0x1d93780: 0x8c4f024c  lw          $t7, 0x24C($v0)
    ctx->pc = 0x1d93780u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 588)));
    // 0x1d93784: 0x8de44864  lw          $a0, 0x4864($t7)
    ctx->pc = 0x1d93784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 18532)));
    // 0x1d93788: 0xc764cca  jal         func_1D93328
    ctx->pc = 0x1D93788u;
    SET_GPR_U32(ctx, 31, 0x1D93790u);
    ctx->pc = 0x1D9378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93788u;
    // 0x1d9378c: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D93328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D93328u, 0x1D93788u, 0x1D93790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93790u;
label_1d93790:
    // 0x1d93790: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1d93790u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d93794: 0x55e00019  bnel        $t7, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D93794u;
    {
        const bool branch_taken_0x1d93794 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d93794) {
            ctx->pc = 0x1D93798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D93794u;
            // 0x1d93798: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D937FCu;
            goto label_1d937fc;
        }
    }
    ctx->pc = 0x1D9379Cu;
    // 0x1d9379c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d9379cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d937a0: 0xc764a28  jal         func_1D928A0
    ctx->pc = 0x1D937A0u;
    SET_GPR_U32(ctx, 31, 0x1D937A8u);
    ctx->pc = 0x1D937A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D937A0u;
    // 0x1d937a4: 0x24840140  addiu       $a0, $a0, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D928A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D928A0u, 0x1D937A0u, 0x1D937A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D937A8u;
label_1d937a8:
    // 0x1d937a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d937a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d937ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d937acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d937b0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d937b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d937b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d937b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d937b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d937b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d937bc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d937bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d937c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d937c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d937c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D937C4u;
    {
        const bool branch_taken_0x1d937c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D937C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D937C4u;
        // 0x1d937c8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d937c4) {
            ctx->pc = 0x1D937F8u;
            goto label_1d937f8;
        }
    }
    ctx->pc = 0x1D937CCu;
    // 0x1d937cc: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D937CCu;
    SET_GPR_U32(ctx, 31, 0x1D937D4u);
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D937CCu, 0x1D937D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D937D4u;
label_1d937d4:
    // 0x1d937d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d937d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d937d8: 0x8e0d0000  lw          $t5, 0x0($s0)
    ctx->pc = 0x1d937d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d937dc: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1d937dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1d937e0: 0x8dae0328  lw          $t6, 0x328($t5)
    ctx->pc = 0x1d937e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 808)));
    // 0x1d937e4: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x1d937e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d937e8: 0x15cf0004  bne         $t6, $t7, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D937E8u;
    {
        const bool branch_taken_0x1d937e8 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D937ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D937E8u;
        // 0x1d937ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d937e8) {
            ctx->pc = 0x1D937FCu;
            goto label_1d937fc;
        }
    }
    ctx->pc = 0x1D937F0u;
    // 0x1d937f0: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x1d937f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d937f4: 0xadaf0328  sw          $t7, 0x328($t5)
    ctx->pc = 0x1d937f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 808), GPR_U32(ctx, 15));
label_1d937f8:
    // 0x1d937f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d937f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d937fc:
    // 0x1d937fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d937fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93800: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d93800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93804: 0x3e00008  jr          $ra
    ctx->pc = 0x1D93804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93804u;
        // 0x1d93808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D93804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9380Cu;
    // 0x1d9380c: 0x0  nop
    ctx->pc = 0x1d9380cu;
    // NOP
    ctx->pc = 0x1d93810u;
}
