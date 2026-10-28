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

// Function: sub_01CB7980
// Address: 0x1cb7980 - 0x1cb7aa8
void sub_01CB7980_0x1cb7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CB7980_0x1cb7980");
#endif

    switch (ctx->pc) {
        case 0x1cb79b8u: goto label_1cb79b8;
        case 0x1cb79e8u: goto label_1cb79e8;
        case 0x1cb79f8u: goto label_1cb79f8;
        case 0x1cb7a08u: goto label_1cb7a08;
        case 0x1cb7a4cu: goto label_1cb7a4c;
        case 0x1cb7a68u: goto label_1cb7a68;
        case 0x1cb7a78u: goto label_1cb7a78;
        default: break;
    }

    ctx->pc = 0x1cb7980u;

    // 0x1cb7980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cb7980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cb7984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cb7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1cb7988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1cb7988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1cb798c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb798cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb7990: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1cb7990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7994: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb7998: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cb7998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1cb799c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1cb799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1cb79a0: 0x265100d0  addiu       $s1, $s2, 0xD0
    ctx->pc = 0x1cb79a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
    // 0x1cb79a4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1cb79a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb79a8: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1cb79a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cb79ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cb79acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb79b0: 0xc72d9d6  jal         func_1CB6758
    ctx->pc = 0x1CB79B0u;
    SET_GPR_U32(ctx, 31, 0x1CB79B8u);
    ctx->pc = 0x1CB79B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB79B0u;
    // 0x1cb79b4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6758u, 0x1CB79B0u, 0x1CB79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB79B8u;
label_1cb79b8:
    // 0x1cb79b8: 0x24500200  addiu       $s0, $v0, 0x200
    ctx->pc = 0x1cb79b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x1cb79bc: 0x8e6f0004  lw          $t7, 0x4($s3)
    ctx->pc = 0x1cb79bcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1cb79c0: 0x8e0e004c  lw          $t6, 0x4C($s0)
    ctx->pc = 0x1cb79c0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cb79c4: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x1cb79c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
    // 0x1cb79c8: 0xae4f00f4  sw          $t7, 0xF4($s2)
    ctx->pc = 0x1cb79c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 244), GPR_U32(ctx, 15));
    // 0x1cb79cc: 0x8dc50084  lw          $a1, 0x84($t6)
    ctx->pc = 0x1cb79ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 132)));
    // 0x1cb79d0: 0x8e6f0008  lw          $t7, 0x8($s3)
    ctx->pc = 0x1cb79d0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1cb79d4: 0x240e0390  addiu       $t6, $zero, 0x390
    ctx->pc = 0x1cb79d4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 912));
    // 0x1cb79d8: 0x1ee7818  mult        $t7, $t7, $t6
    ctx->pc = 0x1cb79d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1cb79dc: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x1cb79dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x1cb79e0: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB79E0u;
    SET_GPR_U32(ctx, 31, 0x1CB79E8u);
    ctx->pc = 0x1CB79E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB79E0u;
    // 0x1cb79e4: 0x24a50110  addiu       $a1, $a1, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB79E0u, 0x1CB79E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB79E8u;
label_1cb79e8:
    // 0x1cb79e8: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1cb79e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1cb79ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb79ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb79f0: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB79F0u;
    SET_GPR_U32(ctx, 31, 0x1CB79F8u);
    ctx->pc = 0x1CB79F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB79F0u;
    // 0x1cb79f4: 0x24a54630  addiu       $a1, $a1, 0x4630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB79F0u, 0x1CB79F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB79F8u;
label_1cb79f8:
    // 0x1cb79f8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x1cb79f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
    // 0x1cb79fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cb79fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a00: 0xc72d9c8  jal         func_1CB6720
    ctx->pc = 0x1CB7A00u;
    SET_GPR_U32(ctx, 31, 0x1CB7A08u);
    ctx->pc = 0x1CB7A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7A00u;
    // 0x1cb7a04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6720u, 0x1CB7A00u, 0x1CB7A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7A08u;
label_1cb7a08:
    // 0x1cb7a08: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x1cb7a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7a0c: 0x240f0048  addiu       $t7, $zero, 0x48
    ctx->pc = 0x1cb7a0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1cb7a10: 0x8e6d0000  lw          $t5, 0x0($s3)
    ctx->pc = 0x1cb7a10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1cb7a14: 0xe64000e0  swc1        $f0, 0xE0($s2)
    ctx->pc = 0x1cb7a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x1cb7a18: 0x1af6818  mult        $t5, $t5, $t7
    ctx->pc = 0x1cb7a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x1cb7a1c: 0x8e0e00b4  lw          $t6, 0xB4($s0)
    ctx->pc = 0x1cb7a1cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1cb7a20: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1cb7a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7a24: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x1cb7a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x1cb7a28: 0x8e6f001c  lw          $t7, 0x1C($s3)
    ctx->pc = 0x1cb7a28u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1cb7a2c: 0x1cd7021  addu        $t6, $t6, $t5
    ctx->pc = 0x1cb7a2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x1cb7a30: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x1cb7a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb7a34: 0xae4f00f8  sw          $t7, 0xF8($s2)
    ctx->pc = 0x1cb7a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 248), GPR_U32(ctx, 15));
    // 0x1cb7a38: 0xe64100ec  swc1        $f1, 0xEC($s2)
    ctx->pc = 0x1cb7a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 236), bits); }
    // 0x1cb7a3c: 0xae4e00e8  sw          $t6, 0xE8($s2)
    ctx->pc = 0x1cb7a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 14));
    // 0x1cb7a40: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x1cb7a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb7a44: 0xe64000f0  swc1        $f0, 0xF0($s2)
    ctx->pc = 0x1cb7a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 240), bits); }
    // 0x1cb7a48: 0x148100  sll         $s0, $s4, 4
    ctx->pc = 0x1cb7a48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_1cb7a4c:
    // 0x1cb7a4c: 0x2708821  addu        $s1, $s3, $s0
    ctx->pc = 0x1cb7a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x1cb7a50: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1cb7a50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1cb7a54: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1cb7a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1cb7a58: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1cb7a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1cb7a5c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x1cb7a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x1cb7a60: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB7A60u;
    SET_GPR_U32(ctx, 31, 0x1CB7A68u);
    ctx->pc = 0x1CB7A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7A60u;
    // 0x1cb7a64: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB7A60u, 0x1CB7A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7A68u;
label_1cb7a68:
    // 0x1cb7a68: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x1cb7a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x1cb7a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb7a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb7a70: 0xc72d9c6  jal         func_1CB6718
    ctx->pc = 0x1CB7A70u;
    SET_GPR_U32(ctx, 31, 0x1CB7A78u);
    ctx->pc = 0x1CB7A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB7A70u;
    // 0x1cb7a74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB6718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB6718u, 0x1CB7A70u, 0x1CB7A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB7A78u;
label_1cb7a78:
    // 0x1cb7a78: 0x2a8f0003  slti        $t7, $s4, 0x3
    ctx->pc = 0x1cb7a78u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cb7a7c: 0x15e0fff3  bnez        $t7, . + 4 + (-0xD << 2)
    ctx->pc = 0x1CB7A7Cu;
    {
        const bool branch_taken_0x1cb7a7c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CB7A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7A7Cu;
        // 0x1cb7a80: 0x148100  sll         $s0, $s4, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb7a7c) {
            ctx->pc = 0x1CB7A4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb7a4c;
        }
    }
    ctx->pc = 0x1CB7A84u;
    // 0x1cb7a84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb7a84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb7a88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb7a88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb7a8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cb7a8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb7a90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cb7a90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cb7a94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1cb7a94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cb7a98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1cb7a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1cb7a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB7A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB7A9Cu;
        // 0x1cb7aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB7A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB7AA4u;
    // 0x1cb7aa4: 0x0  nop
    ctx->pc = 0x1cb7aa4u;
    // NOP
    ctx->pc = 0x1cb7aa8u;
}
