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

// Function: sub_01D47888
// Address: 0x1d47888 - 0x1d479b4
void sub_01D47888_0x1d47888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D47888_0x1d47888");
#endif

    switch (ctx->pc) {
        case 0x1d478a4u: goto label_1d478a4;
        case 0x1d478acu: goto label_1d478ac;
        case 0x1d478c0u: goto label_1d478c0;
        case 0x1d478c8u: goto label_1d478c8;
        case 0x1d478ccu: goto label_1d478cc;
        case 0x1d47908u: goto label_1d47908;
        case 0x1d47948u: goto label_1d47948;
        case 0x1d4795cu: goto label_1d4795c;
        case 0x1d47968u: goto label_1d47968;
        case 0x1d47974u: goto label_1d47974;
        case 0x1d47988u: goto label_1d47988;
        case 0x1d47998u: goto label_1d47998;
        default: break;
    }

    ctx->pc = 0x1d47888u;

    // 0x1d47888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d47888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4788c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d4788cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d47890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d47890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d47894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d47898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d4789c: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D4789Cu;
    SET_GPR_U32(ctx, 31, 0x1D478A4u);
    ctx->pc = 0x1D478A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4789Cu;
    // 0x1d478a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D4789Cu, 0x1D478A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D478A4u;
label_1d478a4:
    // 0x1d478a4: 0xc751752  jal         func_1D45D48
    ctx->pc = 0x1D478A4u;
    SET_GPR_U32(ctx, 31, 0x1D478ACu);
    ctx->pc = 0x1D478A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D478A4u;
    // 0x1d478a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D48u, 0x1D478A4u, 0x1D478ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D478ACu;
label_1d478ac:
    // 0x1d478ac: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d478acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d478b0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D478B0u;
    {
        const bool branch_taken_0x1d478b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D478B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D478B0u;
        // 0x1d478b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d478b0) {
            ctx->pc = 0x1D478DCu;
            goto label_1d478dc;
        }
    }
    ctx->pc = 0x1D478B8u;
    // 0x1d478b8: 0xc75176c  jal         func_1D45DB0
    ctx->pc = 0x1D478B8u;
    SET_GPR_U32(ctx, 31, 0x1D478C0u);
    ctx->pc = 0x1D45DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45DB0u, 0x1D478B8u, 0x1D478C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D478C0u;
label_1d478c0:
    // 0x1d478c0: 0xc751754  jal         func_1D45D50
    ctx->pc = 0x1D478C0u;
    SET_GPR_U32(ctx, 31, 0x1D478C8u);
    ctx->pc = 0x1D478C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D478C0u;
    // 0x1d478c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D50u, 0x1D478C0u, 0x1D478C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D478C8u;
label_1d478c8:
    // 0x1d478c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d478c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d478cc:
    // 0x1d478cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d478ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d478d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d478d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d478d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D478D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D478D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D478D4u;
        // 0x1d478d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D478D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D478DCu;
label_1d478dc:
    // 0x1d478dc: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D478DCu;
    {
        const bool branch_taken_0x1d478dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D478E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D478DCu;
        // 0x1d478e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d478dc) {
            ctx->pc = 0x1D478CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d478cc;
        }
    }
    ctx->pc = 0x1D478E4u;
    // 0x1d478e4: 0x0  nop
    ctx->pc = 0x1d478e4u;
    // NOP
    // 0x1d478e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d478e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d478ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d478ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d478f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d478f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d478f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d478f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d478f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d478f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d478fc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d478fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d47900: 0xc751758  jal         func_1D45D60
    ctx->pc = 0x1D47900u;
    SET_GPR_U32(ctx, 31, 0x1D47908u);
    ctx->pc = 0x1D47904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47900u;
    // 0x1d47904: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D60u, 0x1D47900u, 0x1D47908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47908u;
label_1d47908:
    // 0x1d47908: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d47908u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d4790c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d4790cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47910: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1d47910u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1d47914: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1d47914u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1d47918: 0x11e00032  beqz        $t7, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D47918u;
    {
        const bool branch_taken_0x1d47918 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47918u;
        // 0x1d4791c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47918) {
            ctx->pc = 0x1D479E4u;
            return;
        }
    }
    ctx->pc = 0x1D47920u;
    // 0x1d47920: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d47920u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d47924: 0x3c0e01d5  lui         $t6, 0x1D5
    ctx->pc = 0x1d47924u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)469 << 16));
    // 0x1d47928: 0x25ce9090  addiu       $t6, $t6, -0x6F70
    ctx->pc = 0x1d47928u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294938768));
    // 0x1d4792c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d4792cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d47930: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d47930u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d47934: 0x1a00008  jr          $t5
    ctx->pc = 0x1D47934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D4793Cu: goto label_1d4793c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47934u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D4793Cu;
label_1d4793c:
    // 0x1d4793c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d47940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47944: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x1d47944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1d47948:
    // 0x1d47948: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d47948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4794c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d4794cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47950: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d47950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47954: 0xc751762  jal         func_1D45D88
    ctx->pc = 0x1D47954u;
    SET_GPR_U32(ctx, 31, 0x1D4795Cu);
    ctx->pc = 0x1D47958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47954u;
    // 0x1d47958: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D88u, 0x1D47954u, 0x1D4795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4795Cu;
label_1d4795c:
    // 0x1d4795c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4795cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47960: 0xc75175a  jal         func_1D45D68
    ctx->pc = 0x1D47960u;
    SET_GPR_U32(ctx, 31, 0x1D47968u);
    ctx->pc = 0x1D47964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47960u;
    // 0x1d47964: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D68u, 0x1D47960u, 0x1D47968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47968u;
label_1d47968:
    // 0x1d47968: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d47968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d4796c: 0xc751756  jal         func_1D45D58
    ctx->pc = 0x1D4796Cu;
    SET_GPR_U32(ctx, 31, 0x1D47974u);
    ctx->pc = 0x1D47970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4796Cu;
    // 0x1d47970: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D58u, 0x1D4796Cu, 0x1D47974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47974u;
label_1d47974:
    // 0x1d47974: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d47974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d47978: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d47978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d4797c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d4797cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d47980: 0xc75175c  jal         func_1D45D70
    ctx->pc = 0x1D47980u;
    SET_GPR_U32(ctx, 31, 0x1D47988u);
    ctx->pc = 0x1D47984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47980u;
    // 0x1d47984: 0x240500f1  addiu       $a1, $zero, 0xF1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 241));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D70u, 0x1D47980u, 0x1D47988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47988u;
label_1d47988:
    // 0x1d47988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d47988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d4798c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d4798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47990: 0xc751750  jal         func_1D45D40
    ctx->pc = 0x1D47990u;
    SET_GPR_U32(ctx, 31, 0x1D47998u);
    ctx->pc = 0x1D47994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47990u;
    // 0x1d47994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45D40u, 0x1D47990u, 0x1D47998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47998u;
label_1d47998:
    // 0x1d47998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d47998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4799c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d4799cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d479a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d479a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d479a4: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x1d479a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
    // 0x1d479a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d479a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d479ac: 0x875175e  j           func_1D45D78
    ctx->pc = 0x1D479ACu;
    ctx->pc = 0x1D479B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D479ACu;
    // 0x1d479b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45D78u;
    sub_01D45D78_0x1d45d78(rdram, ctx, runtime); return;
    ctx->pc = 0x1D479B4u;
}
