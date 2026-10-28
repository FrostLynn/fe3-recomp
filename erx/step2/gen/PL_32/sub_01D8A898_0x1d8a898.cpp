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

// Function: sub_01D8A898
// Address: 0x1d8a898 - 0x1d8a9d0
void sub_01D8A898_0x1d8a898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D8A898_0x1d8a898");
#endif

    switch (ctx->pc) {
        case 0x1d8a8b8u: goto label_1d8a8b8;
        case 0x1d8a8ccu: goto label_1d8a8cc;
        case 0x1d8a8d0u: goto label_1d8a8d0;
        case 0x1d8a8ecu: goto label_1d8a8ec;
        case 0x1d8a8fcu: goto label_1d8a8fc;
        case 0x1d8a948u: goto label_1d8a948;
        case 0x1d8a984u: goto label_1d8a984;
        case 0x1d8a990u: goto label_1d8a990;
        case 0x1d8a9a0u: goto label_1d8a9a0;
        case 0x1d8a9b8u: goto label_1d8a9b8;
        default: break;
    }

    ctx->pc = 0x1d8a898u;

    // 0x1d8a898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8a898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8a89c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a8a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d8a8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d8a8a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8a8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8a8a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d8a8a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a8ac: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d8a8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d8a8b0: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A8B0u;
    SET_GPR_U32(ctx, 31, 0x1D8A8B8u);
    ctx->pc = 0x1D8A8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A8B0u;
    // 0x1d8a8b4: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A8B0u, 0x1D8A8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A8B8u;
label_1d8a8b8:
    // 0x1d8a8b8: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1d8a8b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d8a8bc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D8A8BCu;
    {
        const bool branch_taken_0x1d8a8bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A8BCu;
        // 0x1d8a8c0: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a8bc) {
            ctx->pc = 0x1D8A908u;
            goto label_1d8a908;
        }
    }
    ctx->pc = 0x1D8A8C4u;
    // 0x1d8a8c4: 0x120f0007  beq         $s0, $t7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8A8C4u;
    {
        const bool branch_taken_0x1d8a8c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x1d8a8c4) {
            ctx->pc = 0x1D8A8E4u;
            goto label_1d8a8e4;
        }
    }
    ctx->pc = 0x1D8A8CCu;
label_1d8a8cc:
    // 0x1d8a8cc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d8a8ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8a8d0:
    // 0x1d8a8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a8d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d8a8d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a8d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8a8d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d8a8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A8DCu;
        // 0x1d8a8e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A8E4u;
label_1d8a8e4:
    // 0x1d8a8e4: 0xc762252  jal         func_1D88948
    ctx->pc = 0x1D8A8E4u;
    SET_GPR_U32(ctx, 31, 0x1D8A8ECu);
    ctx->pc = 0x1D8A8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A8E4u;
    // 0x1d8a8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88948u, 0x1D8A8E4u, 0x1D8A8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A8ECu;
label_1d8a8ec:
    // 0x1d8a8ec: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D8A8ECu;
    {
        const bool branch_taken_0x1d8a8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D8A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A8ECu;
        // 0x1d8a8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a8ec) {
            ctx->pc = 0x1D8A8CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a8cc;
        }
    }
    ctx->pc = 0x1D8A8F4u;
    // 0x1d8a8f4: 0xc762254  jal         func_1D88950
    ctx->pc = 0x1D8A8F4u;
    SET_GPR_U32(ctx, 31, 0x1D8A8FCu);
    ctx->pc = 0x1D88950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88950u, 0x1D8A8F4u, 0x1D8A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A8FCu;
label_1d8a8fc:
    // 0x1d8a8fc: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x1D8A8FCu;
    {
        const bool branch_taken_0x1d8a8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A8FCu;
        // 0x1d8a900: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a8fc) {
            ctx->pc = 0x1D8A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a8d0;
        }
    }
    ctx->pc = 0x1D8A904u;
    // 0x1d8a904: 0x0  nop
    ctx->pc = 0x1d8a904u;
    // NOP
label_1d8a908:
    // 0x1d8a908: 0x8c4f0580  lw          $t7, 0x580($v0)
    ctx->pc = 0x1d8a908u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1408)));
    // 0x1d8a90c: 0x15e0fff0  bnez        $t7, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1D8A90Cu;
    {
        const bool branch_taken_0x1d8a90c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A90Cu;
        // 0x1d8a910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a90c) {
            ctx->pc = 0x1D8A8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a8d0;
        }
    }
    ctx->pc = 0x1D8A914u;
    // 0x1d8a914: 0x8e2f002c  lw          $t7, 0x2C($s1)
    ctx->pc = 0x1d8a914u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1d8a918: 0x3c0e01d9  lui         $t6, 0x1D9
    ctx->pc = 0x1d8a918u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
    // 0x1d8a91c: 0x25cec890  addiu       $t6, $t6, -0x3770
    ctx->pc = 0x1d8a91cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294953104));
    // 0x1d8a920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d8a920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a924: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x1d8a924u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
    // 0x1d8a928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d8a928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a92c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d8a92cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d8a930: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8a930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a934: 0x8de60000  lw          $a2, 0x0($t7)
    ctx->pc = 0x1d8a934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d8a938: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a938u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a93c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8a93cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a940: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A940u;
    SET_GPR_U32(ctx, 31, 0x1D8A948u);
    ctx->pc = 0x1D8A944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A940u;
    // 0x1d8a944: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A940u, 0x1D8A948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A948u;
label_1d8a948:
    // 0x1d8a948: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8a948u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a94c: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x1D8A94Cu;
    {
        const bool branch_taken_0x1d8a94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8A950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A94Cu;
        // 0x1d8a950: 0xae2f0024  sw          $t7, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8a94c) {
            ctx->pc = 0x1D8A8CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d8a8cc;
        }
    }
    ctx->pc = 0x1D8A954u;
    // 0x1d8a954: 0x0  nop
    ctx->pc = 0x1d8a954u;
    // NOP
    // 0x1d8a958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d8a958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d8a95c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d8a95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d8a960: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d8a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d8a964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d8a964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a968: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d8a968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d8a96c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d8a96cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8a970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a974: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d8a974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a978: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d8a978u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a97c: 0xc762262  jal         func_1D88988
    ctx->pc = 0x1D8A97Cu;
    SET_GPR_U32(ctx, 31, 0x1D8A984u);
    ctx->pc = 0x1D8A980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A97Cu;
    // 0x1d8a980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88988u, 0x1D8A97Cu, 0x1D8A984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A984u;
label_1d8a984:
    // 0x1d8a984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8a984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8a988: 0xc76225a  jal         func_1D88968
    ctx->pc = 0x1D8A988u;
    SET_GPR_U32(ctx, 31, 0x1D8A990u);
    ctx->pc = 0x1D8A98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A988u;
    // 0x1d8a98c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88968u, 0x1D8A988u, 0x1D8A990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A990u;
label_1d8a990:
    // 0x1d8a990: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8a990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8a994: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d8a994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d8a998: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A998u;
    SET_GPR_U32(ctx, 31, 0x1D8A9A0u);
    ctx->pc = 0x1D8A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A998u;
    // 0x1d8a99c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A998u, 0x1D8A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A9A0u;
label_1d8a9a0:
    // 0x1d8a9a0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d8a9a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8a9a4: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8a9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8a9a8: 0xac4f074c  sw          $t7, 0x74C($v0)
    ctx->pc = 0x1d8a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1868), GPR_U32(ctx, 15));
    // 0x1d8a9ac: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d8a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d8a9b0: 0xc762256  jal         func_1D88958
    ctx->pc = 0x1D8A9B0u;
    SET_GPR_U32(ctx, 31, 0x1D8A9B8u);
    ctx->pc = 0x1D8A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8A9B0u;
    // 0x1d8a9b4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D88958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D88958u, 0x1D8A9B0u, 0x1D8A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8A9B8u;
label_1d8a9b8:
    // 0x1d8a9b8: 0xac400748  sw          $zero, 0x748($v0)
    ctx->pc = 0x1d8a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1864), GPR_U32(ctx, 0));
    // 0x1d8a9bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8a9bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8a9c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d8a9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d8a9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8A9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8A9C4u;
        // 0x1d8a9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8A9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8A9CCu;
    // 0x1d8a9cc: 0x0  nop
    ctx->pc = 0x1d8a9ccu;
    // NOP
    ctx->pc = 0x1d8a9d0u;
}
