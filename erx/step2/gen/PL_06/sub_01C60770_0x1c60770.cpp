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

// Function: sub_01C60770
// Address: 0x1c60770 - 0x1c60898
void sub_01C60770_0x1c60770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C60770_0x1c60770");
#endif

    switch (ctx->pc) {
        case 0x1c607a8u: goto label_1c607a8;
        case 0x1c607d8u: goto label_1c607d8;
        case 0x1c607e8u: goto label_1c607e8;
        case 0x1c607f8u: goto label_1c607f8;
        case 0x1c6083cu: goto label_1c6083c;
        case 0x1c60858u: goto label_1c60858;
        case 0x1c60868u: goto label_1c60868;
        default: break;
    }

    ctx->pc = 0x1c60770u;

    // 0x1c60770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c60770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c60774: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c60774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c60778: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c60778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c6077c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6077cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c60780: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c60780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60784: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c60784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c60788: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c60788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6078c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c6078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c60790: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c60790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c60794: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c60794u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60798: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c60798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6079c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6079cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c607a0: 0xc717d56  jal         func_1C5F558
    ctx->pc = 0x1C607A0u;
    SET_GPR_U32(ctx, 31, 0x1C607A8u);
    ctx->pc = 0x1C607A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C607A0u;
    // 0x1c607a4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F558u, 0x1C607A0u, 0x1C607A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C607A8u;
label_1c607a8:
    // 0x1c607a8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c607a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c607ac: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c607acu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c607b0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c607b0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c607b4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c607b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c607b8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c607b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c607bc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c607bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c607c0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c607c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c607c4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c607c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c607c8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c607c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c607cc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c607ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c607d0: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C607D0u;
    SET_GPR_U32(ctx, 31, 0x1C607D8u);
    ctx->pc = 0x1C607D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C607D0u;
    // 0x1c607d4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C607D0u, 0x1C607D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C607D8u;
label_1c607d8:
    // 0x1c607d8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c607d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c607dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c607dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c607e0: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C607E0u;
    SET_GPR_U32(ctx, 31, 0x1C607E8u);
    ctx->pc = 0x1C607E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C607E0u;
    // 0x1c607e4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C607E0u, 0x1C607E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C607E8u;
label_1c607e8:
    // 0x1c607e8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c607e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c607ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c607ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c607f0: 0xc717d48  jal         func_1C5F520
    ctx->pc = 0x1C607F0u;
    SET_GPR_U32(ctx, 31, 0x1C607F8u);
    ctx->pc = 0x1C607F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C607F0u;
    // 0x1c607f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F520u, 0x1C607F0u, 0x1C607F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C607F8u;
label_1c607f8:
    // 0x1c607f8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c607f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c607fc: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c607fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c60800: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c60800u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c60804: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c60804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c60808: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c60808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c6080c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c6080cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c60810: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c60810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60814: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c60814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c60818: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c60818u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c6081c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c6081cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c60820: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c60820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c60824: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c60824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c60828: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c60828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c6082c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c6082cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c60830: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c60830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c60834: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c60834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c60838: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c60838u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c6083c:
    // 0x1c6083c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c6083cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c60840: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c60840u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c60844: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c60844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c60848: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c60848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c6084c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c6084cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c60850: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C60850u;
    SET_GPR_U32(ctx, 31, 0x1C60858u);
    ctx->pc = 0x1C60854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60850u;
    // 0x1c60854: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C60850u, 0x1C60858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60858u;
label_1c60858:
    // 0x1c60858: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c60858u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c6085c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c60860: 0xc717d46  jal         func_1C5F518
    ctx->pc = 0x1C60860u;
    SET_GPR_U32(ctx, 31, 0x1C60868u);
    ctx->pc = 0x1C60864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60860u;
    // 0x1c60864: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5F518u, 0x1C60860u, 0x1C60868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60868u;
label_1c60868:
    // 0x1c60868: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c60868u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c6086c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C6086Cu;
    {
        const bool branch_taken_0x1c6086c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6086Cu;
        // 0x1c60870: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6086c) {
            ctx->pc = 0x1C6083Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6083c;
        }
    }
    ctx->pc = 0x1C60874u;
    // 0x1c60874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c60874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c60878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c60878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6087c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6087cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c60880: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c60880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c60884: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c60884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c60888: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c60888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6088c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C60890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6088Cu;
        // 0x1c60890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C60894u;
    // 0x1c60894: 0x0  nop
    ctx->pc = 0x1c60894u;
    // NOP
    ctx->pc = 0x1c60898u;
}
