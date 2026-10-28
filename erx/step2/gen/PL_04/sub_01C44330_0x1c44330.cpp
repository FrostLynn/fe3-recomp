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

// Function: sub_01C44330
// Address: 0x1c44330 - 0x1c44454
void sub_01C44330_0x1c44330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C44330_0x1c44330");
#endif

    switch (ctx->pc) {
        case 0x1c4434cu: goto label_1c4434c;
        case 0x1c44354u: goto label_1c44354;
        case 0x1c44368u: goto label_1c44368;
        case 0x1c4436cu: goto label_1c4436c;
        case 0x1c443a8u: goto label_1c443a8;
        case 0x1c443e8u: goto label_1c443e8;
        case 0x1c443fcu: goto label_1c443fc;
        case 0x1c44408u: goto label_1c44408;
        case 0x1c44414u: goto label_1c44414;
        case 0x1c44428u: goto label_1c44428;
        case 0x1c44438u: goto label_1c44438;
        default: break;
    }

    ctx->pc = 0x1c44330u;

    // 0x1c44330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c44330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c44334: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c44334u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c44338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4433c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4433cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c44340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c44344: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C44344u;
    SET_GPR_U32(ctx, 31, 0x1C4434Cu);
    ctx->pc = 0x1C44348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44344u;
    // 0x1c44348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C44344u, 0x1C4434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4434Cu;
label_1c4434c:
    // 0x1c4434c: 0xc710912  jal         func_1C42448
    ctx->pc = 0x1C4434Cu;
    SET_GPR_U32(ctx, 31, 0x1C44354u);
    ctx->pc = 0x1C44350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4434Cu;
    // 0x1c44350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42448u, 0x1C4434Cu, 0x1C44354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44354u;
label_1c44354:
    // 0x1c44354: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c44354u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c44358: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44358u;
    {
        const bool branch_taken_0x1c44358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C4435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44358u;
        // 0x1c4435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44358) {
            ctx->pc = 0x1C4437Cu;
            goto label_1c4437c;
        }
    }
    ctx->pc = 0x1C44360u;
    // 0x1c44360: 0xc710914  jal         func_1C42450
    ctx->pc = 0x1C44360u;
    SET_GPR_U32(ctx, 31, 0x1C44368u);
    ctx->pc = 0x1C42450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42450u, 0x1C44360u, 0x1C44368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44368u;
label_1c44368:
    // 0x1c44368: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c44368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c4436c:
    // 0x1c4436c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4436cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c44370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44374: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C44374u;
        // 0x1c44378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C44374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4437Cu;
label_1c4437c:
    // 0x1c4437c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C4437Cu;
    {
        const bool branch_taken_0x1c4437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C44380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4437Cu;
        // 0x1c44380: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4437c) {
            ctx->pc = 0x1C4436Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4436c;
        }
    }
    ctx->pc = 0x1C44384u;
    // 0x1c44384: 0x0  nop
    ctx->pc = 0x1c44384u;
    // NOP
    // 0x1c44388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c44388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4438c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4438cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c44390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c44394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c44394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c44398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4439c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c4439cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c443a0: 0xc710918  jal         func_1C42460
    ctx->pc = 0x1C443A0u;
    SET_GPR_U32(ctx, 31, 0x1C443A8u);
    ctx->pc = 0x1C443A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C443A0u;
    // 0x1c443a4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42460u, 0x1C443A0u, 0x1C443A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C443A8u;
label_1c443a8:
    // 0x1c443a8: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1c443a8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c443ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c443acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c443b0: 0x25cefff7  addiu       $t6, $t6, -0x9
    ctx->pc = 0x1c443b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967287));
    // 0x1c443b4: 0x2dcf0017  sltiu       $t7, $t6, 0x17
    ctx->pc = 0x1c443b4u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x1c443b8: 0x11e0002a  beqz        $t7, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C443B8u;
    {
        const bool branch_taken_0x1c443b8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C443BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C443B8u;
        // 0x1c443bc: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c443b8) {
            ctx->pc = 0x1C44464u;
            return;
        }
    }
    ctx->pc = 0x1C443C0u;
    // 0x1c443c0: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1c443c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1c443c4: 0x3c0e01c4  lui         $t6, 0x1C4
    ctx->pc = 0x1c443c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)452 << 16));
    // 0x1c443c8: 0x25ce5c30  addiu       $t6, $t6, 0x5C30
    ctx->pc = 0x1c443c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23600));
    // 0x1c443cc: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1c443ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1c443d0: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1c443d0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1c443d4: 0x1a00008  jr          $t5
    ctx->pc = 0x1C443D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C443DCu: goto label_1c443dc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C443D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1C443DCu;
label_1c443dc:
    // 0x1c443dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c443dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c443e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c443e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c443e4: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1c443e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1c443e8:
    // 0x1c443e8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c443e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c443ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c443ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c443f0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c443f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c443f4: 0xc710922  jal         func_1C42488
    ctx->pc = 0x1C443F4u;
    SET_GPR_U32(ctx, 31, 0x1C443FCu);
    ctx->pc = 0x1C443F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C443F4u;
    // 0x1c443f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42488u, 0x1C443F4u, 0x1C443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C443FCu;
label_1c443fc:
    // 0x1c443fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c443fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44400: 0xc71091a  jal         func_1C42468
    ctx->pc = 0x1C44400u;
    SET_GPR_U32(ctx, 31, 0x1C44408u);
    ctx->pc = 0x1C44404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44400u;
    // 0x1c44404: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42468u, 0x1C44400u, 0x1C44408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44408u;
label_1c44408:
    // 0x1c44408: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c44408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c4440c: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C4440Cu;
    SET_GPR_U32(ctx, 31, 0x1C44414u);
    ctx->pc = 0x1C44410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4440Cu;
    // 0x1c44410: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C4440Cu, 0x1C44414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44414u;
label_1c44414:
    // 0x1c44414: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c44414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c44418: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c44418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c4441c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c4441cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c44420: 0xc71091c  jal         func_1C42470
    ctx->pc = 0x1C44420u;
    SET_GPR_U32(ctx, 31, 0x1C44428u);
    ctx->pc = 0x1C44424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44420u;
    // 0x1c44424: 0x240500ae  addiu       $a1, $zero, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42470u, 0x1C44420u, 0x1C44428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44428u;
label_1c44428:
    // 0x1c44428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c44428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c4442c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4442cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44430: 0xc710910  jal         func_1C42440
    ctx->pc = 0x1C44430u;
    SET_GPR_U32(ctx, 31, 0x1C44438u);
    ctx->pc = 0x1C44434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C44430u;
    // 0x1c44434: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42440u, 0x1C44430u, 0x1C44438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C44438u;
label_1c44438:
    // 0x1c44438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c44438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4443c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4443cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c44440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c44440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44444: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x1c44444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1c44448: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c44448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4444c: 0x871091e  j           func_1C42478
    ctx->pc = 0x1C4444Cu;
    ctx->pc = 0x1C44450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4444Cu;
    // 0x1c44450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42478u;
    sub_01C42478_0x1c42478(rdram, ctx, runtime); return;
    ctx->pc = 0x1C44454u;
}
