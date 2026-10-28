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

// Function: sub_01D93348
// Address: 0x1d93348 - 0x1d93458
void sub_01D93348_0x1d93348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D93348_0x1d93348");
#endif

    switch (ctx->pc) {
        case 0x1d93364u: goto label_1d93364;
        case 0x1d9336cu: goto label_1d9336c;
        case 0x1d93380u: goto label_1d93380;
        case 0x1d93384u: goto label_1d93384;
        case 0x1d933dcu: goto label_1d933dc;
        case 0x1d933ecu: goto label_1d933ec;
        case 0x1d93400u: goto label_1d93400;
        case 0x1d93414u: goto label_1d93414;
        case 0x1d93424u: goto label_1d93424;
        default: break;
    }

    ctx->pc = 0x1d93348u;

    // 0x1d93348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d93348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9334c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d9334cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d93350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d93350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d93354: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d93354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d93358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9335c: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D9335Cu;
    SET_GPR_U32(ctx, 31, 0x1D93364u);
    ctx->pc = 0x1D93360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9335Cu;
    // 0x1d93360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D9335Cu, 0x1D93364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93364u;
label_1d93364:
    // 0x1d93364: 0xc764a12  jal         func_1D92848
    ctx->pc = 0x1D93364u;
    SET_GPR_U32(ctx, 31, 0x1D9336Cu);
    ctx->pc = 0x1D93368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D93364u;
    // 0x1d93368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92848u, 0x1D93364u, 0x1D9336Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9336Cu;
label_1d9336c:
    // 0x1d9336c: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x1d9336cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d93370: 0x144f0008  bne         $v0, $t7, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D93370u;
    {
        const bool branch_taken_0x1d93370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        ctx->pc = 0x1D93374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93370u;
        // 0x1d93374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93370) {
            ctx->pc = 0x1D93394u;
            goto label_1d93394;
        }
    }
    ctx->pc = 0x1D93378u;
    // 0x1d93378: 0xc764a14  jal         func_1D92850
    ctx->pc = 0x1D93378u;
    SET_GPR_U32(ctx, 31, 0x1D93380u);
    ctx->pc = 0x1D92850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92850u, 0x1D93378u, 0x1D93380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93380u;
label_1d93380:
    // 0x1d93380: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d93380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d93384:
    // 0x1d93384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d93388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9338c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9338Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D93390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9338Cu;
        // 0x1d93390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9338Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D93394u;
label_1d93394:
    // 0x1d93394: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D93394u;
    {
        const bool branch_taken_0x1d93394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93394u;
        // 0x1d93398: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93394) {
            ctx->pc = 0x1D93384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d93384;
        }
    }
    ctx->pc = 0x1D9339Cu;
    // 0x1d9339c: 0x0  nop
    ctx->pc = 0x1d9339cu;
    // NOP
    // 0x1d933a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d933a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d933a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d933a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d933a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d933a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d933ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d933acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d933b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d933b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d933b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d933b8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1d933b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933bc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d933bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d933c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d933c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d933c4: 0x30f100ff  andi        $s1, $a3, 0xFF
    ctx->pc = 0x1d933c4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1d933c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d933c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d933cc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d933ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d933d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d933d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933d4: 0xc764a16  jal         func_1D92858
    ctx->pc = 0x1D933D4u;
    SET_GPR_U32(ctx, 31, 0x1D933DCu);
    ctx->pc = 0x1D933D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D933D4u;
    // 0x1d933d8: 0x8c84000c  lw          $a0, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92858u, 0x1D933D4u, 0x1D933DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D933DCu;
label_1d933dc:
    // 0x1d933dc: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1d933dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d933e0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d933e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933e4: 0xc764a18  jal         func_1D92860
    ctx->pc = 0x1D933E4u;
    SET_GPR_U32(ctx, 31, 0x1D933ECu);
    ctx->pc = 0x1D933E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D933E4u;
    // 0x1d933e8: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92860u, 0x1D933E4u, 0x1D933ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D933ECu;
label_1d933ec:
    // 0x1d933ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d933ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d933f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d933f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d933f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d933f8: 0xc764a1a  jal         func_1D92868
    ctx->pc = 0x1D933F8u;
    SET_GPR_U32(ctx, 31, 0x1D93400u);
    ctx->pc = 0x1D933FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D933F8u;
    // 0x1d933fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92868u, 0x1D933F8u, 0x1D93400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93400u;
label_1d93400:
    // 0x1d93400: 0xae400430  sw          $zero, 0x430($s2)
    ctx->pc = 0x1d93400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1072), GPR_U32(ctx, 0));
    // 0x1d93404: 0x26640390  addiu       $a0, $s3, 0x390
    ctx->pc = 0x1d93404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 912));
    // 0x1d93408: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1d93408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9340c: 0xc764a1c  jal         func_1D92870
    ctx->pc = 0x1D9340Cu;
    SET_GPR_U32(ctx, 31, 0x1D93414u);
    ctx->pc = 0x1D93410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9340Cu;
    // 0x1d93410: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92870u, 0x1D9340Cu, 0x1D93414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93414u;
label_1d93414:
    // 0x1d93414: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d93414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d93418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d93418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9341c: 0xc764a10  jal         func_1D92840
    ctx->pc = 0x1D9341Cu;
    SET_GPR_U32(ctx, 31, 0x1D93424u);
    ctx->pc = 0x1D93420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9341Cu;
    // 0x1d93420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D92840u, 0x1D9341Cu, 0x1D93424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D93424u;
label_1d93424:
    // 0x1d93424: 0xa27109b0  sb          $s1, 0x9B0($s3)
    ctx->pc = 0x1d93424u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2480), (uint8_t)GPR_U32(ctx, 17));
    // 0x1d93428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d93428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9342c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d9342cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d93430: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d93430u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d93434: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d93434u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d93438: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d93438u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9343c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9343cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d93440: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d93440u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d93444: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d93444u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d93448: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d93448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d9344c: 0x8764a1e  j           func_1D92878
    ctx->pc = 0x1D9344Cu;
    ctx->pc = 0x1D93450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9344Cu;
    // 0x1d93450: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D92878u;
    sub_01D92878_0x1d92878(rdram, ctx, runtime); return;
    ctx->pc = 0x1D93454u;
    // 0x1d93454: 0x0  nop
    ctx->pc = 0x1d93454u;
    // NOP
    ctx->pc = 0x1d93458u;
}
