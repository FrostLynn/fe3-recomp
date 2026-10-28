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

// Function: sub_01D7F390
// Address: 0x1d7f390 - 0x1d7f4a0
void sub_01D7F390_0x1d7f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F390_0x1d7f390");
#endif

    switch (ctx->pc) {
        case 0x1d7f3acu: goto label_1d7f3ac;
        case 0x1d7f3b4u: goto label_1d7f3b4;
        case 0x1d7f3c8u: goto label_1d7f3c8;
        case 0x1d7f3d0u: goto label_1d7f3d0;
        case 0x1d7f3d4u: goto label_1d7f3d4;
        case 0x1d7f414u: goto label_1d7f414;
        case 0x1d7f424u: goto label_1d7f424;
        case 0x1d7f438u: goto label_1d7f438;
        case 0x1d7f460u: goto label_1d7f460;
        case 0x1d7f46cu: goto label_1d7f46c;
        case 0x1d7f47cu: goto label_1d7f47c;
        default: break;
    }

    ctx->pc = 0x1d7f390u;

    // 0x1d7f390: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f394: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f394u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f398: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f39c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f3a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f3a4: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7F3A4u;
    SET_GPR_U32(ctx, 31, 0x1D7F3ACu);
    ctx->pc = 0x1D7F3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F3A4u;
    // 0x1d7f3a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7F3A4u, 0x1D7F3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F3ACu;
label_1d7f3ac:
    // 0x1d7f3ac: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F3ACu;
    SET_GPR_U32(ctx, 31, 0x1D7F3B4u);
    ctx->pc = 0x1D7F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F3ACu;
    // 0x1d7f3b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F3ACu, 0x1D7F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F3B4u;
label_1d7f3b4:
    // 0x1d7f3b4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f3b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f3b8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7F3B8u;
    {
        const bool branch_taken_0x1d7f3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F3B8u;
        // 0x1d7f3bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f3b8) {
            ctx->pc = 0x1D7F3E4u;
            goto label_1d7f3e4;
        }
    }
    ctx->pc = 0x1D7F3C0u;
    // 0x1d7f3c0: 0xc75f5ec  jal         func_1D7D7B0
    ctx->pc = 0x1D7F3C0u;
    SET_GPR_U32(ctx, 31, 0x1D7F3C8u);
    ctx->pc = 0x1D7D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D7B0u, 0x1D7F3C0u, 0x1D7F3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F3C8u;
label_1d7f3c8:
    // 0x1d7f3c8: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F3C8u;
    SET_GPR_U32(ctx, 31, 0x1D7F3D0u);
    ctx->pc = 0x1D7F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F3C8u;
    // 0x1d7f3cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F3C8u, 0x1D7F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F3D0u;
label_1d7f3d0:
    // 0x1d7f3d0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7f3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7f3d4:
    // 0x1d7f3d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f3d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f3d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F3DCu;
        // 0x1d7f3e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F3E4u;
label_1d7f3e4:
    // 0x1d7f3e4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7F3E4u;
    {
        const bool branch_taken_0x1d7f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F3E4u;
        // 0x1d7f3e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f3e4) {
            ctx->pc = 0x1D7F3D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f3d4;
        }
    }
    ctx->pc = 0x1D7F3ECu;
    // 0x1d7f3ec: 0x0  nop
    ctx->pc = 0x1d7f3ecu;
    // NOP
    // 0x1d7f3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f3f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f3f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d7f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d7f3fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7f400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f404: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d7f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d7f408: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7f408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7f40c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F40Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F414u);
    ctx->pc = 0x1D7F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F40Cu;
    // 0x1d7f410: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F40Cu, 0x1D7F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F414u;
label_1d7f414:
    // 0x1d7f414: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7f414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7f418: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d7f418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f41c: 0xc75f5d8  jal         func_1D7D760
    ctx->pc = 0x1D7F41Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F424u);
    ctx->pc = 0x1D7F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F41Cu;
    // 0x1d7f420: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D760u, 0x1D7F41Cu, 0x1D7F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F424u;
label_1d7f424:
    // 0x1d7f424: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7f424u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f42c: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x1d7f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x1d7f430: 0xc75f5de  jal         func_1D7D778
    ctx->pc = 0x1D7F430u;
    SET_GPR_U32(ctx, 31, 0x1D7F438u);
    ctx->pc = 0x1D7F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F430u;
    // 0x1d7f434: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D778u, 0x1D7F430u, 0x1D7F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F438u;
label_1d7f438:
    // 0x1d7f438: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d7f438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d7f43c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7f43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f440: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d7f440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d7f444: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f448: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7f448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f44c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7f44cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f450: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7f450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7f454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f458: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F458u;
    SET_GPR_U32(ctx, 31, 0x1D7F460u);
    ctx->pc = 0x1D7F45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F458u;
    // 0x1d7f45c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F458u, 0x1D7F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F460u;
label_1d7f460:
    // 0x1d7f460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f464: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7F464u;
    SET_GPR_U32(ctx, 31, 0x1D7F46Cu);
    ctx->pc = 0x1D7F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F464u;
    // 0x1d7f468: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7F464u, 0x1D7F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F46Cu;
label_1d7f46c:
    // 0x1d7f46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f470: 0x24050104  addiu       $a1, $zero, 0x104
    ctx->pc = 0x1d7f470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x1d7f474: 0xc75f5dc  jal         func_1D7D770
    ctx->pc = 0x1D7F474u;
    SET_GPR_U32(ctx, 31, 0x1D7F47Cu);
    ctx->pc = 0x1D7F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F474u;
    // 0x1d7f478: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D770u, 0x1D7F474u, 0x1D7F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F47Cu;
label_1d7f47c:
    // 0x1d7f47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f48c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f48cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f490: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d7f490u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f494: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d7f494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d7f498: 0x875f5d0  j           func_1D7D740
    ctx->pc = 0x1D7F498u;
    ctx->pc = 0x1D7F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F498u;
    // 0x1d7f49c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    sub_01D7D740_0x1d7d740(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F4A0u;
}
