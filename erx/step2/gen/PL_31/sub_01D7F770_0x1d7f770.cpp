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

// Function: sub_01D7F770
// Address: 0x1d7f770 - 0x1d7f858
void sub_01D7F770_0x1d7f770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F770_0x1d7f770");
#endif

    switch (ctx->pc) {
        case 0x1d7f784u: goto label_1d7f784;
        case 0x1d7f798u: goto label_1d7f798;
        case 0x1d7f79cu: goto label_1d7f79c;
        case 0x1d7f7b8u: goto label_1d7f7b8;
        case 0x1d7f7c4u: goto label_1d7f7c4;
        case 0x1d7f804u: goto label_1d7f804;
        case 0x1d7f830u: goto label_1d7f830;
        case 0x1d7f83cu: goto label_1d7f83c;
        case 0x1d7f848u: goto label_1d7f848;
        default: break;
    }

    ctx->pc = 0x1d7f770u;

    // 0x1d7f770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f774: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f778: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f77c: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F77Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F784u);
    ctx->pc = 0x1D7F780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F77Cu;
    // 0x1d7f780: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F77Cu, 0x1D7F784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F784u;
label_1d7f784:
    // 0x1d7f784: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f788: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D7F788u;
    {
        const bool branch_taken_0x1d7f788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F788u;
        // 0x1d7f78c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f788) {
            ctx->pc = 0x1D7F7ACu;
            goto label_1d7f7ac;
        }
    }
    ctx->pc = 0x1D7F790u;
    // 0x1d7f790: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F790u;
    SET_GPR_U32(ctx, 31, 0x1D7F798u);
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F790u, 0x1D7F798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F798u;
label_1d7f798:
    // 0x1d7f798: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7f798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7f79c:
    // 0x1d7f79c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f79cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f7a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f7a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F7A4u;
        // 0x1d7f7a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F7ACu;
label_1d7f7ac:
    // 0x1d7f7ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f7b0: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F7B0u;
    SET_GPR_U32(ctx, 31, 0x1D7F7B8u);
    ctx->pc = 0x1D7F7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F7B0u;
    // 0x1d7f7b4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F7B0u, 0x1D7F7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F7B8u;
label_1d7f7b8:
    // 0x1d7f7b8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d7f7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d7f7bc: 0xc75f5e4  jal         func_1D7D790
    ctx->pc = 0x1D7F7BCu;
    SET_GPR_U32(ctx, 31, 0x1D7F7C4u);
    ctx->pc = 0x1D7F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F7BCu;
    // 0x1d7f7c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D790u, 0x1D7F7BCu, 0x1D7F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F7C4u;
label_1d7f7c4:
    // 0x1d7f7c4: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D7F7C4u;
    {
        const bool branch_taken_0x1d7f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F7C4u;
        // 0x1d7f7c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f7c4) {
            ctx->pc = 0x1D7F79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f79c;
        }
    }
    ctx->pc = 0x1D7F7CCu;
    // 0x1d7f7cc: 0x0  nop
    ctx->pc = 0x1d7f7ccu;
    // NOP
    // 0x1d7f7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f7d4: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d7f7d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d7f7d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7f7dc: 0x25ee87f0  addiu       $t6, $t7, -0x7810
    ctx->pc = 0x1d7f7dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 4294936560));
    // 0x1d7f7e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d7f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d7f7e4: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d7f7e4u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D887F4u));
    // 0x1d7f7e8: 0x8ded87f0  lw          $t5, -0x7810($t7)
    ctx->pc = 0x1d7f7e8u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D887F0u));
    // 0x1d7f7ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f7f0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d7f7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d7f7f4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d7f7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d7f7f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d7f7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d7f7fc: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F7FCu;
    SET_GPR_U32(ctx, 31, 0x1D7F804u);
    ctx->pc = 0x1D7F800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F7FCu;
    // 0x1d7f800: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F7FCu, 0x1D7F804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F804u;
label_1d7f804:
    // 0x1d7f804: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d7f804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d7f808: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7f808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f80c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f80cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f810: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d7f810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f814: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d7f814u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d7f818: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7f818u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f81c: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d7f81cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d7f820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f824: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d7f824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d7f828: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F828u;
    SET_GPR_U32(ctx, 31, 0x1D7F830u);
    ctx->pc = 0x1D7F82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F828u;
    // 0x1d7f82c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F828u, 0x1D7F830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F830u;
label_1d7f830:
    // 0x1d7f830: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7f830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f834: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F834u;
    SET_GPR_U32(ctx, 31, 0x1D7F83Cu);
    ctx->pc = 0x1D7F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F834u;
    // 0x1d7f838: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F834u, 0x1D7F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F83Cu;
label_1d7f83c:
    // 0x1d7f83c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f840: 0xc75f5e6  jal         func_1D7D798
    ctx->pc = 0x1D7F840u;
    SET_GPR_U32(ctx, 31, 0x1D7F848u);
    ctx->pc = 0x1D7F844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F840u;
    // 0x1d7f844: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D798u, 0x1D7F840u, 0x1D7F848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F848u;
label_1d7f848:
    // 0x1d7f848: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d7f848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f84c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7f84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7f850: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F850u;
        // 0x1d7f854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F858u;
}
