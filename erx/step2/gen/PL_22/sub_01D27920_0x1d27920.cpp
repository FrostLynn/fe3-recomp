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

// Function: sub_01D27920
// Address: 0x1d27920 - 0x1d27a00
void sub_01D27920_0x1d27920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D27920_0x1d27920");
#endif

    switch (ctx->pc) {
        case 0x1d27934u: goto label_1d27934;
        case 0x1d27948u: goto label_1d27948;
        case 0x1d2794cu: goto label_1d2794c;
        case 0x1d27968u: goto label_1d27968;
        case 0x1d27974u: goto label_1d27974;
        case 0x1d279a4u: goto label_1d279a4;
        case 0x1d279d0u: goto label_1d279d0;
        case 0x1d279dcu: goto label_1d279dc;
        default: break;
    }

    ctx->pc = 0x1d27920u;

    // 0x1d27920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d27920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d27924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27928: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d27928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d2792c: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D2792Cu;
    SET_GPR_U32(ctx, 31, 0x1D27934u);
    ctx->pc = 0x1D27930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2792Cu;
    // 0x1d27930: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D2792Cu, 0x1D27934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27934u;
label_1d27934:
    // 0x1d27934: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d27934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d27938: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D27938u;
    {
        const bool branch_taken_0x1d27938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D2793Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27938u;
        // 0x1d2793c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27938) {
            ctx->pc = 0x1D2795Cu;
            goto label_1d2795c;
        }
    }
    ctx->pc = 0x1D27940u;
    // 0x1d27940: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D27940u;
    SET_GPR_U32(ctx, 31, 0x1D27948u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D27940u, 0x1D27948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27948u;
label_1d27948:
    // 0x1d27948: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d27948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d2794c:
    // 0x1d2794c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2794cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d27950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d27950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d27954: 0x3e00008  jr          $ra
    ctx->pc = 0x1D27954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D27958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27954u;
        // 0x1d27958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D27954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2795Cu;
label_1d2795c:
    // 0x1d2795c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d2795cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d27960: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D27960u;
    SET_GPR_U32(ctx, 31, 0x1D27968u);
    ctx->pc = 0x1D27964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D27960u;
    // 0x1d27964: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D27960u, 0x1D27968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27968u;
label_1d27968:
    // 0x1d27968: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d27968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d2796c: 0xc749b28  jal         func_1D26CA0
    ctx->pc = 0x1D2796Cu;
    SET_GPR_U32(ctx, 31, 0x1D27974u);
    ctx->pc = 0x1D27970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2796Cu;
    // 0x1d27970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26CA0u, 0x1D2796Cu, 0x1D27974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D27974u;
label_1d27974:
    // 0x1d27974: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D27974u;
    {
        const bool branch_taken_0x1d27974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27974u;
        // 0x1d27978: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27974) {
            ctx->pc = 0x1D2794Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2794c;
        }
    }
    ctx->pc = 0x1D2797Cu;
    // 0x1d2797c: 0x0  nop
    ctx->pc = 0x1d2797cu;
    // NOP
    // 0x1d27980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d27980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d27984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d27984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d27988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d27988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d2798c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d27990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d27990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27994: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d27994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d27998: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d27998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d2799c: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D2799Cu;
    SET_GPR_U32(ctx, 31, 0x1D279A4u);
    ctx->pc = 0x1D279A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2799Cu;
    // 0x1d279a0: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D2799Cu, 0x1D279A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D279A4u;
label_1d279a4:
    // 0x1d279a4: 0x8c4f003c  lw          $t7, 0x3C($v0)
    ctx->pc = 0x1d279a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d279a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d279a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d279ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d279acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d279b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d279b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d279b4: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d279b4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d279b8: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d279b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d279bc: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1d279bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1d279c0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d279c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d279c4: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d279c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d279c8: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D279C8u;
    SET_GPR_U32(ctx, 31, 0x1D279D0u);
    ctx->pc = 0x1D279CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D279C8u;
    // 0x1d279cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D279C8u, 0x1D279D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D279D0u;
label_1d279d0:
    // 0x1d279d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d279d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d279d4: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D279D4u;
    SET_GPR_U32(ctx, 31, 0x1D279DCu);
    ctx->pc = 0x1D279D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D279D4u;
    // 0x1d279d8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D279D4u, 0x1D279DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D279DCu;
label_1d279dc:
    // 0x1d279dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d279dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d279e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d279e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d279e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d279e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d279e8: 0x24440550  addiu       $a0, $v0, 0x550
    ctx->pc = 0x1d279e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1360));
    // 0x1d279ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d279ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d279f0: 0x8749b2a  j           func_1D26CA8
    ctx->pc = 0x1D279F0u;
    ctx->pc = 0x1D279F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D279F0u;
    // 0x1d279f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26CA8u;
    sub_01D26CA8_0x1d26ca8(rdram, ctx, runtime); return;
    ctx->pc = 0x1D279F8u;
    // 0x1d279f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D279F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D279F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D27A00u;
}
