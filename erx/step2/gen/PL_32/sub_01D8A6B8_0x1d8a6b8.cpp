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

// Function: sub_01D8A6B8
// Address: 0x1d8a6b8 - 0x1d8a7a0
void sub_01D8A6B8_0x1d8a6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A6B8_0x1d8a6b8");
#endif

    switch (ctx->pc) {
        case 0x1d8a6ccu: goto label_1d8a6cc;
        case 0x1d8a6e0u: goto label_1d8a6e0;
        case 0x1d8a6e4u: goto label_1d8a6e4;
        case 0x1d8a700u: goto label_1d8a700;
        case 0x1d8a70cu: goto label_1d8a70c;
        case 0x1d8a74cu: goto label_1d8a74c;
        case 0x1d8a778u: goto label_1d8a778;
        case 0x1d8a784u: goto label_1d8a784;
        case 0x1d8a790u: goto label_1d8a790;
        default: break;
    }

    ctx->pc = 0x1d8a6b8u;

    // 0x1d8a6b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a6bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a6c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8a6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8a6c4: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8A6C4u;
    SET_GPR_U32(ctx, 31, 0x1D8A6CCu);
    ctx->pc = 0x1D8A6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A6C4u;
    // 0x1d8a6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8A6C4u, 0x1D8A6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A6CCu;
label_1d8a6cc:
    // 0x1d8a6cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8a6ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a6d0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8A6D0u;
    {
        const bool branch_taken_0x1d8a6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D8A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A6D0u;
        // 0x1d8a6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a6d0) {
            ctx->pc = 0x1D8A6F4u;
            goto label_1d8a6f4;
        }
    }
    ctx->pc = 0x1D8A6D8u;
    // 0x1d8a6d8: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D8A6D8u;
    SET_GPR_U32(ctx, 31, 0x1D8A6E0u);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D8A6D8u, 0x1D8A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A6E0u;
label_1d8a6e0:
    // 0x1d8a6e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d8a6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d8a6e4:
    // 0x1d8a6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a6e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8a6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A6ECu;
        // 0x1d8a6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A6F4u;
label_1d8a6f4:
    // 0x1d8a6f4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8a6f8: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A6F8u;
    SET_GPR_U32(ctx, 31, 0x1D8A700u);
    ctx->pc = 0x1D8A6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A6F8u;
    // 0x1d8a6fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A6F8u, 0x1D8A700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A700u;
label_1d8a700:
    // 0x1d8a700: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d8a700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d8a704: 0xc762264  jal         func_1D88990
    ctx->pc = 0x1D8A704u;
    SET_GPR_U32(ctx, 31, 0x1D8A70Cu);
    ctx->pc = 0x1D8A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A704u;
    // 0x1d8a708: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88990u, 0x1D8A704u, 0x1D8A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A70Cu;
label_1d8a70c:
    // 0x1d8a70c: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D8A70Cu;
    {
        const bool branch_taken_0x1d8a70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A70Cu;
        // 0x1d8a710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a70c) {
            ctx->pc = 0x1D8A6E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a6e4;
        }
    }
    ctx->pc = 0x1D8A714u;
    // 0x1d8a714: 0x0  nop
    ctx->pc = 0x1d8a714u;
    // NOP
    // 0x1d8a718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8a71c: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8a71cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8a720: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d8a720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d8a724: 0x25ee26f0  addiu       $t6, $t7, 0x26F0
    ctx->pc = 0x1d8a724u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9968));
    // 0x1d8a728: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d8a728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d8a72c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d8a72cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D926F4u));
    // 0x1d8a730: 0x8ded26f0  lw          $t5, 0x26F0($t7)
    ctx->pc = 0x1d8a730u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D926F0u));
    // 0x1d8a734: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8a734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a738: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d8a738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d8a73c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d8a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d8a740: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d8a740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d8a744: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A744u;
    SET_GPR_U32(ctx, 31, 0x1D8A74Cu);
    ctx->pc = 0x1D8A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A744u;
    // 0x1d8a748: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A744u, 0x1D8A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A74Cu;
label_1d8a74c:
    // 0x1d8a74c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d8a74cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d8a750: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8a750u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a754: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a758: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8a758u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a75c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8a75cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8a760: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8a760u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a764: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d8a764u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d8a768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a76c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d8a76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8a770: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A770u;
    SET_GPR_U32(ctx, 31, 0x1D8A778u);
    ctx->pc = 0x1D8A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A770u;
    // 0x1d8a774: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A770u, 0x1D8A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A778u;
label_1d8a778:
    // 0x1d8a778: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8a778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8a77c: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A77Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A784u);
    ctx->pc = 0x1D8A780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A77Cu;
    // 0x1d8a780: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A77Cu, 0x1D8A784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A784u;
label_1d8a784:
    // 0x1d8a784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8a784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a788: 0xc762266  jal         func_1D88998
    ctx->pc = 0x1D8A788u;
    SET_GPR_U32(ctx, 31, 0x1D8A790u);
    ctx->pc = 0x1D8A78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A788u;
    // 0x1d8a78c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88998u, 0x1D8A788u, 0x1D8A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A790u;
label_1d8a790:
    // 0x1d8a790: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d8a790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a794: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8a794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8a798: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A798u;
        // 0x1d8a79c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A7A0u;
}
