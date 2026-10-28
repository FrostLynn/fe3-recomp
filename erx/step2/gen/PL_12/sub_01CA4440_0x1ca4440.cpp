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

// Function: sub_01CA4440
// Address: 0x1ca4440 - 0x1ca4540
void sub_01CA4440_0x1ca4440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CA4440_0x1ca4440");
#endif

    switch (ctx->pc) {
        case 0x1ca445cu: goto label_1ca445c;
        case 0x1ca4464u: goto label_1ca4464;
        case 0x1ca4478u: goto label_1ca4478;
        case 0x1ca447cu: goto label_1ca447c;
        case 0x1ca44b8u: goto label_1ca44b8;
        case 0x1ca44e0u: goto label_1ca44e0;
        case 0x1ca44ecu: goto label_1ca44ec;
        case 0x1ca44f8u: goto label_1ca44f8;
        case 0x1ca450cu: goto label_1ca450c;
        case 0x1ca4524u: goto label_1ca4524;
        default: break;
    }

    ctx->pc = 0x1ca4440u;

    // 0x1ca4440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca4440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ca4444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca4444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca4448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca4448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca444c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca444cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4450: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1ca4450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1ca4454: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA4454u;
    SET_GPR_U32(ctx, 31, 0x1CA445Cu);
    ctx->pc = 0x1CA4458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4454u;
    // 0x1ca4458: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA4454u, 0x1CA445Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA445Cu;
label_1ca445c:
    // 0x1ca445c: 0xc7289d2  jal         func_1CA2748
    ctx->pc = 0x1CA445Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4464u);
    ctx->pc = 0x1CA4460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA445Cu;
    // 0x1ca4460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2748u, 0x1CA445Cu, 0x1CA4464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4464u;
label_1ca4464:
    // 0x1ca4464: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca4464u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4468: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA4468u;
    {
        const bool branch_taken_0x1ca4468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CA446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4468u;
        // 0x1ca446c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4468) {
            ctx->pc = 0x1CA448Cu;
            goto label_1ca448c;
        }
    }
    ctx->pc = 0x1CA4470u;
    // 0x1ca4470: 0xc7289d4  jal         func_1CA2750
    ctx->pc = 0x1CA4470u;
    SET_GPR_U32(ctx, 31, 0x1CA4478u);
    ctx->pc = 0x1CA2750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2750u, 0x1CA4470u, 0x1CA4478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4478u;
label_1ca4478:
    // 0x1ca4478: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1ca4478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1ca447c:
    // 0x1ca447c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca447cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1ca4480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca4484: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA4484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA4484u;
        // 0x1ca4488: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA4484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA448Cu;
label_1ca448c:
    // 0x1ca448c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CA448Cu;
    {
        const bool branch_taken_0x1ca448c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA448Cu;
        // 0x1ca4490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca448c) {
            ctx->pc = 0x1CA447Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca447c;
        }
    }
    ctx->pc = 0x1CA4494u;
    // 0x1ca4494: 0x0  nop
    ctx->pc = 0x1ca4494u;
    // NOP
    // 0x1ca4498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca4498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca449c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca44a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ca44a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ca44a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca44a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca44a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca44a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca44ac: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1ca44acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1ca44b0: 0xc7289d8  jal         func_1CA2760
    ctx->pc = 0x1CA44B0u;
    SET_GPR_U32(ctx, 31, 0x1CA44B8u);
    ctx->pc = 0x1CA44B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA44B0u;
    // 0x1ca44b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2760u, 0x1CA44B0u, 0x1CA44B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA44B8u;
label_1ca44b8:
    // 0x1ca44b8: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1ca44b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1ca44bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ca44bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca44c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca44c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca44c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca44c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca44c8: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1ca44c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca44cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1ca44ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca44d0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1ca44d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ca44d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca44d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca44d8: 0xc7289e2  jal         func_1CA2788
    ctx->pc = 0x1CA44D8u;
    SET_GPR_U32(ctx, 31, 0x1CA44E0u);
    ctx->pc = 0x1CA44DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA44D8u;
    // 0x1ca44dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2788u, 0x1CA44D8u, 0x1CA44E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA44E0u;
label_1ca44e0:
    // 0x1ca44e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca44e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca44e4: 0xc7289da  jal         func_1CA2768
    ctx->pc = 0x1CA44E4u;
    SET_GPR_U32(ctx, 31, 0x1CA44ECu);
    ctx->pc = 0x1CA44E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA44E4u;
    // 0x1ca44e8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2768u, 0x1CA44E4u, 0x1CA44ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA44ECu;
label_1ca44ec:
    // 0x1ca44ec: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1ca44ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca44f0: 0xc7289d6  jal         func_1CA2758
    ctx->pc = 0x1CA44F0u;
    SET_GPR_U32(ctx, 31, 0x1CA44F8u);
    ctx->pc = 0x1CA44F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA44F0u;
    // 0x1ca44f4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2758u, 0x1CA44F0u, 0x1CA44F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA44F8u;
label_1ca44f8:
    // 0x1ca44f8: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1ca44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1ca44fc: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1ca44fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1ca4500: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ca4500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ca4504: 0xc7289dc  jal         func_1CA2770
    ctx->pc = 0x1CA4504u;
    SET_GPR_U32(ctx, 31, 0x1CA450Cu);
    ctx->pc = 0x1CA4508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4504u;
    // 0x1ca4508: 0x240500c7  addiu       $a1, $zero, 0xC7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 199));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2770u, 0x1CA4504u, 0x1CA450Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA450Cu;
label_1ca450c:
    // 0x1ca450c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1ca450cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca4510: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ca4510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ca4514: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1ca4514u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1ca4518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca451c: 0xc7289d0  jal         func_1CA2740
    ctx->pc = 0x1CA451Cu;
    SET_GPR_U32(ctx, 31, 0x1CA4524u);
    ctx->pc = 0x1CA4520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA451Cu;
    // 0x1ca4520: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA2740u, 0x1CA451Cu, 0x1CA4524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA4524u;
label_1ca4524:
    // 0x1ca4524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ca4524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca4528: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca4528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca452c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca452cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca4530: 0x24050065  addiu       $a1, $zero, 0x65
    ctx->pc = 0x1ca4530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x1ca4534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca4534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca4538: 0x87289de  j           func_1CA2778
    ctx->pc = 0x1CA4538u;
    ctx->pc = 0x1CA453Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA4538u;
    // 0x1ca453c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA2778u;
    sub_01CA2778_0x1ca2778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CA4540u;
}
