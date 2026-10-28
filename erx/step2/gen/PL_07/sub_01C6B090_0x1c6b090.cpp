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

// Function: sub_01C6B090
// Address: 0x1c6b090 - 0x1c6b1b8
void sub_01C6B090_0x1c6b090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01C6B090_0x1c6b090");
#endif

    switch (ctx->pc) {
        case 0x1c6b0c8u: goto label_1c6b0c8;
        case 0x1c6b0f8u: goto label_1c6b0f8;
        case 0x1c6b108u: goto label_1c6b108;
        case 0x1c6b118u: goto label_1c6b118;
        case 0x1c6b15cu: goto label_1c6b15c;
        case 0x1c6b178u: goto label_1c6b178;
        case 0x1c6b188u: goto label_1c6b188;
        default: break;
    }

    ctx->pc = 0x1c6b090u;

    // 0x1c6b090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6b094: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6b098: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1c6b098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1c6b09c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6b09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6b0a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c6b0a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b0a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6b0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6b0a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6b0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6b0ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1c6b0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1c6b0b0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1c6b0b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1c6b0b4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1c6b0b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b0b8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1c6b0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c6b0bc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c6b0bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b0c0: 0xc71a798  jal         func_1C69E60
    ctx->pc = 0x1C6B0C0u;
    SET_GPR_U32(ctx, 31, 0x1C6B0C8u);
    ctx->pc = 0x1C6B0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B0C0u;
    // 0x1c6b0c4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E60u, 0x1C6B0C0u, 0x1C6B0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0C8u;
label_1c6b0c8:
    // 0x1c6b0c8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1c6b0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1c6b0cc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1c6b0ccu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c6b0d0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1c6b0d0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c6b0d4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1c6b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1c6b0d8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1c6b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1c6b0dc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1c6b0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1c6b0e0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1c6b0e0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1c6b0e4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1c6b0e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1c6b0e8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1c6b0e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1c6b0ec: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1c6b0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1c6b0f0: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B0F0u;
    SET_GPR_U32(ctx, 31, 0x1C6B0F8u);
    ctx->pc = 0x1C6B0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B0F0u;
    // 0x1c6b0f4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B0F0u, 0x1C6B0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B0F8u;
label_1c6b0f8:
    // 0x1c6b0f8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c6b0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c6b0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6b0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b100: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B100u;
    SET_GPR_U32(ctx, 31, 0x1C6B108u);
    ctx->pc = 0x1C6B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B100u;
    // 0x1c6b104: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B100u, 0x1C6B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B108u;
label_1c6b108:
    // 0x1c6b108: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1c6b108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1c6b10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6b10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b110: 0xc71a78a  jal         func_1C69E28
    ctx->pc = 0x1C6B110u;
    SET_GPR_U32(ctx, 31, 0x1C6B118u);
    ctx->pc = 0x1C6B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B110u;
    // 0x1c6b114: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E28u, 0x1C6B110u, 0x1C6B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B118u;
label_1c6b118:
    // 0x1c6b118: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1c6b118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b11c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1c6b11cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1c6b120: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1c6b120u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6b124: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1c6b124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1c6b128: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1c6b128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1c6b12c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1c6b12cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1c6b130: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1c6b130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b134: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1c6b134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1c6b138: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1c6b138u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1c6b13c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1c6b13cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1c6b140: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1c6b140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c6b144: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1c6b144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1c6b148: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1c6b148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1c6b14c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1c6b14cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1c6b150: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1c6b150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c6b154: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1c6b154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1c6b158: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1c6b158u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1c6b15c:
    // 0x1c6b15c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1c6b15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1c6b160: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c6b160u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1c6b164: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1c6b164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1c6b168: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1c6b168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c6b16c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1c6b16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1c6b170: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B170u;
    SET_GPR_U32(ctx, 31, 0x1C6B178u);
    ctx->pc = 0x1C6B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B170u;
    // 0x1c6b174: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B170u, 0x1C6B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B178u;
label_1c6b178:
    // 0x1c6b178: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1c6b178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1c6b17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c6b17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6b180: 0xc71a786  jal         func_1C69E18
    ctx->pc = 0x1C6B180u;
    SET_GPR_U32(ctx, 31, 0x1C6B188u);
    ctx->pc = 0x1C6B184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6B180u;
    // 0x1c6b184: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C69E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C69E18u, 0x1C6B180u, 0x1C6B188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6B188u;
label_1c6b188:
    // 0x1c6b188: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1c6b188u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c6b18c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1C6B18Cu;
    {
        const bool branch_taken_0x1c6b18c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B18Cu;
        // 0x1c6b190: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6b18c) {
            ctx->pc = 0x1C6B15Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6b15c;
        }
    }
    ctx->pc = 0x1C6B194u;
    // 0x1c6b194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6b194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6b198: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6b198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6b19c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6b19cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6b1a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6b1a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6b1a4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1c6b1a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6b1a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c6b1a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6B1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6B1ACu;
        // 0x1c6b1b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6B1B4u;
    // 0x1c6b1b4: 0x0  nop
    ctx->pc = 0x1c6b1b4u;
    // NOP
    ctx->pc = 0x1c6b1b8u;
}
