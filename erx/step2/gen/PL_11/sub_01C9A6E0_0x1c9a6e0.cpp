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

// Function: sub_01C9A6E0
// Address: 0x1c9a6e0 - 0x1c9a7e8
void sub_01C9A6E0_0x1c9a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C9A6E0_0x1c9a6e0");
#endif

    switch (ctx->pc) {
        case 0x1c9a6fcu: goto label_1c9a6fc;
        case 0x1c9a704u: goto label_1c9a704;
        case 0x1c9a718u: goto label_1c9a718;
        case 0x1c9a720u: goto label_1c9a720;
        case 0x1c9a724u: goto label_1c9a724;
        case 0x1c9a760u: goto label_1c9a760;
        case 0x1c9a78cu: goto label_1c9a78c;
        case 0x1c9a798u: goto label_1c9a798;
        case 0x1c9a7a4u: goto label_1c9a7a4;
        case 0x1c9a7b8u: goto label_1c9a7b8;
        case 0x1c9a7c8u: goto label_1c9a7c8;
        default: break;
    }

    ctx->pc = 0x1c9a6e0u;

    // 0x1c9a6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c9a6e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a6e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a6e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a6ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a6f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c9a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c9a6f4: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9A6F4u;
    SET_GPR_U32(ctx, 31, 0x1C9A6FCu);
    ctx->pc = 0x1C9A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A6F4u;
    // 0x1c9a6f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9A6F4u, 0x1C9A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A6FCu;
label_1c9a6fc:
    // 0x1c9a6fc: 0xc7262d2  jal         func_1C98B48
    ctx->pc = 0x1C9A6FCu;
    SET_GPR_U32(ctx, 31, 0x1C9A704u);
    ctx->pc = 0x1C9A700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A6FCu;
    // 0x1c9a700: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B48u, 0x1C9A6FCu, 0x1C9A704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A704u;
label_1c9a704:
    // 0x1c9a704: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c9a704u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a708: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C9A708u;
    {
        const bool branch_taken_0x1c9a708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C9A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A708u;
        // 0x1c9a70c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a708) {
            ctx->pc = 0x1C9A734u;
            goto label_1c9a734;
        }
    }
    ctx->pc = 0x1C9A710u;
    // 0x1c9a710: 0xc7262ec  jal         func_1C98BB0
    ctx->pc = 0x1C9A710u;
    SET_GPR_U32(ctx, 31, 0x1C9A718u);
    ctx->pc = 0x1C98BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98BB0u, 0x1C9A710u, 0x1C9A718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A718u;
label_1c9a718:
    // 0x1c9a718: 0xc7262d4  jal         func_1C98B50
    ctx->pc = 0x1C9A718u;
    SET_GPR_U32(ctx, 31, 0x1C9A720u);
    ctx->pc = 0x1C9A71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A718u;
    // 0x1c9a71c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B50u, 0x1C9A718u, 0x1C9A720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A720u;
label_1c9a720:
    // 0x1c9a720: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c9a720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c9a724:
    // 0x1c9a724: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a724u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a728: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9a728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a72c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C9A72Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9A730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A72Cu;
        // 0x1c9a730: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C9A72Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C9A734u;
label_1c9a734:
    // 0x1c9a734: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C9A734u;
    {
        const bool branch_taken_0x1c9a734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9A734u;
        // 0x1c9a738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a734) {
            ctx->pc = 0x1C9A724u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c9a724;
        }
    }
    ctx->pc = 0x1C9A73Cu;
    // 0x1c9a73c: 0x0  nop
    ctx->pc = 0x1c9a73cu;
    // NOP
    // 0x1c9a740: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c9a744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9a744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c9a748: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c9a748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c9a74c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9a74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c9a750: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9a750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a754: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c9a754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c9a758: 0xc7262d8  jal         func_1C98B60
    ctx->pc = 0x1C9A758u;
    SET_GPR_U32(ctx, 31, 0x1C9A760u);
    ctx->pc = 0x1C9A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A758u;
    // 0x1c9a75c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B60u, 0x1C9A758u, 0x1C9A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A760u;
label_1c9a760:
    // 0x1c9a760: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c9a760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c9a764: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9a764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9a768: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9a768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a76c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c9a76cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a770: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c9a770u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a774: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c9a774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a778: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c9a778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c9a77c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a780: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9a780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a784: 0xc7262e2  jal         func_1C98B88
    ctx->pc = 0x1C9A784u;
    SET_GPR_U32(ctx, 31, 0x1C9A78Cu);
    ctx->pc = 0x1C9A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A784u;
    // 0x1c9a788: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B88u, 0x1C9A784u, 0x1C9A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A78Cu;
label_1c9a78c:
    // 0x1c9a78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a790: 0xc7262da  jal         func_1C98B68
    ctx->pc = 0x1C9A790u;
    SET_GPR_U32(ctx, 31, 0x1C9A798u);
    ctx->pc = 0x1C9A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A790u;
    // 0x1c9a794: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B68u, 0x1C9A790u, 0x1C9A798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A798u;
label_1c9a798:
    // 0x1c9a798: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c9a798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c9a79c: 0xc7262d6  jal         func_1C98B58
    ctx->pc = 0x1C9A79Cu;
    SET_GPR_U32(ctx, 31, 0x1C9A7A4u);
    ctx->pc = 0x1C9A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A79Cu;
    // 0x1c9a7a0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B58u, 0x1C9A79Cu, 0x1C9A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A7A4u;
label_1c9a7a4:
    // 0x1c9a7a4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c9a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c9a7a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c9a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a7ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c9a7acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c9a7b0: 0xc7262dc  jal         func_1C98B70
    ctx->pc = 0x1C9A7B0u;
    SET_GPR_U32(ctx, 31, 0x1C9A7B8u);
    ctx->pc = 0x1C9A7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A7B0u;
    // 0x1c9a7b4: 0x240500c3  addiu       $a1, $zero, 0xC3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 195));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B70u, 0x1C9A7B0u, 0x1C9A7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A7B8u;
label_1c9a7b8:
    // 0x1c9a7b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c9a7b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c9a7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a7c0: 0xc7262d0  jal         func_1C98B40
    ctx->pc = 0x1C9A7C0u;
    SET_GPR_U32(ctx, 31, 0x1C9A7C8u);
    ctx->pc = 0x1C9A7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A7C0u;
    // 0x1c9a7c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C98B40u, 0x1C9A7C0u, 0x1C9A7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9A7C8u;
label_1c9a7c8:
    // 0x1c9a7c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9a7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c9a7cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c9a7ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c9a7d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9a7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c9a7d4: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x1c9a7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x1c9a7d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c9a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c9a7dc: 0x87262de  j           func_1C98B78
    ctx->pc = 0x1C9A7DCu;
    ctx->pc = 0x1C9A7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C9A7DCu;
    // 0x1c9a7e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C98B78u;
    sub_01C98B78_0x1c98b78(rdram, ctx, runtime); return;
    ctx->pc = 0x1C9A7E4u;
    // 0x1c9a7e4: 0x0  nop
    ctx->pc = 0x1c9a7e4u;
    // NOP
    ctx->pc = 0x1c9a7e8u;
}
