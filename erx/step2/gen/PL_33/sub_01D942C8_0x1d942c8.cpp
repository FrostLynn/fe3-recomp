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

// Function: sub_01D942C8
// Address: 0x1d942c8 - 0x1d943f4
void sub_01D942C8_0x1d942c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D942C8_0x1d942c8");
#endif

    switch (ctx->pc) {
        case 0x1d942e4u: goto label_1d942e4;
        case 0x1d942ecu: goto label_1d942ec;
        case 0x1d94300u: goto label_1d94300;
        case 0x1d94308u: goto label_1d94308;
        case 0x1d9430cu: goto label_1d9430c;
        case 0x1d94348u: goto label_1d94348;
        case 0x1d94388u: goto label_1d94388;
        case 0x1d9439cu: goto label_1d9439c;
        case 0x1d943a8u: goto label_1d943a8;
        case 0x1d943b4u: goto label_1d943b4;
        case 0x1d943c8u: goto label_1d943c8;
        case 0x1d943d8u: goto label_1d943d8;
        default: break;
    }

    ctx->pc = 0x1d942c8u;

    // 0x1d942c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d942c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d942cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d942ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d942d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d942d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d942d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d942d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d942d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d942d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d942dc: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D942DCu;
    SET_GPR_U32(ctx, 31, 0x1D942E4u);
    ctx->pc = 0x1D942E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D942DCu;
    // 0x1d942e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D942DCu, 0x1D942E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D942E4u;
label_1d942e4:
    // 0x1d942e4: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D942E4u;
    SET_GPR_U32(ctx, 31, 0x1D942ECu);
    ctx->pc = 0x1D942E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D942E4u;
    // 0x1d942e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D942E4u, 0x1D942ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D942ECu;
label_1d942ec:
    // 0x1d942ec: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d942ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d942f0: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D942F0u;
    {
        const bool branch_taken_0x1d942f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D942F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D942F0u;
        // 0x1d942f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d942f0) {
            ctx->pc = 0x1D9431Cu;
            goto label_1d9431c;
        }
    }
    ctx->pc = 0x1D942F8u;
    // 0x1d942f8: 0xc764a2c  jal         func_1D928B0
    ctx->pc = 0x1D942F8u;
    SET_GPR_U32(ctx, 31, 0x1D94300u);
    ctx->pc = 0x1D928B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D928B0u, 0x1D942F8u, 0x1D94300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94300u;
label_1d94300:
    // 0x1d94300: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D94300u;
    SET_GPR_U32(ctx, 31, 0x1D94308u);
    ctx->pc = 0x1D94304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94300u;
    // 0x1d94304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D94300u, 0x1D94308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94308u;
label_1d94308:
    // 0x1d94308: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d94308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d9430c:
    // 0x1d9430c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9430cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d94310: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d94310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d94314: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94314u;
        // 0x1d94318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9431Cu;
label_1d9431c:
    // 0x1d9431c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D9431Cu;
    {
        const bool branch_taken_0x1d9431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9431Cu;
        // 0x1d94320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9431c) {
            ctx->pc = 0x1D9430Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9430c;
        }
    }
    ctx->pc = 0x1D94324u;
    // 0x1d94324: 0x0  nop
    ctx->pc = 0x1d94324u;
    // NOP
    // 0x1d94328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d94328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9432c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9432cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d94330: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d94330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d94334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d94334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d94338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d94338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9433c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1d9433cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d94340: 0xc764a18  jal         func_1D92860
    ctx->pc = 0x1D94340u;
    SET_GPR_U32(ctx, 31, 0x1D94348u);
    ctx->pc = 0x1D94344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94340u;
    // 0x1d94344: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92860u, 0x1D94340u, 0x1D94348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D94348u;
label_1d94348:
    // 0x1d94348: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x1d94348u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1d9434c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d9434cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94350: 0x25cefffc  addiu       $t6, $t6, -0x4
    ctx->pc = 0x1d94350u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967292));
    // 0x1d94354: 0x2dcf001c  sltiu       $t7, $t6, 0x1C
    ctx->pc = 0x1d94354u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d94358: 0x11e00046  beqz        $t7, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D94358u;
    {
        const bool branch_taken_0x1d94358 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94358u;
        // 0x1d9435c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94358) {
            ctx->pc = 0x1D94474u;
            return;
        }
    }
    ctx->pc = 0x1D94360u;
    // 0x1d94360: 0xe7880  sll         $t7, $t6, 2
    ctx->pc = 0x1d94360u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x1d94364: 0x3c0e01d9  lui         $t6, 0x1D9
    ctx->pc = 0x1d94364u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)473 << 16));
    // 0x1d94368: 0x25ce5ab0  addiu       $t6, $t6, 0x5AB0
    ctx->pc = 0x1d94368u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 23216));
    // 0x1d9436c: 0x1ee7821  addu        $t7, $t7, $t6
    ctx->pc = 0x1d9436cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 14)));
    // 0x1d94370: 0x8ded0000  lw          $t5, 0x0($t7)
    ctx->pc = 0x1d94370u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x1d94374: 0x1a00008  jr          $t5
    ctx->pc = 0x1D94374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 13);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9437Cu: goto label_1d9437c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94374u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D9437Cu;
label_1d9437c:
    // 0x1d9437c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9437cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d94380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94384: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x1d94384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_1d94388:
    // 0x1d94388: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d94388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9438c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d9438cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94390: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d94390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d94394: 0xc764a22  jal         func_1D92888
    ctx->pc = 0x1D94394u;
    SET_GPR_U32(ctx, 31, 0x1D9439Cu);
    ctx->pc = 0x1D94398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D94394u;
    // 0x1d94398: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92888u, 0x1D94394u, 0x1D9439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9439Cu;
label_1d9439c:
    // 0x1d9439c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d943a0: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D943A0u;
    SET_GPR_U32(ctx, 31, 0x1D943A8u);
    ctx->pc = 0x1D943A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D943A0u;
    // 0x1d943a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D943A0u, 0x1D943A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D943A8u;
label_1d943a8:
    // 0x1d943a8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d943a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d943ac: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D943ACu;
    SET_GPR_U32(ctx, 31, 0x1D943B4u);
    ctx->pc = 0x1D943B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D943ACu;
    // 0x1d943b0: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D943ACu, 0x1D943B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D943B4u;
label_1d943b4:
    // 0x1d943b4: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d943b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d943b8: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1d943b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1d943bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d943bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d943c0: 0xc764a1c  jal         func_1D92870
    ctx->pc = 0x1D943C0u;
    SET_GPR_U32(ctx, 31, 0x1D943C8u);
    ctx->pc = 0x1D943C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D943C0u;
    // 0x1d943c4: 0x24050109  addiu       $a1, $zero, 0x109 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92870u, 0x1D943C0u, 0x1D943C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D943C8u;
label_1d943c8:
    // 0x1d943c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d943c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d943cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d943ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d943d0: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D943D0u;
    SET_GPR_U32(ctx, 31, 0x1D943D8u);
    ctx->pc = 0x1D943D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D943D0u;
    // 0x1d943d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D943D0u, 0x1D943D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D943D8u;
label_1d943d8:
    // 0x1d943d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d943d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d943dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d943dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d943e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d943e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d943e4: 0x240500a7  addiu       $a1, $zero, 0xA7
    ctx->pc = 0x1d943e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x1d943e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d943e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d943ec: 0x8764a1e  j           func_1D92878
    ctx->pc = 0x1D943ECu;
    ctx->pc = 0x1D943F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D943ECu;
    // 0x1d943f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92878u;
    sub_01D92878_0x1d92878(rdram, ctx, runtime); return;
    ctx->pc = 0x1D943F4u;
}
