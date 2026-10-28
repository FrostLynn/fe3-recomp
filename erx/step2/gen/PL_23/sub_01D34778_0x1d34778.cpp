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

// Function: sub_01D34778
// Address: 0x1d34778 - 0x1d348a0
void sub_01D34778_0x1d34778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01D34778_0x1d34778");
#endif

    switch (ctx->pc) {
        case 0x1d347b0u: goto label_1d347b0;
        case 0x1d347e0u: goto label_1d347e0;
        case 0x1d347f0u: goto label_1d347f0;
        case 0x1d34800u: goto label_1d34800;
        case 0x1d34844u: goto label_1d34844;
        case 0x1d34860u: goto label_1d34860;
        case 0x1d34870u: goto label_1d34870;
        default: break;
    }

    ctx->pc = 0x1d34778u;

    // 0x1d34778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d34778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3477c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d3477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d34780: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1d34780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1d34784: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d34784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d34788: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d34788u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3478c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d3478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d34790: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d34790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d34794: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d34794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d34798: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1d34798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1d3479c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d3479cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d347a0: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1d347a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1d347a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d347a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d347a8: 0xc74cd56  jal         func_1D33558
    ctx->pc = 0x1D347A8u;
    SET_GPR_U32(ctx, 31, 0x1D347B0u);
    ctx->pc = 0x1D347ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D347A8u;
    // 0x1d347ac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33558u, 0x1D347A8u, 0x1D347B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D347B0u;
label_1d347b0:
    // 0x1d347b0: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1d347b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1d347b4: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1d347b4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1d347b8: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1d347b8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d347bc: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1d347bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1d347c0: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1d347c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1d347c4: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1d347c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1d347c8: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1d347c8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1d347cc: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1d347ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1d347d0: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1d347d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1d347d4: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1d347d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1d347d8: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D347D8u;
    SET_GPR_U32(ctx, 31, 0x1D347E0u);
    ctx->pc = 0x1D347DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D347D8u;
    // 0x1d347dc: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D347D8u, 0x1D347E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D347E0u;
label_1d347e0:
    // 0x1d347e0: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1d347e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1d347e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d347e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d347e8: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D347E8u;
    SET_GPR_U32(ctx, 31, 0x1D347F0u);
    ctx->pc = 0x1D347ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D347E8u;
    // 0x1d347ec: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D347E8u, 0x1D347F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D347F0u;
label_1d347f0:
    // 0x1d347f0: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1d347f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1d347f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d347f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d347f8: 0xc74cd48  jal         func_1D33520
    ctx->pc = 0x1D347F8u;
    SET_GPR_U32(ctx, 31, 0x1D34800u);
    ctx->pc = 0x1D347FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D347F8u;
    // 0x1d347fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33520u, 0x1D347F8u, 0x1D34800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34800u;
label_1d34800:
    // 0x1d34800: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1d34800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d34804: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1d34804u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1d34808: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1d34808u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1d3480c: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1d3480cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1d34810: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1d34810u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1d34814: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1d34814u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1d34818: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1d34818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3481c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1d3481cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1d34820: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1d34820u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1d34824: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1d34824u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1d34828: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1d34828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3482c: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1d3482cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1d34830: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1d34830u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1d34834: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1d34834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1d34838: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1d34838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d3483c: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1d3483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1d34840: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1d34840u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1d34844:
    // 0x1d34844: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1d34844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1d34848: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d34848u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1d3484c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1d3484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1d34850: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1d34850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1d34854: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1d34854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1d34858: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D34858u;
    SET_GPR_U32(ctx, 31, 0x1D34860u);
    ctx->pc = 0x1D3485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34858u;
    // 0x1d3485c: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D34858u, 0x1D34860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34860u;
label_1d34860:
    // 0x1d34860: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1d34860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1d34864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d34864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d34868: 0xc74cd46  jal         func_1D33518
    ctx->pc = 0x1D34868u;
    SET_GPR_U32(ctx, 31, 0x1D34870u);
    ctx->pc = 0x1D3486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D34868u;
    // 0x1d3486c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D33518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D33518u, 0x1D34868u, 0x1D34870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D34870u;
label_1d34870:
    // 0x1d34870: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1d34870u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1d34874: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D34874u;
    {
        const bool branch_taken_0x1d34874 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D34878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34874u;
        // 0x1d34878: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d34874) {
            ctx->pc = 0x1D34844u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34844;
        }
    }
    ctx->pc = 0x1D3487Cu;
    // 0x1d3487c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d3487cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d34880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d34884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d34884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34888: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d34888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d3488c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d3488cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d34890: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1d34890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d34894: 0x3e00008  jr          $ra
    ctx->pc = 0x1D34894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D34898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D34894u;
        // 0x1d34898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D34894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3489Cu;
    // 0x1d3489c: 0x0  nop
    ctx->pc = 0x1d3489cu;
    // NOP
    ctx->pc = 0x1d348a0u;
}
