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

// Function: sub_01CB8820
// Address: 0x1cb8820 - 0x1cb8908
void sub_01CB8820_0x1cb8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8820_0x1cb8820");
#endif

    switch (ctx->pc) {
        case 0x1cb8834u: goto label_1cb8834;
        case 0x1cb8848u: goto label_1cb8848;
        case 0x1cb884cu: goto label_1cb884c;
        case 0x1cb8868u: goto label_1cb8868;
        case 0x1cb8874u: goto label_1cb8874;
        case 0x1cb88b4u: goto label_1cb88b4;
        case 0x1cb88e0u: goto label_1cb88e0;
        case 0x1cb88ecu: goto label_1cb88ec;
        case 0x1cb88f8u: goto label_1cb88f8;
        default: break;
    }

    ctx->pc = 0x1cb8820u;

    // 0x1cb8820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb8828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb882c: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB882Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8834u);
    ctx->pc = 0x1CB8830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB882Cu;
    // 0x1cb8830: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB882Cu, 0x1CB8834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8834u;
label_1cb8834:
    // 0x1cb8834: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb8834u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8838: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CB8838u;
    {
        const bool branch_taken_0x1cb8838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8838u;
        // 0x1cb883c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8838) {
            ctx->pc = 0x1CB885Cu;
            goto label_1cb885c;
        }
    }
    ctx->pc = 0x1CB8840u;
    // 0x1cb8840: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB8840u;
    SET_GPR_U32(ctx, 31, 0x1CB8848u);
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB8840u, 0x1CB8848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8848u;
label_1cb8848:
    // 0x1cb8848: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb8848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb884c:
    // 0x1cb884c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb884cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8850: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb8850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8854: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8854u;
        // 0x1cb8858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB885Cu;
label_1cb885c:
    // 0x1cb885c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb885cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb8860: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8860u;
    SET_GPR_U32(ctx, 31, 0x1CB8868u);
    ctx->pc = 0x1CB8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8860u;
    // 0x1cb8864: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8860u, 0x1CB8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8868u;
label_1cb8868:
    // 0x1cb8868: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1cb8868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1cb886c: 0xc72d9e4  jal         func_1CB6790
    ctx->pc = 0x1CB886Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8874u);
    ctx->pc = 0x1CB8870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB886Cu;
    // 0x1cb8870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6790u, 0x1CB886Cu, 0x1CB8874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8874u;
label_1cb8874:
    // 0x1cb8874: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1CB8874u;
    {
        const bool branch_taken_0x1cb8874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8874u;
        // 0x1cb8878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8874) {
            ctx->pc = 0x1CB884Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb884c;
        }
    }
    ctx->pc = 0x1CB887Cu;
    // 0x1cb887c: 0x0  nop
    ctx->pc = 0x1cb887cu;
    // NOP
    // 0x1cb8880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb8880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb8884: 0x3c0f01cc  lui         $t7, 0x1CC
    ctx->pc = 0x1cb8884u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8888: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cb8888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cb888c: 0x25ee2368  addiu       $t6, $t7, 0x2368
    ctx->pc = 0x1cb888cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 9064));
    // 0x1cb8890: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cb8890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cb8894: 0x8dcc0004  lw          $t4, 0x4($t6)
    ctx->pc = 0x1cb8894u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x1CC236Cu));
    // 0x1cb8898: 0x8ded2368  lw          $t5, 0x2368($t7)
    ctx->pc = 0x1cb8898u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x1CC2368u));
    // 0x1cb889c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb889cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88a0: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1cb88a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1cb88a4: 0xafad0000  sw          $t5, 0x0($sp)
    ctx->pc = 0x1cb88a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 13));
    // 0x1cb88a8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb88a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb88ac: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB88ACu;
    SET_GPR_U32(ctx, 31, 0x1CB88B4u);
    ctx->pc = 0x1CB88B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88ACu;
    // 0x1cb88b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB88ACu, 0x1CB88B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB88B4u;
label_1cb88b4:
    // 0x1cb88b4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1cb88b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1cb88b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb88b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb88bc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb88bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88c0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1cb88c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb88c4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1cb88c4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1cb88c8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cb88c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88cc: 0x1fd7821  addu        $t7, $t7, $sp
    ctx->pc = 0x1cb88ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 29)));
    // 0x1cb88d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb88d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88d4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1cb88d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb88d8: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB88D8u;
    SET_GPR_U32(ctx, 31, 0x1CB88E0u);
    ctx->pc = 0x1CB88DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88D8u;
    // 0x1cb88dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB88D8u, 0x1CB88E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB88E0u;
label_1cb88e0:
    // 0x1cb88e0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb88e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb88e4: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB88E4u;
    SET_GPR_U32(ctx, 31, 0x1CB88ECu);
    ctx->pc = 0x1CB88E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88E4u;
    // 0x1cb88e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB88E4u, 0x1CB88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB88ECu;
label_1cb88ec:
    // 0x1cb88ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cb88ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88f0: 0xc72d9e6  jal         func_1CB6798
    ctx->pc = 0x1CB88F0u;
    SET_GPR_U32(ctx, 31, 0x1CB88F8u);
    ctx->pc = 0x1CB88F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB88F0u;
    // 0x1cb88f4: 0x24440550  addiu       $a0, $v0, 0x550 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6798u, 0x1CB88F0u, 0x1CB88F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB88F8u;
label_1cb88f8:
    // 0x1cb88f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cb88f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb88fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cb88fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb8900: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8900u;
        // 0x1cb8904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8908u;
}
