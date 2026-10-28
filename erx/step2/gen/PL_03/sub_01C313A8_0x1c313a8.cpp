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

// Function: sub_01C313A8
// Address: 0x1c313a8 - 0x1c314a8
void sub_01C313A8_0x1c313a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C313A8_0x1c313a8");
#endif

    switch (ctx->pc) {
        case 0x1c313c4u: goto label_1c313c4;
        case 0x1c313ccu: goto label_1c313cc;
        case 0x1c313e0u: goto label_1c313e0;
        case 0x1c313e4u: goto label_1c313e4;
        case 0x1c31420u: goto label_1c31420;
        case 0x1c3144cu: goto label_1c3144c;
        case 0x1c31458u: goto label_1c31458;
        case 0x1c31464u: goto label_1c31464;
        case 0x1c31478u: goto label_1c31478;
        case 0x1c31488u: goto label_1c31488;
        default: break;
    }

    ctx->pc = 0x1c313a8u;

    // 0x1c313a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c313a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c313ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c313acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c313b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c313b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c313b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c313b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c313b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c313b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c313bc: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C313BCu;
    SET_GPR_U32(ctx, 31, 0x1C313C4u);
    ctx->pc = 0x1C313C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C313BCu;
    // 0x1c313c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C313BCu, 0x1C313C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C313C4u;
label_1c313c4:
    // 0x1c313c4: 0xc70bdd2  jal         func_1C2F748
    ctx->pc = 0x1C313C4u;
    SET_GPR_U32(ctx, 31, 0x1C313CCu);
    ctx->pc = 0x1C313C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C313C4u;
    // 0x1c313c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F748u, 0x1C313C4u, 0x1C313CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C313CCu;
label_1c313cc:
    // 0x1c313cc: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1c313ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c313d0: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C313D0u;
    {
        const bool branch_taken_0x1c313d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1C313D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C313D0u;
        // 0x1c313d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c313d0) {
            ctx->pc = 0x1C313F4u;
            goto label_1c313f4;
        }
    }
    ctx->pc = 0x1C313D8u;
    // 0x1c313d8: 0xc70bdd4  jal         func_1C2F750
    ctx->pc = 0x1C313D8u;
    SET_GPR_U32(ctx, 31, 0x1C313E0u);
    ctx->pc = 0x1C2F750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F750u, 0x1C313D8u, 0x1C313E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C313E0u;
label_1c313e0:
    // 0x1c313e0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1c313e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1c313e4:
    // 0x1c313e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c313e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c313e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c313e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c313ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C313ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C313F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C313ECu;
        // 0x1c313f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C313ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C313F4u;
label_1c313f4:
    // 0x1c313f4: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C313F4u;
    {
        const bool branch_taken_0x1c313f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C313F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C313F4u;
        // 0x1c313f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c313f4) {
            ctx->pc = 0x1C313E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c313e4;
        }
    }
    ctx->pc = 0x1C313FCu;
    // 0x1c313fc: 0x0  nop
    ctx->pc = 0x1c313fcu;
    // NOP
    // 0x1c31400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c31400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c31404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c31404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c31408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c31408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c3140c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c3140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c31410: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c31410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31414: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1c31414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c31418: 0xc70bdd8  jal         func_1C2F760
    ctx->pc = 0x1C31418u;
    SET_GPR_U32(ctx, 31, 0x1C31420u);
    ctx->pc = 0x1C3141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31418u;
    // 0x1c3141c: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F760u, 0x1C31418u, 0x1C31420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31420u;
label_1c31420:
    // 0x1c31420: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1c31420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1c31424: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c31424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c31428: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c31428u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3142c: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1c3142cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c31430: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1c31430u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c31434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31438: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1c31438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c3143c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3143cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c31440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31444: 0xc70bde2  jal         func_1C2F788
    ctx->pc = 0x1C31444u;
    SET_GPR_U32(ctx, 31, 0x1C3144Cu);
    ctx->pc = 0x1C31448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31444u;
    // 0x1c31448: 0x26310390  addiu       $s1, $s1, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F788u, 0x1C31444u, 0x1C3144Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3144Cu;
label_1c3144c:
    // 0x1c3144c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3144cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31450: 0xc70bdda  jal         func_1C2F768
    ctx->pc = 0x1C31450u;
    SET_GPR_U32(ctx, 31, 0x1C31458u);
    ctx->pc = 0x1C31454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31450u;
    // 0x1c31454: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F768u, 0x1C31450u, 0x1C31458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31458u;
label_1c31458:
    // 0x1c31458: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1c31458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c3145c: 0xc70bdd6  jal         func_1C2F758
    ctx->pc = 0x1C3145Cu;
    SET_GPR_U32(ctx, 31, 0x1C31464u);
    ctx->pc = 0x1C31460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3145Cu;
    // 0x1c31460: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F758u, 0x1C3145Cu, 0x1C31464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31464u;
label_1c31464:
    // 0x1c31464: 0xac400430  sw          $zero, 0x430($v0)
    ctx->pc = 0x1c31464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 0));
    // 0x1c31468: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c31468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3146c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1c3146cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c31470: 0xc70bddc  jal         func_1C2F770
    ctx->pc = 0x1C31470u;
    SET_GPR_U32(ctx, 31, 0x1C31478u);
    ctx->pc = 0x1C31474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31470u;
    // 0x1c31474: 0x240500ab  addiu       $a1, $zero, 0xAB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 171));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F770u, 0x1C31470u, 0x1C31478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31478u;
label_1c31478:
    // 0x1c31478: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c31478u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c3147c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3147cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c31480: 0xc70bdd0  jal         func_1C2F740
    ctx->pc = 0x1C31480u;
    SET_GPR_U32(ctx, 31, 0x1C31488u);
    ctx->pc = 0x1C31484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C31480u;
    // 0x1c31484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F740u, 0x1C31480u, 0x1C31488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C31488u;
label_1c31488:
    // 0x1c31488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c31488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3148c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c3148cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c31490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c31490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c31494: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x1c31494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x1c31498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c31498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3149c: 0x870bdde  j           func_1C2F778
    ctx->pc = 0x1C3149Cu;
    ctx->pc = 0x1C314A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3149Cu;
    // 0x1c314a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F778u;
    sub_01C2F778_0x1c2f778(rdram, ctx, runtime); return;
    ctx->pc = 0x1C314A4u;
    // 0x1c314a4: 0x0  nop
    ctx->pc = 0x1c314a4u;
    // NOP
    ctx->pc = 0x1c314a8u;
}
