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

// Function: sub_01D7F270
// Address: 0x1d7f270 - 0x1d7f378
void sub_01D7F270_0x1d7f270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D7F270_0x1d7f270");
#endif

    switch (ctx->pc) {
        case 0x1d7f28cu: goto label_1d7f28c;
        case 0x1d7f294u: goto label_1d7f294;
        case 0x1d7f2a8u: goto label_1d7f2a8;
        case 0x1d7f2b0u: goto label_1d7f2b0;
        case 0x1d7f2b4u: goto label_1d7f2b4;
        case 0x1d7f2f0u: goto label_1d7f2f0;
        case 0x1d7f31cu: goto label_1d7f31c;
        case 0x1d7f328u: goto label_1d7f328;
        case 0x1d7f334u: goto label_1d7f334;
        case 0x1d7f348u: goto label_1d7f348;
        case 0x1d7f358u: goto label_1d7f358;
        default: break;
    }

    ctx->pc = 0x1d7f270u;

    // 0x1d7f270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7f270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7f274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f27c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f280: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d7f280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d7f284: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7F284u;
    SET_GPR_U32(ctx, 31, 0x1D7F28Cu);
    ctx->pc = 0x1D7F288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F284u;
    // 0x1d7f288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7F284u, 0x1D7F28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F28Cu;
label_1d7f28c:
    // 0x1d7f28c: 0xc75f5d2  jal         func_1D7D748
    ctx->pc = 0x1D7F28Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F294u);
    ctx->pc = 0x1D7F290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F28Cu;
    // 0x1d7f290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D748u, 0x1D7F28Cu, 0x1D7F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F294u;
label_1d7f294:
    // 0x1d7f294: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d7f294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f298: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1D7F298u;
    {
        const bool branch_taken_0x1d7f298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D7F29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F298u;
        // 0x1d7f29c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f298) {
            ctx->pc = 0x1D7F2C4u;
            goto label_1d7f2c4;
        }
    }
    ctx->pc = 0x1D7F2A0u;
    // 0x1d7f2a0: 0xc75f5ec  jal         func_1D7D7B0
    ctx->pc = 0x1D7F2A0u;
    SET_GPR_U32(ctx, 31, 0x1D7F2A8u);
    ctx->pc = 0x1D7D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D7B0u, 0x1D7F2A0u, 0x1D7F2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F2A8u;
label_1d7f2a8:
    // 0x1d7f2a8: 0xc75f5d4  jal         func_1D7D750
    ctx->pc = 0x1D7F2A8u;
    SET_GPR_U32(ctx, 31, 0x1D7F2B0u);
    ctx->pc = 0x1D7F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F2A8u;
    // 0x1d7f2ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D750u, 0x1D7F2A8u, 0x1D7F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F2B0u;
label_1d7f2b0:
    // 0x1d7f2b0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7f2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d7f2b4:
    // 0x1d7f2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f2b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d7f2b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F2BCu;
        // 0x1d7f2c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F2C4u;
label_1d7f2c4:
    // 0x1d7f2c4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D7F2C4u;
    {
        const bool branch_taken_0x1d7f2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F2C4u;
        // 0x1d7f2c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7f2c4) {
            ctx->pc = 0x1D7F2B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7f2b4;
        }
    }
    ctx->pc = 0x1D7F2CCu;
    // 0x1d7f2cc: 0x0  nop
    ctx->pc = 0x1d7f2ccu;
    // NOP
    // 0x1d7f2d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d7f2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d7f2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d7f2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d7f2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7f2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7f2dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d7f2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d7f2e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d7f2e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f2e4: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d7f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d7f2e8: 0xc75f5d8  jal         func_1D7D760
    ctx->pc = 0x1D7F2E8u;
    SET_GPR_U32(ctx, 31, 0x1D7F2F0u);
    ctx->pc = 0x1D7F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F2E8u;
    // 0x1d7f2ec: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D760u, 0x1D7F2E8u, 0x1D7F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F2F0u;
label_1d7f2f0:
    // 0x1d7f2f0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d7f2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d7f2f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7f2f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7f2f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d7f2f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f2fc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1d7f2fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f300: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d7f300u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f304: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d7f304u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f308: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1d7f308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d7f30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f310: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7f310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f314: 0xc75f5e2  jal         func_1D7D788
    ctx->pc = 0x1D7F314u;
    SET_GPR_U32(ctx, 31, 0x1D7F31Cu);
    ctx->pc = 0x1D7F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F314u;
    // 0x1d7f318: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D788u, 0x1D7F314u, 0x1D7F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F31Cu;
label_1d7f31c:
    // 0x1d7f31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f320: 0xc75f5da  jal         func_1D7D768
    ctx->pc = 0x1D7F320u;
    SET_GPR_U32(ctx, 31, 0x1D7F328u);
    ctx->pc = 0x1D7F324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F320u;
    // 0x1d7f324: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D768u, 0x1D7F320u, 0x1D7F328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F328u;
label_1d7f328:
    // 0x1d7f328: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d7f328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d7f32c: 0xc75f5d6  jal         func_1D7D758
    ctx->pc = 0x1D7F32Cu;
    SET_GPR_U32(ctx, 31, 0x1D7F334u);
    ctx->pc = 0x1D7F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F32Cu;
    // 0x1d7f330: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D758u, 0x1D7F32Cu, 0x1D7F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F334u;
label_1d7f334:
    // 0x1d7f334: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1d7f334u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1d7f338: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f33c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d7f33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f340: 0xc75f5dc  jal         func_1D7D770
    ctx->pc = 0x1D7F340u;
    SET_GPR_U32(ctx, 31, 0x1D7F348u);
    ctx->pc = 0x1D7F344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F340u;
    // 0x1d7f344: 0x24050103  addiu       $a1, $zero, 0x103 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D770u, 0x1D7F340u, 0x1D7F348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F348u;
label_1d7f348:
    // 0x1d7f348: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d7f348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d7f34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f350: 0xc75f5d0  jal         func_1D7D740
    ctx->pc = 0x1D7F350u;
    SET_GPR_U32(ctx, 31, 0x1D7F358u);
    ctx->pc = 0x1D7F354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F350u;
    // 0x1d7f354: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D740u, 0x1D7F350u, 0x1D7F358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7F358u;
label_1d7f358:
    // 0x1d7f358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7f35c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d7f35cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d7f360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d7f360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d7f364: 0x240500a1  addiu       $a1, $zero, 0xA1
    ctx->pc = 0x1d7f364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1d7f368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7f368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7f36c: 0x875f5de  j           func_1D7D778
    ctx->pc = 0x1D7F36Cu;
    ctx->pc = 0x1D7F370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F36Cu;
    // 0x1d7f370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7D778u;
    sub_01D7D778_0x1d7d778(rdram, ctx, runtime); return;
    ctx->pc = 0x1D7F374u;
    // 0x1d7f374: 0x0  nop
    ctx->pc = 0x1d7f374u;
    // NOP
    ctx->pc = 0x1d7f378u;
}
