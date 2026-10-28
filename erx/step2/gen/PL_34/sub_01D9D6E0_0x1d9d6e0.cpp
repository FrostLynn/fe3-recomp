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

// Function: sub_01D9D6E0
// Address: 0x1d9d6e0 - 0x1d9d808
void sub_01D9D6E0_0x1d9d6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9D6E0_0x1d9d6e0");
#endif

    switch (ctx->pc) {
        case 0x1d9d708u: goto label_1d9d708;
        case 0x1d9d71cu: goto label_1d9d71c;
        case 0x1d9d720u: goto label_1d9d720;
        case 0x1d9d740u: goto label_1d9d740;
        case 0x1d9d750u: goto label_1d9d750;
        case 0x1d9d784u: goto label_1d9d784;
        case 0x1d9d7bcu: goto label_1d9d7bc;
        case 0x1d9d7c8u: goto label_1d9d7c8;
        case 0x1d9d7d8u: goto label_1d9d7d8;
        case 0x1d9d7f0u: goto label_1d9d7f0;
        default: break;
    }

    ctx->pc = 0x1d9d6e0u;

    // 0x1d9d6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9d6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9d6e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d9d6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d6ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9d6f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d9d6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d6f4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d9d6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d9d6f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9d6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d6fc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d9d6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d9d700: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D700u;
    SET_GPR_U32(ctx, 31, 0x1D9D708u);
    ctx->pc = 0x1D9D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D700u;
    // 0x1d9d704: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D700u, 0x1D9D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D708u;
label_1d9d708:
    // 0x1d9d708: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d9d708u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d9d70c: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D9D70Cu;
    {
        const bool branch_taken_0x1d9d70c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D70Cu;
        // 0x1d9d710: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d70c) {
            ctx->pc = 0x1D9D758u;
            goto label_1d9d758;
        }
    }
    ctx->pc = 0x1D9D714u;
    // 0x1d9d714: 0x120f0008  beq         $s0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9D714u;
    {
        const bool branch_taken_0x1d9d714 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d9d714) {
            ctx->pc = 0x1D9D738u;
            goto label_1d9d738;
        }
    }
    ctx->pc = 0x1D9D71Cu;
label_1d9d71c:
    // 0x1d9d71c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d9d71cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d9d720:
    // 0x1d9d720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9d724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d728: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9d728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9d72c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d9d72cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9d730: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D730u;
        // 0x1d9d734: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D738u;
label_1d9d738:
    // 0x1d9d738: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9D738u;
    SET_GPR_U32(ctx, 31, 0x1D9D740u);
    ctx->pc = 0x1D9D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D738u;
    // 0x1d9d73c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9D738u, 0x1D9D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D740u;
label_1d9d740:
    // 0x1d9d740: 0x1450fff6  bne         $v0, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D9D740u;
    {
        const bool branch_taken_0x1d9d740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D9D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D740u;
        // 0x1d9d744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d740) {
            ctx->pc = 0x1D9D71Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d71c;
        }
    }
    ctx->pc = 0x1D9D748u;
    // 0x1d9d748: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9D748u;
    SET_GPR_U32(ctx, 31, 0x1D9D750u);
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9D748u, 0x1D9D750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D750u;
label_1d9d750:
    // 0x1d9d750: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1D9D750u;
    {
        const bool branch_taken_0x1d9d750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D750u;
        // 0x1d9d754: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d750) {
            ctx->pc = 0x1D9D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d720;
        }
    }
    ctx->pc = 0x1D9D758u;
label_1d9d758:
    // 0x1d9d758: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d9d758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d9d75c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D9D75Cu;
    {
        const bool branch_taken_0x1d9d75c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D75Cu;
        // 0x1d9d760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d75c) {
            ctx->pc = 0x1D9D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d720;
        }
    }
    ctx->pc = 0x1D9D764u;
    // 0x1d9d764: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1d9d764u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9d768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d76c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9d76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d770: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9d770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d774: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9d774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d778: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9d778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d77c: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9D77Cu;
    SET_GPR_U32(ctx, 31, 0x1D9D784u);
    ctx->pc = 0x1D9D780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D77Cu;
    // 0x1d9d780: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9D77Cu, 0x1D9D784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D784u;
label_1d9d784:
    // 0x1d9d784: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9d784u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d788: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x1D9D788u;
    {
        const bool branch_taken_0x1d9d788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D788u;
        // 0x1d9d78c: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d788) {
            ctx->pc = 0x1D9D71Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9d71c;
        }
    }
    ctx->pc = 0x1D9D790u;
    // 0x1d9d790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9d790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9d794: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d9d794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9d798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9d798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9d79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d9d79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d7a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9d7a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9d7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9d7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d7ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d9d7acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d7b0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d9d7b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d7b4: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9D7B4u;
    SET_GPR_U32(ctx, 31, 0x1D9D7BCu);
    ctx->pc = 0x1D9D7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D7B4u;
    // 0x1d9d7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9D7B4u, 0x1D9D7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D7BCu;
label_1d9d7bc:
    // 0x1d9d7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9d7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d7c0: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9D7C0u;
    SET_GPR_U32(ctx, 31, 0x1D9D7C8u);
    ctx->pc = 0x1D9D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D7C0u;
    // 0x1d9d7c4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9D7C0u, 0x1D9D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D7C8u;
label_1d9d7c8:
    // 0x1d9d7c8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9d7cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d9d7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9d7d0: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D7D0u;
    SET_GPR_U32(ctx, 31, 0x1D9D7D8u);
    ctx->pc = 0x1D9D7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D7D0u;
    // 0x1d9d7d4: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D7D0u, 0x1D9D7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D7D8u;
label_1d9d7d8:
    // 0x1d9d7d8: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9d7d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9d7dc: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d9d7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d9d7e0: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d9d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d9d7e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9d7e8: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9D7E8u;
    SET_GPR_U32(ctx, 31, 0x1D9D7F0u);
    ctx->pc = 0x1D9D7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9D7E8u;
    // 0x1d9d7ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9D7E8u, 0x1D9D7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9D7F0u;
label_1d9d7f0:
    // 0x1d9d7f0: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d9d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d9d7f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9d7f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9d7f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9d7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9d7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9D7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9D800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D7FCu;
        // 0x1d9d800: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9D804u;
    // 0x1d9d804: 0x0  nop
    ctx->pc = 0x1d9d804u;
    // NOP
    ctx->pc = 0x1d9d808u;
}
