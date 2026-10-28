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

// Function: sub_01CF07A0
// Address: 0x1cf07a0 - 0x1cf08c8
void sub_01CF07A0_0x1cf07a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF07A0_0x1cf07a0");
#endif

    switch (ctx->pc) {
        case 0x1cf07d8u: goto label_1cf07d8;
        case 0x1cf0808u: goto label_1cf0808;
        case 0x1cf0818u: goto label_1cf0818;
        case 0x1cf0828u: goto label_1cf0828;
        case 0x1cf086cu: goto label_1cf086c;
        case 0x1cf0888u: goto label_1cf0888;
        case 0x1cf0898u: goto label_1cf0898;
        default: break;
    }

    ctx->pc = 0x1cf07a0u;

    // 0x1cf07a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf07a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf07a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cf07a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cf07a8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cf07a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cf07ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf07acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf07b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cf07b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf07b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cf07b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cf07b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cf07b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cf07bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cf07bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cf07c0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1cf07c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1cf07c4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cf07c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf07c8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cf07c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf07cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cf07ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf07d0: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF07D0u;
    SET_GPR_U32(ctx, 31, 0x1CF07D8u);
    ctx->pc = 0x1CF07D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF07D0u;
    // 0x1cf07d4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF07D0u, 0x1CF07D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF07D8u;
label_1cf07d8:
    // 0x1cf07d8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1cf07d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cf07dc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1cf07dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cf07e0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1cf07e0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cf07e4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1cf07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1cf07e8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1cf07e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1cf07ec: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cf07ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cf07f0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1cf07f0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cf07f4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cf07f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cf07f8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cf07f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cf07fc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cf07fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cf0800: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0800u;
    SET_GPR_U32(ctx, 31, 0x1CF0808u);
    ctx->pc = 0x1CF0804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0800u;
    // 0x1cf0804: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0800u, 0x1CF0808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0808u;
label_1cf0808:
    // 0x1cf0808: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1cf0808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cf080c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf080cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0810: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0810u;
    SET_GPR_U32(ctx, 31, 0x1CF0818u);
    ctx->pc = 0x1CF0814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0810u;
    // 0x1cf0814: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0810u, 0x1CF0818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0818u;
label_1cf0818:
    // 0x1cf0818: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1cf0818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1cf081c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf081cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0820: 0xc73bd4a  jal         func_1CEF528
    ctx->pc = 0x1CF0820u;
    SET_GPR_U32(ctx, 31, 0x1CF0828u);
    ctx->pc = 0x1CF0824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0820u;
    // 0x1cf0824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF528u, 0x1CF0820u, 0x1CF0828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0828u;
label_1cf0828:
    // 0x1cf0828: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1cf0828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf082c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cf082cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cf0830: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1cf0830u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cf0834: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1cf0834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1cf0838: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cf0838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cf083c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1cf083cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1cf0840: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1cf0840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0844: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1cf0844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1cf0848: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1cf0848u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1cf084c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cf084cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cf0850: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1cf0850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf0854: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1cf0854u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1cf0858: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1cf0858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1cf085c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1cf085cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1cf0860: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1cf0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf0864: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1cf0864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1cf0868: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1cf0868u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1cf086c:
    // 0x1cf086c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1cf086cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1cf0870: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cf0870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cf0874: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1cf0874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cf0878: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cf0878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cf087c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1cf087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1cf0880: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0880u;
    SET_GPR_U32(ctx, 31, 0x1CF0888u);
    ctx->pc = 0x1CF0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0880u;
    // 0x1cf0884: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0880u, 0x1CF0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0888u;
label_1cf0888:
    // 0x1cf0888: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1cf0888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1cf088c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf0890: 0xc73bd46  jal         func_1CEF518
    ctx->pc = 0x1CF0890u;
    SET_GPR_U32(ctx, 31, 0x1CF0898u);
    ctx->pc = 0x1CF0894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF0890u;
    // 0x1cf0894: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF518u, 0x1CF0890u, 0x1CF0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF0898u;
label_1cf0898:
    // 0x1cf0898: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1cf0898u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf089c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CF089Cu;
    {
        const bool branch_taken_0x1cf089c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF089Cu;
        // 0x1cf08a0: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf089c) {
            ctx->pc = 0x1CF086Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf086c;
        }
    }
    ctx->pc = 0x1CF08A4u;
    // 0x1cf08a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf08a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf08a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cf08a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cf08ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cf08acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf08b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cf08b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf08b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cf08b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf08b8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cf08b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cf08bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF08BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF08BCu;
        // 0x1cf08c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF08BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF08C4u;
    // 0x1cf08c4: 0x0  nop
    ctx->pc = 0x1cf08c4u;
    // NOP
    ctx->pc = 0x1cf08c8u;
}
