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

// Function: sub_01CB8380
// Address: 0x1cb8380 - 0x1cb84ac
void sub_01CB8380_0x1cb8380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB8380_0x1cb8380");
#endif

    switch (ctx->pc) {
        case 0x1cb839cu: goto label_1cb839c;
        case 0x1cb83a4u: goto label_1cb83a4;
        case 0x1cb83b8u: goto label_1cb83b8;
        case 0x1cb83c0u: goto label_1cb83c0;
        case 0x1cb83c4u: goto label_1cb83c4;
        case 0x1cb8400u: goto label_1cb8400;
        case 0x1cb8440u: goto label_1cb8440;
        case 0x1cb8454u: goto label_1cb8454;
        case 0x1cb8460u: goto label_1cb8460;
        case 0x1cb846cu: goto label_1cb846c;
        case 0x1cb8480u: goto label_1cb8480;
        case 0x1cb8490u: goto label_1cb8490;
        default: break;
    }

    ctx->pc = 0x1cb8380u;

    // 0x1cb8380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb8380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb8384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb8384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb8388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb8388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb838c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb838cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8390: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb8390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb8394: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB8394u;
    SET_GPR_U32(ctx, 31, 0x1CB839Cu);
    ctx->pc = 0x1CB8398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8394u;
    // 0x1cb8398: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB8394u, 0x1CB839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB839Cu;
label_1cb839c:
    // 0x1cb839c: 0xc72d9d2  jal         func_1CB6748
    ctx->pc = 0x1CB839Cu;
    SET_GPR_U32(ctx, 31, 0x1CB83A4u);
    ctx->pc = 0x1CB83A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB839Cu;
    // 0x1cb83a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6748u, 0x1CB839Cu, 0x1CB83A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB83A4u;
label_1cb83a4:
    // 0x1cb83a4: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1cb83a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb83a8: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1CB83A8u;
    {
        const bool branch_taken_0x1cb83a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1CB83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB83A8u;
        // 0x1cb83ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb83a8) {
            ctx->pc = 0x1CB83D4u;
            goto label_1cb83d4;
        }
    }
    ctx->pc = 0x1CB83B0u;
    // 0x1cb83b0: 0xc72d9ec  jal         func_1CB67B0
    ctx->pc = 0x1CB83B0u;
    SET_GPR_U32(ctx, 31, 0x1CB83B8u);
    ctx->pc = 0x1CB67B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB67B0u, 0x1CB83B0u, 0x1CB83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB83B8u;
label_1cb83b8:
    // 0x1cb83b8: 0xc72d9d4  jal         func_1CB6750
    ctx->pc = 0x1CB83B8u;
    SET_GPR_U32(ctx, 31, 0x1CB83C0u);
    ctx->pc = 0x1CB83BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB83B8u;
    // 0x1cb83bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6750u, 0x1CB83B8u, 0x1CB83C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB83C0u;
label_1cb83c0:
    // 0x1cb83c0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1cb83c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1cb83c4:
    // 0x1cb83c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb83c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb83c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb83c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb83cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB83CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB83D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB83CCu;
        // 0x1cb83d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB83CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB83D4u;
label_1cb83d4:
    // 0x1cb83d4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CB83D4u;
    {
        const bool branch_taken_0x1cb83d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB83D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB83D4u;
        // 0x1cb83d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb83d4) {
            ctx->pc = 0x1CB83C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb83c4;
        }
    }
    ctx->pc = 0x1CB83DCu;
    // 0x1cb83dc: 0x0  nop
    ctx->pc = 0x1cb83dcu;
    // NOP
    // 0x1cb83e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb83e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb83e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb83e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb83e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb83e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb83ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb83ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb83f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb83f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb83f4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1cb83f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cb83f8: 0xc72d9d8  jal         func_1CB6760
    ctx->pc = 0x1CB83F8u;
    SET_GPR_U32(ctx, 31, 0x1CB8400u);
    ctx->pc = 0x1CB83FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB83F8u;
    // 0x1cb83fc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6760u, 0x1CB83F8u, 0x1CB8400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8400u;
label_1cb8400:
    // 0x1cb8400: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1cb8400u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1cb8404: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb8404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8408: 0x25cefff8  addiu       $t6, $t6, -0x8
    ctx->pc = 0x1cb8408u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967288));
    // 0x1cb840c: 0x2dcf0018  sltiu       $t7, $t6, 0x18
    ctx->pc = 0x1cb840cu;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1cb8410: 0x11e0003e  beqz        $t7, . + 4 + (0x3E << 2)
    ctx->pc = 0x1CB8410u;
    {
        const bool branch_taken_0x1cb8410 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB8414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8410u;
        // 0x1cb8414: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb8410) {
            ctx->pc = 0x1CB850Cu;
            return;
        }
    }
    ctx->pc = 0x1CB8418u;
    // 0x1cb8418: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1cb8418u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1cb841c: 0x3c0e01cc  lui         $t6, 0x1CC
    ctx->pc = 0x1cb841cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)460 << 16));
    // 0x1cb8420: 0x25ce9f30  addiu       $t6, $t6, -0x60D0
    ctx->pc = 0x1cb8420u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294942512));
    // 0x1cb8424: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1cb8424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1cb8428: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1cb8428u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1cb842c: 0x1a00008  jr          $t5
    ctx->pc = 0x1CB842Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CB8434u: goto label_1cb8434;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB842Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1CB8434u;
label_1cb8434:
    // 0x1cb8434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cb8438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb843c: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1cb843cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1cb8440:
    // 0x1cb8440: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb8440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cb8444: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb8444u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8448: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cb8448u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb844c: 0xc72d9e2  jal         func_1CB6788
    ctx->pc = 0x1CB844Cu;
    SET_GPR_U32(ctx, 31, 0x1CB8454u);
    ctx->pc = 0x1CB8450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB844Cu;
    // 0x1cb8450: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6788u, 0x1CB844Cu, 0x1CB8454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8454u;
label_1cb8454:
    // 0x1cb8454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8458: 0xc72d9da  jal         func_1CB6768
    ctx->pc = 0x1CB8458u;
    SET_GPR_U32(ctx, 31, 0x1CB8460u);
    ctx->pc = 0x1CB845Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8458u;
    // 0x1cb845c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6768u, 0x1CB8458u, 0x1CB8460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8460u;
label_1cb8460:
    // 0x1cb8460: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cb8460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cb8464: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB8464u;
    SET_GPR_U32(ctx, 31, 0x1CB846Cu);
    ctx->pc = 0x1CB8468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8464u;
    // 0x1cb8468: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB8464u, 0x1CB846Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB846Cu;
label_1cb846c:
    // 0x1cb846c: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1cb846cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1cb8470: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1cb8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1cb8474: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1cb8474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cb8478: 0xc72d9dc  jal         func_1CB6770
    ctx->pc = 0x1CB8478u;
    SET_GPR_U32(ctx, 31, 0x1CB8480u);
    ctx->pc = 0x1CB847Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8478u;
    // 0x1cb847c: 0x240500cc  addiu       $a1, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6770u, 0x1CB8478u, 0x1CB8480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8480u;
label_1cb8480:
    // 0x1cb8480: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb8480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb8484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8488: 0xc72d9d0  jal         func_1CB6740
    ctx->pc = 0x1CB8488u;
    SET_GPR_U32(ctx, 31, 0x1CB8490u);
    ctx->pc = 0x1CB848Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8488u;
    // 0x1cb848c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6740u, 0x1CB8488u, 0x1CB8490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8490u;
label_1cb8490:
    // 0x1cb8490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb8494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb8494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb8498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb8498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb849c: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x1cb849cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x1cb84a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb84a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb84a4: 0x872d9de  j           func_1CB6778
    ctx->pc = 0x1CB84A4u;
    ctx->pc = 0x1CB84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB84A4u;
    // 0x1cb84a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6778u;
    sub_01CB6778_0x1cb6778(rdram, ctx, runtime); return;
    ctx->pc = 0x1CB84ACu;
}
