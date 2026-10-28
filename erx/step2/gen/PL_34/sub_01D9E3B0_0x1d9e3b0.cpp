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

// Function: sub_01D9E3B0
// Address: 0x1d9e3b0 - 0x1d9e4dc
void sub_01D9E3B0_0x1d9e3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D9E3B0_0x1d9e3b0");
#endif

    switch (ctx->pc) {
        case 0x1d9e3ccu: goto label_1d9e3cc;
        case 0x1d9e3d4u: goto label_1d9e3d4;
        case 0x1d9e3e8u: goto label_1d9e3e8;
        case 0x1d9e3f0u: goto label_1d9e3f0;
        case 0x1d9e3f4u: goto label_1d9e3f4;
        case 0x1d9e430u: goto label_1d9e430;
        case 0x1d9e470u: goto label_1d9e470;
        case 0x1d9e484u: goto label_1d9e484;
        case 0x1d9e490u: goto label_1d9e490;
        case 0x1d9e49cu: goto label_1d9e49c;
        case 0x1d9e4b0u: goto label_1d9e4b0;
        case 0x1d9e4c0u: goto label_1d9e4c0;
        default: break;
    }

    ctx->pc = 0x1d9e3b0u;

    // 0x1d9e3b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9e3b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9e3b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9e3b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9e3b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e3c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9e3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9e3c4: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9E3C4u;
    SET_GPR_U32(ctx, 31, 0x1D9E3CCu);
    ctx->pc = 0x1D9E3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E3C4u;
    // 0x1d9e3c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9E3C4u, 0x1D9E3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E3CCu;
label_1d9e3cc:
    // 0x1d9e3cc: 0xc767252  jal         func_1D9C948
    ctx->pc = 0x1D9E3CCu;
    SET_GPR_U32(ctx, 31, 0x1D9E3D4u);
    ctx->pc = 0x1D9E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E3CCu;
    // 0x1d9e3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C948u, 0x1D9E3CCu, 0x1D9E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E3D4u;
label_1d9e3d4:
    // 0x1d9e3d4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9e3d4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e3d8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D9E3D8u;
    {
        const bool branch_taken_0x1d9e3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D9E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E3D8u;
        // 0x1d9e3dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e3d8) {
            ctx->pc = 0x1D9E404u;
            goto label_1d9e404;
        }
    }
    ctx->pc = 0x1D9E3E0u;
    // 0x1d9e3e0: 0xc76726c  jal         func_1D9C9B0
    ctx->pc = 0x1D9E3E0u;
    SET_GPR_U32(ctx, 31, 0x1D9E3E8u);
    ctx->pc = 0x1D9C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C9B0u, 0x1D9E3E0u, 0x1D9E3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E3E8u;
label_1d9e3e8:
    // 0x1d9e3e8: 0xc767254  jal         func_1D9C950
    ctx->pc = 0x1D9E3E8u;
    SET_GPR_U32(ctx, 31, 0x1D9E3F0u);
    ctx->pc = 0x1D9E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E3E8u;
    // 0x1d9e3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C950u, 0x1D9E3E8u, 0x1D9E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E3F0u;
label_1d9e3f0:
    // 0x1d9e3f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d9e3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9e3f4:
    // 0x1d9e3f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e3f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e3f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d9e3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E3FCu;
        // 0x1d9e400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E404u;
label_1d9e404:
    // 0x1d9e404: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9E404u;
    {
        const bool branch_taken_0x1d9e404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E404u;
        // 0x1d9e408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e404) {
            ctx->pc = 0x1D9E3F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9e3f4;
        }
    }
    ctx->pc = 0x1D9E40Cu;
    // 0x1d9e40c: 0x0  nop
    ctx->pc = 0x1d9e40cu;
    // NOP
    // 0x1d9e410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9e414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9e418: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9e41c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9e420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d9e420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e424: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d9e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d9e428: 0xc767258  jal         func_1D9C960
    ctx->pc = 0x1D9E428u;
    SET_GPR_U32(ctx, 31, 0x1D9E430u);
    ctx->pc = 0x1D9E42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E428u;
    // 0x1d9e42c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C960u, 0x1D9E428u, 0x1D9E430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E430u;
label_1d9e430:
    // 0x1d9e430: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d9e430u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d9e434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9e434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e438: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1d9e438u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1d9e43c: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1d9e43cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1d9e440: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x1D9E440u;
    {
        const bool branch_taken_0x1d9e440 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E440u;
        // 0x1d9e444: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e440) {
            ctx->pc = 0x1D9E53Cu;
            return;
        }
    }
    ctx->pc = 0x1D9E448u;
    // 0x1d9e448: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d9e448u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d9e44c: 0x3c0e01da  lui         $t6, 0x1DA
    ctx->pc = 0x1d9e44cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)474 << 16));
    // 0x1d9e450: 0x25cefa30  addiu       $t6, $t6, -0x5D0
    ctx->pc = 0x1d9e450u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294965808));
    // 0x1d9e454: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9e454u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d9e458: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d9e458u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d9e45c: 0x1a00008  jr          $t5
    ctx->pc = 0x1D9E45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9E464u: goto label_1d9e464;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E45Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D9E464u;
label_1d9e464:
    // 0x1d9e464: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e468: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9e468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e46c: 0x24060047  addiu       $a2, $zero, 0x47
    ctx->pc = 0x1d9e46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_1d9e470:
    // 0x1d9e470: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d9e470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9e474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9e474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e478: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d9e478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e47c: 0xc767262  jal         func_1D9C988
    ctx->pc = 0x1D9E47Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E484u);
    ctx->pc = 0x1D9E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E47Cu;
    // 0x1d9e480: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C988u, 0x1D9E47Cu, 0x1D9E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E484u;
label_1d9e484:
    // 0x1d9e484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e488: 0xc76725a  jal         func_1D9C968
    ctx->pc = 0x1D9E488u;
    SET_GPR_U32(ctx, 31, 0x1D9E490u);
    ctx->pc = 0x1D9E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E488u;
    // 0x1d9e48c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C968u, 0x1D9E488u, 0x1D9E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E490u;
label_1d9e490:
    // 0x1d9e490: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d9e490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d9e494: 0xc767256  jal         func_1D9C958
    ctx->pc = 0x1D9E494u;
    SET_GPR_U32(ctx, 31, 0x1D9E49Cu);
    ctx->pc = 0x1D9E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E494u;
    // 0x1d9e498: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C958u, 0x1D9E494u, 0x1D9E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E49Cu;
label_1d9e49c:
    // 0x1d9e49c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d9e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d9e4a0: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d9e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d9e4a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d9e4a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d9e4a8: 0xc76725c  jal         func_1D9C970
    ctx->pc = 0x1D9E4A8u;
    SET_GPR_U32(ctx, 31, 0x1D9E4B0u);
    ctx->pc = 0x1D9E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E4A8u;
    // 0x1d9e4ac: 0x2405010c  addiu       $a1, $zero, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C970u, 0x1D9E4A8u, 0x1D9E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E4B0u;
label_1d9e4b0:
    // 0x1d9e4b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9e4b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d9e4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4b8: 0xc767250  jal         func_1D9C940
    ctx->pc = 0x1D9E4B8u;
    SET_GPR_U32(ctx, 31, 0x1D9E4C0u);
    ctx->pc = 0x1D9E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E4B8u;
    // 0x1d9e4bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9C940u, 0x1D9E4B8u, 0x1D9E4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E4C0u;
label_1d9e4c0:
    // 0x1d9e4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d9e4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9e4c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9e4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9e4cc: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x1d9e4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x1d9e4d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d9e4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9e4d4: 0x876725e  j           func_1D9C978
    ctx->pc = 0x1D9E4D4u;
    ctx->pc = 0x1D9E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E4D4u;
    // 0x1d9e4d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9C978u;
    sub_01D9C978_0x1d9c978(rdram, ctx, runtime); return;
    ctx->pc = 0x1D9E4DCu;
}
