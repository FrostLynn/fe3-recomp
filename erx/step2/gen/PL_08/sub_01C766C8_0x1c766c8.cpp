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

// Function: sub_01C766C8
// Address: 0x1c766c8 - 0x1c767f0
void sub_01C766C8_0x1c766c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C766C8_0x1c766c8");
#endif

    switch (ctx->pc) {
        case 0x1c766f0u: goto label_1c766f0;
        case 0x1c76704u: goto label_1c76704;
        case 0x1c76708u: goto label_1c76708;
        case 0x1c76728u: goto label_1c76728;
        case 0x1c76738u: goto label_1c76738;
        case 0x1c7676cu: goto label_1c7676c;
        case 0x1c767a4u: goto label_1c767a4;
        case 0x1c767b0u: goto label_1c767b0;
        case 0x1c767c0u: goto label_1c767c0;
        case 0x1c767d8u: goto label_1c767d8;
        default: break;
    }

    ctx->pc = 0x1c766c8u;

    // 0x1c766c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c766c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c766cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c766ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c766d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c766d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c766d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c766d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c766d8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c766d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c766dc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c766dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1c766e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c766e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c766e4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c766e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c766e8: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C766E8u;
    SET_GPR_U32(ctx, 31, 0x1C766F0u);
    ctx->pc = 0x1C766ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C766E8u;
    // 0x1c766ec: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C766E8u, 0x1C766F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C766F0u;
label_1c766f0:
    // 0x1c766f0: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1c766f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1c766f4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C766F4u;
    {
        const bool branch_taken_0x1c766f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C766F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C766F4u;
        // 0x1c766f8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c766f4) {
            ctx->pc = 0x1C76740u;
            goto label_1c76740;
        }
    }
    ctx->pc = 0x1C766FCu;
    // 0x1c766fc: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C766FCu;
    {
        const bool branch_taken_0x1c766fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1c766fc) {
            ctx->pc = 0x1C76720u;
            goto label_1c76720;
        }
    }
    ctx->pc = 0x1C76704u;
label_1c76704:
    // 0x1c76704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c76704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c76708:
    // 0x1c76708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c76708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7670c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c7670cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c76710: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c76710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c76714: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c76714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c76718: 0x3e00008  jr          $ra
    ctx->pc = 0x1C76718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7671Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76718u;
        // 0x1c7671c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C76718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C76720u;
label_1c76720:
    // 0x1c76720: 0xc71d652  jal         func_1C75948
    ctx->pc = 0x1C76720u;
    SET_GPR_U32(ctx, 31, 0x1C76728u);
    ctx->pc = 0x1C76724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76720u;
    // 0x1c76724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75948u, 0x1C76720u, 0x1C76728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76728u;
label_1c76728:
    // 0x1c76728: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C76728u;
    {
        const bool branch_taken_0x1c76728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C7672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76728u;
        // 0x1c7672c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76728) {
            ctx->pc = 0x1C76704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76704;
        }
    }
    ctx->pc = 0x1C76730u;
    // 0x1c76730: 0xc71d654  jal         func_1C75950
    ctx->pc = 0x1C76730u;
    SET_GPR_U32(ctx, 31, 0x1C76738u);
    ctx->pc = 0x1C75950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75950u, 0x1C76730u, 0x1C76738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C76738u;
label_1c76738:
    // 0x1c76738: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1C76738u;
    {
        const bool branch_taken_0x1c76738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76738u;
        // 0x1c7673c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76738) {
            ctx->pc = 0x1C76708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76708;
        }
    }
    ctx->pc = 0x1C76740u;
label_1c76740:
    // 0x1c76740: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1c76740u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1c76744: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1C76744u;
    {
        const bool branch_taken_0x1c76744 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C76748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76744u;
        // 0x1c76748: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76744) {
            ctx->pc = 0x1C76708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76708;
        }
    }
    ctx->pc = 0x1C7674Cu;
    // 0x1c7674c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1c7674cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76750: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c76750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76754: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c76754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76758: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c76758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7675c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7675cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76760: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c76760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76764: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C76764u;
    SET_GPR_U32(ctx, 31, 0x1C7676Cu);
    ctx->pc = 0x1C76768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C76764u;
    // 0x1c76768: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C76764u, 0x1C7676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7676Cu;
label_1c7676c:
    // 0x1c7676c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c7676cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76770: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C76770u;
    {
        const bool branch_taken_0x1c76770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C76774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C76770u;
        // 0x1c76774: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c76770) {
            ctx->pc = 0x1C76704u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c76704;
        }
    }
    ctx->pc = 0x1C76778u;
    // 0x1c76778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c76778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c7677c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c7677cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c76780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c76780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c76784: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c76784u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76788: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c76788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c7678c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c7678cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c76790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c76794: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c76794u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c76798: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c76798u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7679c: 0xc71d662  jal         func_1C75988
    ctx->pc = 0x1C7679Cu;
    SET_GPR_U32(ctx, 31, 0x1C767A4u);
    ctx->pc = 0x1C767A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7679Cu;
    // 0x1c767a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75988u, 0x1C7679Cu, 0x1C767A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C767A4u;
label_1c767a4:
    // 0x1c767a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c767a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c767a8: 0xc71d65a  jal         func_1C75968
    ctx->pc = 0x1C767A8u;
    SET_GPR_U32(ctx, 31, 0x1C767B0u);
    ctx->pc = 0x1C767ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C767A8u;
    // 0x1c767ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75968u, 0x1C767A8u, 0x1C767B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C767B0u;
label_1c767b0:
    // 0x1c767b0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c767b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c767b4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c767b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c767b8: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C767B8u;
    SET_GPR_U32(ctx, 31, 0x1C767C0u);
    ctx->pc = 0x1C767BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C767B8u;
    // 0x1c767bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C767B8u, 0x1C767C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C767C0u;
label_1c767c0:
    // 0x1c767c0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c767c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c767c4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c767c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c767c8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1c767c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1c767cc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c767ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c767d0: 0xc71d656  jal         func_1C75958
    ctx->pc = 0x1C767D0u;
    SET_GPR_U32(ctx, 31, 0x1C767D8u);
    ctx->pc = 0x1C767D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C767D0u;
    // 0x1c767d4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C75958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C75958u, 0x1C767D0u, 0x1C767D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C767D8u;
label_1c767d8:
    // 0x1c767d8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1c767d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1c767dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c767dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c767e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c767e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c767e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C767E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C767E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C767E4u;
        // 0x1c767e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C767E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C767ECu;
    // 0x1c767ec: 0x0  nop
    ctx->pc = 0x1c767ecu;
    // NOP
    ctx->pc = 0x1c767f0u;
}
