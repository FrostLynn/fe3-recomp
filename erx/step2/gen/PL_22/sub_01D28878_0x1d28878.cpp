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

// Function: sub_01D28878
// Address: 0x1d28878 - 0x1d2899c
void sub_01D28878_0x1d28878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D28878_0x1d28878");
#endif

    switch (ctx->pc) {
        case 0x1d28894u: goto label_1d28894;
        case 0x1d2889cu: goto label_1d2889c;
        case 0x1d288b0u: goto label_1d288b0;
        case 0x1d288b4u: goto label_1d288b4;
        case 0x1d288f0u: goto label_1d288f0;
        case 0x1d28930u: goto label_1d28930;
        case 0x1d28944u: goto label_1d28944;
        case 0x1d28950u: goto label_1d28950;
        case 0x1d2895cu: goto label_1d2895c;
        case 0x1d28970u: goto label_1d28970;
        case 0x1d28980u: goto label_1d28980;
        default: break;
    }

    ctx->pc = 0x1d28878u;

    // 0x1d28878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d28878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2887c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d2887cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d28880: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d28880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d28884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d28888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d2888c: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D2888Cu;
    SET_GPR_U32(ctx, 31, 0x1D28894u);
    ctx->pc = 0x1D28890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2888Cu;
    // 0x1d28890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D2888Cu, 0x1D28894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28894u;
label_1d28894:
    // 0x1d28894: 0xc749b16  jal         func_1D26C58
    ctx->pc = 0x1D28894u;
    SET_GPR_U32(ctx, 31, 0x1D2889Cu);
    ctx->pc = 0x1D28898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28894u;
    // 0x1d28898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C58u, 0x1D28894u, 0x1D2889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2889Cu;
label_1d2889c:
    // 0x1d2889c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d2889cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d288a0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D288A0u;
    {
        const bool branch_taken_0x1d288a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D288A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D288A0u;
        // 0x1d288a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d288a0) {
            ctx->pc = 0x1D288C4u;
            goto label_1d288c4;
        }
    }
    ctx->pc = 0x1D288A8u;
    // 0x1d288a8: 0xc749b18  jal         func_1D26C60
    ctx->pc = 0x1D288A8u;
    SET_GPR_U32(ctx, 31, 0x1D288B0u);
    ctx->pc = 0x1D26C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C60u, 0x1D288A8u, 0x1D288B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D288B0u;
label_1d288b0:
    // 0x1d288b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d288b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d288b4:
    // 0x1d288b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d288b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d288b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d288b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d288bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D288BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D288C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D288BCu;
        // 0x1d288c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D288BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D288C4u;
label_1d288c4:
    // 0x1d288c4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D288C4u;
    {
        const bool branch_taken_0x1d288c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D288C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D288C4u;
        // 0x1d288c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d288c4) {
            ctx->pc = 0x1D288B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d288b4;
        }
    }
    ctx->pc = 0x1D288CCu;
    // 0x1d288cc: 0x0  nop
    ctx->pc = 0x1d288ccu;
    // NOP
    // 0x1d288d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d288d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d288d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d288d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d288d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d288d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d288dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d288dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d288e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d288e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d288e4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d288e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d288e8: 0xc749b1c  jal         func_1D26C70
    ctx->pc = 0x1D288E8u;
    SET_GPR_U32(ctx, 31, 0x1D288F0u);
    ctx->pc = 0x1D288ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D288E8u;
    // 0x1d288ec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C70u, 0x1D288E8u, 0x1D288F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D288F0u;
label_1d288f0:
    // 0x1d288f0: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d288f0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d288f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d288f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d288f8: 0x25cefff9  addiu       $t6, $t6, -0x7
    ctx->pc = 0x1d288f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967289));
    // 0x1d288fc: 0x2dcf0019  sltiu       $t7, $t6, 0x19
    ctx->pc = 0x1d288fcu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1d28900: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D28900u;
    {
        const bool branch_taken_0x1d28900 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28900u;
        // 0x1d28904: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28900) {
            ctx->pc = 0x1D289ACu;
            return;
        }
    }
    ctx->pc = 0x1D28908u;
    // 0x1d28908: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d28908u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d2890c: 0x3c0e01d3  lui         $t6, 0x1D3
    ctx->pc = 0x1d2890cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)467 << 16));
    // 0x1d28910: 0x25cea830  addiu       $t6, $t6, -0x57D0
    ctx->pc = 0x1d28910u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294944816));
    // 0x1d28914: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d28914u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d28918: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d28918u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d2891c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D2891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D28924u: goto label_1d28924;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2891Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D28924u;
label_1d28924:
    // 0x1d28924: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d28928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2892c: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1d2892cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1d28930:
    // 0x1d28930: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d28930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d28934: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d28934u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28938: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d28938u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d2893c: 0xc749b26  jal         func_1D26C98
    ctx->pc = 0x1D2893Cu;
    SET_GPR_U32(ctx, 31, 0x1D28944u);
    ctx->pc = 0x1D28940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2893Cu;
    // 0x1d28940: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C98u, 0x1D2893Cu, 0x1D28944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28944u;
label_1d28944:
    // 0x1d28944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28948: 0xc749b1e  jal         func_1D26C78
    ctx->pc = 0x1D28948u;
    SET_GPR_U32(ctx, 31, 0x1D28950u);
    ctx->pc = 0x1D2894Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28948u;
    // 0x1d2894c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C78u, 0x1D28948u, 0x1D28950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28950u;
label_1d28950:
    // 0x1d28950: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d28950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d28954: 0xc749b1a  jal         func_1D26C68
    ctx->pc = 0x1D28954u;
    SET_GPR_U32(ctx, 31, 0x1D2895Cu);
    ctx->pc = 0x1D28958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28954u;
    // 0x1d28958: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C68u, 0x1D28954u, 0x1D2895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2895Cu;
label_1d2895c:
    // 0x1d2895c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d2895cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d28960: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d28960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d28964: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d28964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d28968: 0xc749b20  jal         func_1D26C80
    ctx->pc = 0x1D28968u;
    SET_GPR_U32(ctx, 31, 0x1D28970u);
    ctx->pc = 0x1D2896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28968u;
    // 0x1d2896c: 0x240500e9  addiu       $a1, $zero, 0xE9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 233));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C80u, 0x1D28968u, 0x1D28970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28970u;
label_1d28970:
    // 0x1d28970: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d28970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d28974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28978: 0xc749b14  jal         func_1D26C50
    ctx->pc = 0x1D28978u;
    SET_GPR_U32(ctx, 31, 0x1D28980u);
    ctx->pc = 0x1D2897Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28978u;
    // 0x1d2897c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26C50u, 0x1D28978u, 0x1D28980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D28980u;
label_1d28980:
    // 0x1d28980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d28980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d28984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d28988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d28988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2898c: 0x24050087  addiu       $a1, $zero, 0x87
    ctx->pc = 0x1d2898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x1d28990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d28990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d28994: 0x8749b22  j           func_1D26C88
    ctx->pc = 0x1D28994u;
    ctx->pc = 0x1D28998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28994u;
    // 0x1d28998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26C88u;
    sub_01D26C88_0x1d26c88(rdram, ctx, runtime); return;
    ctx->pc = 0x1D2899Cu;
}
