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

// Function: sub_01C61318
// Address: 0x1c61318 - 0x1c614c8
void sub_01C61318_0x1c61318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C61318_0x1c61318");
#endif

    switch (ctx->pc) {
        case 0x1c6134cu: goto label_1c6134c;
        case 0x1c61378u: goto label_1c61378;
        case 0x1c6138cu: goto label_1c6138c;
        case 0x1c61394u: goto label_1c61394;
        case 0x1c61398u: goto label_1c61398;
        case 0x1c613d0u: goto label_1c613d0;
        case 0x1c613f8u: goto label_1c613f8;
        case 0x1c61404u: goto label_1c61404;
        case 0x1c61410u: goto label_1c61410;
        case 0x1c61424u: goto label_1c61424;
        case 0x1c61450u: goto label_1c61450;
        case 0x1c6145cu: goto label_1c6145c;
        case 0x1c6147cu: goto label_1c6147c;
        default: break;
    }

    ctx->pc = 0x1c61318u;

    // 0x1c61318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c61318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c6131c: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6131cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c61320: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c61320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c61324: 0x25ef9ce0  addiu       $t7, $t7, -0x6320
    ctx->pc = 0x1c61324u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941920));
    // 0x1c61328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c61328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c6132c: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x1c6132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c61330: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c61330u;
    { uint32_t bits = FAST_READ32(0x1C69CE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c61334: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c61334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c61338: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C61338u;
    {
        const bool branch_taken_0x1c61338 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61338u;
        // 0x1c6133c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61338) {
            ctx->pc = 0x1C61350u;
            goto label_1c61350;
        }
    }
    ctx->pc = 0x1C61340u;
    // 0x1c61340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c61340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c61344: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C61344u;
    SET_GPR_U32(ctx, 31, 0x1C6134Cu);
    ctx->pc = 0x1C61348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61344u;
    // 0x1c61348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C61344u, 0x1C6134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6134Cu;
label_1c6134c:
    // 0x1c6134c: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1c6134cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c61350:
    // 0x1c61350: 0x8e0f0018  lw          $t7, 0x18($s0)
    ctx->pc = 0x1c61350u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1c61354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61358: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1c61358u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1c6135c: 0xae0f0018  sw          $t7, 0x18($s0)
    ctx->pc = 0x1c6135cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 15));
    // 0x1c61360: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c61360u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c61364: 0x25ef9ce4  addiu       $t7, $t7, -0x631C
    ctx->pc = 0x1c61364u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941924));
    // 0x1c61368: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c61368u;
    { uint32_t bits = FAST_READ32(0x1C69CE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6136c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c6136cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c61370: 0xc717d52  jal         func_1C5F548
    ctx->pc = 0x1C61370u;
    SET_GPR_U32(ctx, 31, 0x1C61378u);
    ctx->pc = 0x1C61374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61370u;
    // 0x1c61374: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F548u, 0x1C61370u, 0x1C61378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61378u;
label_1c61378:
    // 0x1c61378: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61378u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6137c: 0x144f000a  bne         $v0, $t7, . + 4 + (0xA << 2)
    ctx->pc = 0x1C6137Cu;
    {
        const bool branch_taken_0x1c6137c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C61380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6137Cu;
        // 0x1c61380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6137c) {
            ctx->pc = 0x1C613A8u;
            goto label_1c613a8;
        }
    }
    ctx->pc = 0x1C61384u;
    // 0x1c61384: 0xc717d6c  jal         func_1C5F5B0
    ctx->pc = 0x1C61384u;
    SET_GPR_U32(ctx, 31, 0x1C6138Cu);
    ctx->pc = 0x1C5F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F5B0u, 0x1C61384u, 0x1C6138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6138Cu;
label_1c6138c:
    // 0x1c6138c: 0xc717d54  jal         func_1C5F550
    ctx->pc = 0x1C6138Cu;
    SET_GPR_U32(ctx, 31, 0x1C61394u);
    ctx->pc = 0x1C61390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6138Cu;
    // 0x1c61390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F550u, 0x1C6138Cu, 0x1C61394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61394u;
label_1c61394:
    // 0x1c61394: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c61394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c61398:
    // 0x1c61398: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c61398u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6139c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c6139cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c613a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C613A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C613A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C613A0u;
        // 0x1c613a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C613A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C613A8u;
label_1c613a8:
    // 0x1c613a8: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C613A8u;
    {
        const bool branch_taken_0x1c613a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C613ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C613A8u;
        // 0x1c613ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c613a8) {
            ctx->pc = 0x1C61398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c61398;
        }
    }
    ctx->pc = 0x1C613B0u;
    // 0x1c613b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c613b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c613b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c613b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c613b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c613b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c613bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c613bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c613c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c613c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c613c4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x1c613c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c613c8: 0xc717d58  jal         func_1C5F560
    ctx->pc = 0x1C613C8u;
    SET_GPR_U32(ctx, 31, 0x1C613D0u);
    ctx->pc = 0x1C613CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C613C8u;
    // 0x1c613cc: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F560u, 0x1C613C8u, 0x1C613D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C613D0u;
label_1c613d0:
    // 0x1c613d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c613d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c613d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c613d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c613d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c613d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c613dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c613dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c613e0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c613e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c613e4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c613e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c613e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c613e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c613ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c613ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c613f0: 0xc717d62  jal         func_1C5F588
    ctx->pc = 0x1C613F0u;
    SET_GPR_U32(ctx, 31, 0x1C613F8u);
    ctx->pc = 0x1C613F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C613F0u;
    // 0x1c613f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F588u, 0x1C613F0u, 0x1C613F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C613F8u;
label_1c613f8:
    // 0x1c613f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c613f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c613fc: 0xc717d5a  jal         func_1C5F568
    ctx->pc = 0x1C613FCu;
    SET_GPR_U32(ctx, 31, 0x1C61404u);
    ctx->pc = 0x1C61400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C613FCu;
    // 0x1c61400: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F568u, 0x1C613FCu, 0x1C61404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61404u;
label_1c61404:
    // 0x1c61404: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c61404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c61408: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C61408u;
    SET_GPR_U32(ctx, 31, 0x1C61410u);
    ctx->pc = 0x1C6140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61408u;
    // 0x1c6140c: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C61408u, 0x1C61410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61410u;
label_1c61410:
    // 0x1c61410: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c61410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c61414: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c61414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c61418: 0x26240390  addiu       $a0, $s1, 0x390
    ctx->pc = 0x1c61418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    // 0x1c6141c: 0xc717d5c  jal         func_1C5F570
    ctx->pc = 0x1C6141Cu;
    SET_GPR_U32(ctx, 31, 0x1C61424u);
    ctx->pc = 0x1C61420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6141Cu;
    // 0x1c61420: 0x240500b5  addiu       $a1, $zero, 0xB5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F570u, 0x1C6141Cu, 0x1C61424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61424u;
label_1c61424:
    // 0x1c61424: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c61424u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c61428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c6142c: 0xa22f09b0  sb          $t7, 0x9B0($s1)
    ctx->pc = 0x1c6142cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2480), (uint8_t)GPR_U32(ctx, 15));
    // 0x1c61430: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c61430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61434: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1c61434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1c61438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6143c: 0x3c0f01c7  lui         $t7, 0x1C7
    ctx->pc = 0x1c6143cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)455 << 16));
    // 0x1c61440: 0x25ef9ce8  addiu       $t7, $t7, -0x6318
    ctx->pc = 0x1c61440u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941928));
    // 0x1c61444: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1c61444u;
    { uint32_t bits = FAST_READ32(0x1C69CE8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c61448: 0xc717d50  jal         func_1C5F540
    ctx->pc = 0x1C61448u;
    SET_GPR_U32(ctx, 31, 0x1C61450u);
    ctx->pc = 0x1C6144Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61448u;
    // 0x1c6144c: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F540u, 0x1C61448u, 0x1C61450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C61450u;
label_1c61450:
    // 0x1c61450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c61450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c61454: 0xc717d5e  jal         func_1C5F578
    ctx->pc = 0x1C61454u;
    SET_GPR_U32(ctx, 31, 0x1C6145Cu);
    ctx->pc = 0x1C61458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C61454u;
    // 0x1c61458: 0x24050053  addiu       $a1, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F578u, 0x1C61454u, 0x1C6145Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6145Cu;
label_1c6145c:
    // 0x1c6145c: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x1c6145cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c61460: 0x8dea002c  lw          $t2, 0x2C($t7)
    ctx->pc = 0x1c61460u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1c61464: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x1c61464u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1c61468: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1c61468u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1c6146c: 0x19e00011  blez        $t7, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6146Cu;
    {
        const bool branch_taken_0x1c6146c = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x1C61470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6146Cu;
        // 0x1c61470: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6146c) {
            ctx->pc = 0x1C614B4u;
            goto label_1c614b4;
        }
    }
    ctx->pc = 0x1C61474u;
    // 0x1c61474: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1c61474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c61478: 0x8d4e001c  lw          $t6, 0x1C($t2)
    ctx->pc = 0x1c61478u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
label_1c6147c:
    // 0x1c6147c: 0xc7a00  sll         $t7, $t4, 8
    ctx->pc = 0x1c6147cu;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 12), 8));
    // 0x1c61480: 0x1cf7021  addu        $t6, $t6, $t7
    ctx->pc = 0x1c61480u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1c61484: 0x11c00007  beqz        $t6, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C61484u;
    {
        const bool branch_taken_0x1c61484 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C61488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C61484u;
        // 0x1c61488: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c61484) {
            ctx->pc = 0x1C614A4u;
            goto label_1c614a4;
        }
    }
    ctx->pc = 0x1C6148Cu;
    // 0x1c6148c: 0x8dcd0000  lw          $t5, 0x0($t6)
    ctx->pc = 0x1c6148cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x1c61490: 0x55a90005  bnel        $t5, $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C61490u;
    {
        const bool branch_taken_0x1c61490 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 9));
        if (branch_taken_0x1c61490) {
            ctx->pc = 0x1C61494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C61490u;
            // 0x1c61494: 0x8d6f0000  lw          $t7, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C614A8u;
            goto label_1c614a8;
        }
    }
    ctx->pc = 0x1C61498u;
    // 0x1c61498: 0x8dcf0048  lw          $t7, 0x48($t6)
    ctx->pc = 0x1c61498u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 72)));
    // 0x1c6149c: 0xa1ed0069  sb          $t5, 0x69($t7)
    ctx->pc = 0x1c6149cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 105), (uint8_t)GPR_U32(ctx, 13));
    // 0x1c614a0: 0x8d4b0004  lw          $t3, 0x4($t2)
    ctx->pc = 0x1c614a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1c614a4:
    // 0x1c614a4: 0x8d6f0000  lw          $t7, 0x0($t3)
    ctx->pc = 0x1c614a4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1c614a8:
    // 0x1c614a8: 0x18f782a  slt         $t7, $t4, $t7
    ctx->pc = 0x1c614a8u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x1c614ac: 0x55e0fff3  bnel        $t7, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C614ACu;
    {
        const bool branch_taken_0x1c614ac = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c614ac) {
            ctx->pc = 0x1C614B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C614ACu;
            // 0x1c614b0: 0x8d4e001c  lw          $t6, 0x1C($t2) (Delay Slot)
            SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6147Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6147c;
        }
    }
    ctx->pc = 0x1C614B4u;
label_1c614b4:
    // 0x1c614b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c614b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c614b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c614b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c614bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c614bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c614c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C614C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C614C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C614C0u;
        // 0x1c614c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C614C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C614C8u;
}
