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

// Function: sub_01C436A8
// Address: 0x1c436a8 - 0x1c437d0
void sub_01C436A8_0x1c436a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C436A8_0x1c436a8");
#endif

    switch (ctx->pc) {
        case 0x1c436e0u: goto label_1c436e0;
        case 0x1c43710u: goto label_1c43710;
        case 0x1c43720u: goto label_1c43720;
        case 0x1c43730u: goto label_1c43730;
        case 0x1c43774u: goto label_1c43774;
        case 0x1c43790u: goto label_1c43790;
        case 0x1c437a0u: goto label_1c437a0;
        default: break;
    }

    ctx->pc = 0x1c436a8u;

    // 0x1c436a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c436a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c436ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c436acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c436b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c436b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c436b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c436b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c436b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c436b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c436bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c436bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c436c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c436c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c436c4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c436c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c436c8: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c436c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c436cc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c436ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c436d0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c436d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c436d4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c436d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c436d8: 0xc710916  jal         func_1C42458
    ctx->pc = 0x1C436D8u;
    SET_GPR_U32(ctx, 31, 0x1C436E0u);
    ctx->pc = 0x1C436DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C436D8u;
    // 0x1c436dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42458u, 0x1C436D8u, 0x1C436E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C436E0u;
label_1c436e0:
    // 0x1c436e0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c436e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c436e4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c436e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c436e8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c436e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c436ec: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c436ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c436f0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c436f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c436f4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c436f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c436f8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c436f8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c436fc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c436fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c43700: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c43700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c43704: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c43704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c43708: 0xc710906  jal         func_1C42418
    ctx->pc = 0x1C43708u;
    SET_GPR_U32(ctx, 31, 0x1C43710u);
    ctx->pc = 0x1C4370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43708u;
    // 0x1c4370c: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42418u, 0x1C43708u, 0x1C43710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43710u;
label_1c43710:
    // 0x1c43710: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c43710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c43714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c43714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43718: 0xc710906  jal         func_1C42418
    ctx->pc = 0x1C43718u;
    SET_GPR_U32(ctx, 31, 0x1C43720u);
    ctx->pc = 0x1C4371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43718u;
    // 0x1c4371c: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42418u, 0x1C43718u, 0x1C43720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43720u;
label_1c43720:
    // 0x1c43720: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c43720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c43724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c43724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43728: 0xc710908  jal         func_1C42420
    ctx->pc = 0x1C43728u;
    SET_GPR_U32(ctx, 31, 0x1C43730u);
    ctx->pc = 0x1C4372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43728u;
    // 0x1c4372c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42420u, 0x1C43728u, 0x1C43730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43730u;
label_1c43730:
    // 0x1c43730: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c43730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c43734: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c43734u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c43738: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c43738u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c4373c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c4373cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c43740: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c43740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c43744: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c43744u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c43748: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c43748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4374c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c4374cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c43750: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c43750u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c43754: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c43754u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c43758: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c43758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c4375c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c4375cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c43760: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c43760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c43764: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c43764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c43768: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c43768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c4376c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c4376cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c43770: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c43770u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c43774:
    // 0x1c43774: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c43774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c43778: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c43778u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c4377c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c4377cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c43780: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c43780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c43784: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c43784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c43788: 0xc710906  jal         func_1C42418
    ctx->pc = 0x1C43788u;
    SET_GPR_U32(ctx, 31, 0x1C43790u);
    ctx->pc = 0x1C4378Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43788u;
    // 0x1c4378c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42418u, 0x1C43788u, 0x1C43790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C43790u;
label_1c43790:
    // 0x1c43790: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c43790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c43794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c43794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43798: 0xc710906  jal         func_1C42418
    ctx->pc = 0x1C43798u;
    SET_GPR_U32(ctx, 31, 0x1C437A0u);
    ctx->pc = 0x1C4379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C43798u;
    // 0x1c4379c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C42418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C42418u, 0x1C43798u, 0x1C437A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C437A0u;
label_1c437a0:
    // 0x1c437a0: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c437a0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c437a4: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C437A4u;
    {
        const bool branch_taken_0x1c437a4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C437A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C437A4u;
        // 0x1c437a8: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c437a4) {
            ctx->pc = 0x1C43774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c43774;
        }
    }
    ctx->pc = 0x1C437ACu;
    // 0x1c437ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c437acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c437b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c437b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c437b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c437b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c437b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c437b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c437bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c437bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c437c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c437c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c437c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C437C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C437C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C437C4u;
        // 0x1c437c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C437C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C437CCu;
    // 0x1c437cc: 0x0  nop
    ctx->pc = 0x1c437ccu;
    // NOP
    ctx->pc = 0x1c437d0u;
}
