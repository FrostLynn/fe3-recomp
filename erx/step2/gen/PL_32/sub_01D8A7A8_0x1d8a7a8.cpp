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

// Function: sub_01D8A7A8
// Address: 0x1d8a7a8 - 0x1d8a890
void sub_01D8A7A8_0x1d8a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A7A8_0x1d8a7a8");
#endif

    switch (ctx->pc) {
        case 0x1d8a7bcu: goto label_1d8a7bc;
        case 0x1d8a7d0u: goto label_1d8a7d0;
        case 0x1d8a7d4u: goto label_1d8a7d4;
        case 0x1d8a7f0u: goto label_1d8a7f0;
        case 0x1d8a7fcu: goto label_1d8a7fc;
        case 0x1d8a83cu: goto label_1d8a83c;
        case 0x1d8a868u: goto label_1d8a868;
        case 0x1d8a874u: goto label_1d8a874;
        case 0x1d8a880u: goto label_1d8a880;
        default: break;
    }

    ctx->pc = 0x1d8a7a8u;

    // 0x1d8a7a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a7ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a7b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8a7b4: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8A7B4u;
    SET_GPR_U32(ctx, 31, 0x1D8A7BCu);
    ctx->pc = 0x1D8A7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A7B4u;
    // 0x1d8a7b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8A7B4u, 0x1D8A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A7BCu;
label_1d8a7bc:
    // 0x1d8a7bc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8a7bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a7c0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D8A7C0u;
    {
        const bool branch_taken_0x1d8a7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D8A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A7C0u;
        // 0x1d8a7c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a7c0) {
            ctx->pc = 0x1D8A7E4u;
            goto label_1d8a7e4;
        }
    }
    ctx->pc = 0x1D8A7C8u;
    // 0x1d8a7c8: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D8A7C8u;
    SET_GPR_U32(ctx, 31, 0x1D8A7D0u);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D8A7C8u, 0x1D8A7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A7D0u;
label_1d8a7d0:
    // 0x1d8a7d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d8a7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d8a7d4:
    // 0x1d8a7d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a7d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a7d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8a7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A7DCu;
        // 0x1d8a7e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A7E4u;
label_1d8a7e4:
    // 0x1d8a7e4: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8a7e8: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A7E8u;
    SET_GPR_U32(ctx, 31, 0x1D8A7F0u);
    ctx->pc = 0x1D8A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A7E8u;
    // 0x1d8a7ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A7E8u, 0x1D8A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A7F0u;
label_1d8a7f0:
    // 0x1d8a7f0: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d8a7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d8a7f4: 0xc762264  jal         func_1D88990
    ctx->pc = 0x1D8A7F4u;
    SET_GPR_U32(ctx, 31, 0x1D8A7FCu);
    ctx->pc = 0x1D8A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A7F4u;
    // 0x1d8a7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88990u, 0x1D8A7F4u, 0x1D8A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A7FCu;
label_1d8a7fc:
    // 0x1d8a7fc: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D8A7FCu;
    {
        const bool branch_taken_0x1d8a7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A7FCu;
        // 0x1d8a800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a7fc) {
            ctx->pc = 0x1D8A7D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a7d4;
        }
    }
    ctx->pc = 0x1D8A804u;
    // 0x1d8a804: 0x0  nop
    ctx->pc = 0x1d8a804u;
    // NOP
    // 0x1d8a808: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8a808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8a80c: 0x3c0f01d9  lui         $t7, 0x1D9
    ctx->pc = 0x1d8a80cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)473 << 16));
    // 0x1d8a810: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d8a810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d8a814: 0x25ee26f8  addiu       $t6, $t7, 0x26F8
    ctx->pc = 0x1d8a814u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9976));
    // 0x1d8a818: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1d8a818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1d8a81c: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1d8a81cu;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1D926FCu));
    // 0x1d8a820: 0x8ded26f8  lw          $t5, 0x26F8($t7)
    ctx->pc = 0x1d8a820u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1D926F8u));
    // 0x1d8a824: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8a824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a828: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1d8a828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1d8a82c: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1d8a82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1d8a830: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d8a830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d8a834: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A834u;
    SET_GPR_U32(ctx, 31, 0x1D8A83Cu);
    ctx->pc = 0x1D8A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A834u;
    // 0x1d8a838: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A834u, 0x1D8A83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A83Cu;
label_1d8a83c:
    // 0x1d8a83c: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d8a83cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d8a840: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d8a840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a844: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a844u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a848: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8a848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a84c: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8a84cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8a850: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8a850u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a854: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1d8a854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1d8a858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a85c: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d8a85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8a860: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A860u;
    SET_GPR_U32(ctx, 31, 0x1D8A868u);
    ctx->pc = 0x1D8A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A860u;
    // 0x1d8a864: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A860u, 0x1D8A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A868u;
label_1d8a868:
    // 0x1d8a868: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8a868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8a86c: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A86Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A874u);
    ctx->pc = 0x1D8A870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A86Cu;
    // 0x1d8a870: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A86Cu, 0x1D8A874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A874u;
label_1d8a874:
    // 0x1d8a874: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d8a874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a878: 0xc762266  jal         func_1D88998
    ctx->pc = 0x1D8A878u;
    SET_GPR_U32(ctx, 31, 0x1D8A880u);
    ctx->pc = 0x1D8A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A878u;
    // 0x1d8a87c: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88998u, 0x1D8A878u, 0x1D8A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A880u;
label_1d8a880:
    // 0x1d8a880: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1d8a880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a884: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d8a884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d8a888: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A888u;
        // 0x1d8a88c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A890u;
}
