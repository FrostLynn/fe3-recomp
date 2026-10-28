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

// Function: sub_01D286D0
// Address: 0x1d286d0 - 0x1d287fc
void sub_01D286D0_0x1d286d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D286D0_0x1d286d0");
#endif

    switch (ctx->pc) {
        case 0x1d286ecu: goto label_1d286ec;
        case 0x1d286f4u: goto label_1d286f4;
        case 0x1d28708u: goto label_1d28708;
        case 0x1d28710u: goto label_1d28710;
        case 0x1d28714u: goto label_1d28714;
        case 0x1d28750u: goto label_1d28750;
        case 0x1d28790u: goto label_1d28790;
        case 0x1d287a4u: goto label_1d287a4;
        case 0x1d287b0u: goto label_1d287b0;
        case 0x1d287bcu: goto label_1d287bc;
        case 0x1d287d0u: goto label_1d287d0;
        case 0x1d287e0u: goto label_1d287e0;
        default: break;
    }

    ctx->pc = 0x1d286d0u;

    // 0x1d286d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d286d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d286d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d286d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d286d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d286d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d286dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d286dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d286e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d286e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d286e4: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D286E4u;
    SET_GPR_U32(ctx, 31, 0x1D286ECu);
    ctx->pc = 0x1D286E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D286E4u;
    // 0x1d286e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D286E4u, 0x1D286ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D286ECu;
label_1d286ec:
    // 0x1d286ec: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D286ECu;
    SET_GPR_U32(ctx, 31, 0x1D286F4u);
    ctx->pc = 0x1D286F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D286ECu;
    // 0x1d286f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D286ECu, 0x1D286F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D286F4u;
label_1d286f4:
    // 0x1d286f4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d286f4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d286f8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D286F8u;
    {
        const bool branch_taken_0x1d286f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D286FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D286F8u;
        // 0x1d286fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d286f8) {
            ctx->pc = 0x1D28724u;
            goto label_1d28724;
        }
    }
    ctx->pc = 0x1D28700u;
    // 0x1d28700: 0xc749b30  jal         func_1D26CC0
    ctx->pc = 0x1D28700u;
    SET_GPR_U32(ctx, 31, 0x1D28708u);
    ctx->pc = 0x1D26CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CC0u, 0x1D28700u, 0x1D28708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28708u;
label_1d28708:
    // 0x1d28708: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D28708u;
    SET_GPR_U32(ctx, 31, 0x1D28710u);
    ctx->pc = 0x1D2870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28708u;
    // 0x1d2870c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D28708u, 0x1D28710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28710u;
label_1d28710:
    // 0x1d28710: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d28710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d28714:
    // 0x1d28714: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28714u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d28718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d28718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2871c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2871Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D28720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2871Cu;
        // 0x1d28720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2871Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D28724u;
label_1d28724:
    // 0x1d28724: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D28724u;
    {
        const bool branch_taken_0x1d28724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28724u;
        // 0x1d28728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28724) {
            ctx->pc = 0x1D28714u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28714;
        }
    }
    ctx->pc = 0x1D2872Cu;
    // 0x1d2872c: 0x0  nop
    ctx->pc = 0x1d2872cu;
    // NOP
    // 0x1d28730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d28730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d28734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28738: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d28738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d2873c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d28740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d28740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28744: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d28744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d28748: 0xc749b1c  jal         func_1D26C70
    ctx->pc = 0x1D28748u;
    SET_GPR_U32(ctx, 31, 0x1D28750u);
    ctx->pc = 0x1D2874Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28748u;
    // 0x1d2874c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C70u, 0x1D28748u, 0x1D28750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28750u;
label_1d28750:
    // 0x1d28750: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d28750u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d28754: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d28754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28758: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1d28758u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1d2875c: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1d2875cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d28760: 0x11e00036  beqz        $t7, . + 4 + (0x36 << 2)
    ctx->pc = 0x1D28760u;
    {
        const bool branch_taken_0x1d28760 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28760u;
        // 0x1d28764: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28760) {
            ctx->pc = 0x1D2883Cu;
            return;
        }
    }
    ctx->pc = 0x1D28768u;
    // 0x1d28768: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d28768u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d2876c: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d2876cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d28770: 0x25cea7d0  addiu       $t6, $t6, -0x5830
    ctx->pc = 0x1d28770u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944720));
    // 0x1d28774: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d28774u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d28778: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d28778u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d2877c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D2877Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D28784u: goto label_1d28784;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2877Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D28784u;
label_1d28784:
    // 0x1d28784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2878c: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1d2878cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
label_1d28790:
    // 0x1d28790: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d28790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28794: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28794u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28798: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d28798u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2879c: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D2879Cu;
    SET_GPR_U32(ctx, 31, 0x1D287A4u);
    ctx->pc = 0x1D287A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2879Cu;
    // 0x1d287a0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D2879Cu, 0x1D287A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D287A4u;
label_1d287a4:
    // 0x1d287a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d287a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d287a8: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D287A8u;
    SET_GPR_U32(ctx, 31, 0x1D287B0u);
    ctx->pc = 0x1D287ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D287A8u;
    // 0x1d287ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D287A8u, 0x1D287B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D287B0u;
label_1d287b0:
    // 0x1d287b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d287b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d287b4: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D287B4u;
    SET_GPR_U32(ctx, 31, 0x1D287BCu);
    ctx->pc = 0x1D287B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D287B4u;
    // 0x1d287b8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D287B4u, 0x1D287BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D287BCu;
label_1d287bc:
    // 0x1d287bc: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d287bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d287c0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d287c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d287c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d287c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d287c8: 0xc749b20  jal         func_1D26C80
    ctx->pc = 0x1D287C8u;
    SET_GPR_U32(ctx, 31, 0x1D287D0u);
    ctx->pc = 0x1D287CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D287C8u;
    // 0x1d287cc: 0x240500e8  addiu       $a1, $zero, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C80u, 0x1D287C8u, 0x1D287D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D287D0u;
label_1d287d0:
    // 0x1d287d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d287d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d287d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d287d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d287d8: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D287D8u;
    SET_GPR_U32(ctx, 31, 0x1D287E0u);
    ctx->pc = 0x1D287DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D287D8u;
    // 0x1d287dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D287D8u, 0x1D287E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D287E0u;
label_1d287e0:
    // 0x1d287e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d287e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d287e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d287e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d287e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d287e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d287ec: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x1d287ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x1d287f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d287f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d287f4: 0x8749b22  j           func_1D26C88
    ctx->pc = 0x1D287F4u;
    ctx->pc = 0x1D287F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D287F4u;
    // 0x1d287f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C88u;
    sub_01D26C88_0x1d26c88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D287FCu;
}
