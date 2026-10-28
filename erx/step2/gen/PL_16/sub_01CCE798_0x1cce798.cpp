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

// Function: sub_01CCE798
// Address: 0x1cce798 - 0x1cce8a8
void sub_01CCE798_0x1cce798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CCE798_0x1cce798");
#endif

    switch (ctx->pc) {
        case 0x1cce7c0u: goto label_1cce7c0;
        case 0x1cce800u: goto label_1cce800;
        case 0x1cce854u: goto label_1cce854;
        default: break;
    }

    ctx->pc = 0x1cce798u;

    // 0x1cce798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cce798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cce79c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cce79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cce7a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cce7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cce7a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cce7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cce7a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cce7a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce7ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cce7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cce7b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cce7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce7b4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cce7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cce7b8: 0xc733516  jal         func_1CCD458
    ctx->pc = 0x1CCE7B8u;
    SET_GPR_U32(ctx, 31, 0x1CCE7C0u);
    ctx->pc = 0x1CCE7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE7B8u;
    // 0x1cce7bc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD458u, 0x1CCE7B8u, 0x1CCE7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE7C0u;
label_1cce7c0:
    // 0x1cce7c0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1cce7c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cce7c4: 0x8e4f0004  lw          $t7, 0x4($s2)
    ctx->pc = 0x1cce7c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cce7c8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1cce7c8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cce7cc: 0x26240160  addiu       $a0, $s1, 0x160
    ctx->pc = 0x1cce7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x1cce7d0: 0xae2f0184  sw          $t7, 0x184($s1)
    ctx->pc = 0x1cce7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 15));
    // 0x1cce7d4: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x1cce7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1cce7d8: 0x8dcd0084  lw          $t5, 0x84($t6)
    ctx->pc = 0x1cce7d8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cce7dc: 0x240f0390  addiu       $t7, $zero, 0x390
    ctx->pc = 0x1cce7dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cce7e0: 0x8e4e0008  lw          $t6, 0x8($s2)
    ctx->pc = 0x1cce7e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cce7e4: 0x1cf7018  mult        $t6, $t6, $t7
    ctx->pc = 0x1cce7e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x1cce7e8: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x1cce7e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x1cce7ec: 0x25af00f0  addiu       $t7, $t5, 0xF0
    ctx->pc = 0x1cce7ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 13), 240));
    // 0x1cce7f0: 0x25ad0110  addiu       $t5, $t5, 0x110
    ctx->pc = 0x1cce7f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 272));
    // 0x1cce7f4: 0xae2f0174  sw          $t7, 0x174($s1)
    ctx->pc = 0x1cce7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 15));
    // 0x1cce7f8: 0xc733506  jal         func_1CCD418
    ctx->pc = 0x1CCE7F8u;
    SET_GPR_U32(ctx, 31, 0x1CCE800u);
    ctx->pc = 0x1CCE7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCE7F8u;
    // 0x1cce7fc: 0xae2d0170  sw          $t5, 0x170($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCD418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCD418u, 0x1CCE7F8u, 0x1CCE800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCE800u;
label_1cce800:
    // 0x1cce800: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x1cce800u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cce804: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cce804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cce808: 0x8e4e000c  lw          $t6, 0xC($s2)
    ctx->pc = 0x1cce808u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1cce80c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cce80cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cce810: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cce810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cce814: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x1cce814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce818: 0xae2e0188  sw          $t6, 0x188($s1)
    ctx->pc = 0x1cce818u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 392), GPR_U32(ctx, 14));
    // 0x1cce81c: 0xe6200178  swc1        $f0, 0x178($s1)
    ctx->pc = 0x1cce81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x1cce820: 0x8e4f0010  lw          $t7, 0x10($s2)
    ctx->pc = 0x1cce820u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1cce824: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x1cce824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce828: 0xae2f018c  sw          $t7, 0x18C($s1)
    ctx->pc = 0x1cce828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 15));
    // 0x1cce82c: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1cce82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1cce830: 0x8e4e0014  lw          $t6, 0x14($s2)
    ctx->pc = 0x1cce830u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1cce834: 0x8e0f00b4  lw          $t7, 0xB4($s0)
    ctx->pc = 0x1cce834u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1cce838: 0xae2e0190  sw          $t6, 0x190($s1)
    ctx->pc = 0x1cce838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 14));
    // 0x1cce83c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x1cce83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cce840: 0x1ed7821  addu        $t7, $t7, $t5
    ctx->pc = 0x1cce840u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x1cce844: 0x8e4e0038  lw          $t6, 0x38($s2)
    ctx->pc = 0x1cce844u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x1cce848: 0xae2f017c  sw          $t7, 0x17C($s1)
    ctx->pc = 0x1cce848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 15));
    // 0x1cce84c: 0xe6200194  swc1        $f0, 0x194($s1)
    ctx->pc = 0x1cce84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x1cce850: 0xae2e0198  sw          $t6, 0x198($s1)
    ctx->pc = 0x1cce850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 14));
label_1cce854:
    // 0x1cce854: 0xa7900  sll         $t7, $t2, 4
    ctx->pc = 0x1cce854u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1cce858: 0x1f26021  addu        $t4, $t7, $s2
    ctx->pc = 0x1cce858u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 18)));
    // 0x1cce85c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1cce85cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1cce860: 0x8d8d0040  lw          $t5, 0x40($t4)
    ctx->pc = 0x1cce860u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 64)));
    // 0x1cce864: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x1cce864u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x1cce868: 0x294b0004  slti        $t3, $t2, 0x4
    ctx->pc = 0x1cce868u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1cce86c: 0xaded01a0  sw          $t5, 0x1A0($t7)
    ctx->pc = 0x1cce86cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 416), GPR_U32(ctx, 13));
    // 0x1cce870: 0x8d8e0044  lw          $t6, 0x44($t4)
    ctx->pc = 0x1cce870u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 68)));
    // 0x1cce874: 0xadee01a4  sw          $t6, 0x1A4($t7)
    ctx->pc = 0x1cce874u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 420), GPR_U32(ctx, 14));
    // 0x1cce878: 0x8d8d0048  lw          $t5, 0x48($t4)
    ctx->pc = 0x1cce878u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 72)));
    // 0x1cce87c: 0xaded01a8  sw          $t5, 0x1A8($t7)
    ctx->pc = 0x1cce87cu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 424), GPR_U32(ctx, 13));
    // 0x1cce880: 0x8d8e004c  lw          $t6, 0x4C($t4)
    ctx->pc = 0x1cce880u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 76)));
    // 0x1cce884: 0x1560fff3  bnez        $t3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CCE884u;
    {
        const bool branch_taken_0x1cce884 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE884u;
        // 0x1cce888: 0xadee01ac  sw          $t6, 0x1AC($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 428), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce884) {
            ctx->pc = 0x1CCE854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cce854;
        }
    }
    ctx->pc = 0x1CCE88Cu;
    // 0x1cce88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cce88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cce890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cce890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cce894: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cce894u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cce898: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cce898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cce89c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CCE89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CCE8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCE89Cu;
        // 0x1cce8a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCE89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CCE8A4u;
    // 0x1cce8a4: 0x0  nop
    ctx->pc = 0x1cce8a4u;
    // NOP
    ctx->pc = 0x1cce8a8u;
}
